# WebSockets Data Guide

## Before Using
This document just specifies the information that will be sent to your WebSockets client.

You can use any WebSockets client to recieve this data, but most non-programmers will probably want to use SAMMI:
- For learning how to set up SAMMI, check the [SAMMI Documentation](https://sammi.solutions/docs/).
- For learning how to set up SAMMI to process data from this mod, check out [Krackatoa's Guide](https://docs.google.com/document/d/1fFRs7567tCdn9gGu_4iLQM8tAB07vP8aDQeLaWrbqUg/).

## WebSockets Mod Configuration

The mod contains a settings file `rev2mod_config.toml` that will be created when you launch the game with the mod.
The default config section will look like this:

```toml
[websockets]
websockets_enabled = true
websocket_ip = '0.0.0.0'
websocket_port = 6651
state_update_hz = 60.0
```

- `websockets_enabled`: Whether the mod sends any data over WebSockets.
- `websocket_ip`: IP address to bind the WebSocket server to. Default is '0.0.0.0' which allows connections from any IP.
- `websocket_port`: Port number to use for the WebSocket server. Default is 6651.
- `state_update_hz`: Frequency of state information being sent over WebSockets, in Hz. Default is 60.0.

## WebSockets Mod Event Data

Each event sent to the WebSockets clients is a JSON object that contains 2 fields, an `event` field specifying the type of event, and a `data` field containing all the fields associated with the event.

## Data Types:
Fields will have a type assigned to them, describing what kind of data is being sent

Basic types:
- `usize`: Unsigned integer (meaning it cannot be negative)
- `isize`: Signed integer (can be negative or positive)
- `String`: String of text
- `bool`: Either true or false

Sometimes a type is an enumeration of possible values, represented as different strings.
The enum types are:

**Character**: The character a player is using
```js
'Sol'
'Ky'
'May'
'Millia'
'Zato'
'Potemkin'
'Chipp'
'Faust'
'Axl'
'Venom'
'Slayer'
'Ino'
'Bedman'
'Ramlethal'
'Sin'
'Elphelt'
'Leo'
'Johnny'
'JackO'
'Jam'
'Haehyun'
'Raven'
'Dizzy'
'Baiken'
'Answer'
```

**GuardType**: The way a move can be guarded to block the move
```js
'Any'
'Overhead'
'Low'
'Unblockable'
```

**HitType**: The type of hit a player recieved
```js
'Normal'
'Counter'
'MortalCounter'
'Throw'
```

**ObjectId**: An object in game being referenced
```js
'Player1'
'Player2'
'Projectile'
```

**Winner**: The winner of a round
```js
'Player1'
'Player2'
'Draw'
```

**RoundEndCause**: What caused a round to end
```js
'Timeout'
'Death'
```

### `ggxrd_stateUpdate`

`data` fields:
```rs
current_frame: usize,
round_time_limit: usize,
round_time_left: usize,
player_1: PlayerState,
player_2: PlayerState,
```

Contained object types:
```rs
PlayerState {
    game_inputs: GameInputs
    steam_id: String,
    steam_nickname: String,
    character: Character,
    health: usize,
    tension_pulse: isize,
    untechable_time: usize,
    tension: isize,
    burst: isize,
    risc: isize,
    stun: isize,
    stun_resistance: usize,
    state: String,
    previous_state: String,
    round_wins: usize,
    combo_counter: usize,
    x_position: isize,
    y_position: isize,
    resource_1: isize,
    resource_2: isize,
    resource_3: isize,
    resource_4: isize,
}

GameInputs {
    // Directions
    up: bool,
    down: bool,
    left: bool,
    right: bool,
    // Buttons
    p: bool,
    k: bool,
    s: bool,
    h: bool,
    d: bool,
    taunt: bool,
    // MOM mode button
    special: bool,
    // Training mode buttons
    replay: bool,
    record: bool
}
```

### `ggxrd_hitEvent`

`data` fields:
```rs
current_frame: usize,
game_state: ggxrd_stateUpdate, // redundancy to make accessing game state easier
hit_type: HitType,
was_blocked: bool,
attack_level: usize,
attack_guard_type: GuardType,
attack_needs_air_fd: bool,
damage: usize,
attacker: ObjectId,
attacker_state: String,
victim: ObjectId,
victim_state: String,
victim_previous_state: String,
combo_length: usize,
```

### `ggxrd_objectCreatedEvent`

`data` fields:
```rs
current_frame: usize,
object_name: String,
created_by: ObjectId,
player1_state: String,
player2_state: String,
```

### `ggxrd_roundStartEvent`

This even currently contains no data, and is only used to notify the beginning of a new round.

### `ggxrd_roundEndEvent`

`data` fields:
```rs
current_frame: usize,
winner: Winner,
cause: RoundEndCause,
```

### `ggxrd_comboEndEvent`

Triggers after 2 or more hits combo a character

`data` fields:
```rs
current_frame: usize,
combo_length: usize,
combo_damage: usize,
victim: ObjectId,
victim_state: String,
victim_previous_state: String,
```

### `ggxrd_gamestateDeinitialized`

Triggers when the games battle state is being freed from memory,
to help track things like matches being exited early.

Currently contains no data.