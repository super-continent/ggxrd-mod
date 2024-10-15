# SAMMI Config and Webhook Data Guide

## Before Using
This document just specifies the information that will be sent to your SAMMI client.
For learning how to set up SAMMI, check the [SAMMI Documentation](https://sammi.solutions/docs/).
For learning how to set up SAMMI to process data from this mod, check out [Krackatoa's Guide](https://docs.google.com/document/d/1fFRs7567tCdn9gGu_4iLQM8tAB07vP8aDQeLaWrbqUg/).

## SAMMI Mod Configuration

The mod contains a settings file `rev2mod_config.toml` that will be created when you launch the game with the mod.
The default config SAMMI section will look like this:

```toml
[sammi]
sammi_enabled = true
webhook_url = 'http://127.0.0.1:9450/webhook'
state_update_hz = 25.0
timeout = 0.1
```

- `sammi_enabled`: Whether the mod sends any data to SAMMI.
- `webhook_url`: URL to the SAMMI webhook endpoint that you want the mod to send data to
- `state_update_hz`: Frequency of state information being send to your SAMMI endpoint, in Hz. Possible values range is `1.0`..`60.0`
- `timeout`: Max possible latency a request to SAMMI can have in seconds. Events that are not `ggxrd_stateUpdate` will have double the timeout to send, to ensure state updates are dropped before any other important events.

## SAMMI Mod Event Data

Each event webhook request contains a `data` field, inside the `data` field, there is an `eventInfo` field containing all information relevant to the specific event. This section lists the structures of each `eventInfo` field, with respect the event being recieved.

## Data Types:
Fields will have a type assigned to them, describing what kind of data is being sent

Basic types:
- `usize`: Unsigned integer (meaning it cannot be negative)
- `isize`: Signed integer (can be negative or positive)
- `String`: String of text in UTF-8
- `bool`: A number where the value of `0` means false, and any other value means true

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

`eventInfo` fields:
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
    character: Character,
    health: usize,
    tension_pulse: isize,
    untechable_time: usize,
    tension: isize,
    burst: isize,
    risc: isize,
    state: String,
    previous_state: String,
    round_wins: usize,
    combo_counter: usize,
    x_position: isize,
    y_position: isize,
}
```

### `ggxrd_hitEvent`

`eventInfo` fields:
```rs
current_frame: usize,
hit_type: HitType,
was_blocked: bool,
attack_level: u32,
damage: usize,
attacker: ObjectId,
attacker_state: String,
victim: ObjectId,
victim_state: String,
victim_previous_state: String,
combo_length: usize,
```

### `ggxrd_objectCreatedEvent`

`eventInfo` fields:
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

`eventInfo` fields:
```rs
current_frame: usize,
winner: Winner,
cause: RoundEndCause,
```

### `ggxrd_comboEndEvent`

Triggers after 2 or more hits combo a character

`eventInfo` fields:
```rs
current_frame: usize,
combo_length: usize,
combo_damage: usize,
victim: ObjectId,
victim_state: String,
victim_previous_state: String,
```
