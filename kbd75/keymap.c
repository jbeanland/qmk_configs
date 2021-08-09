#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// LALT instead of RALT on the right side since I want alt, not alt gr
// swapped del down next to backspace as it feels a little more natural.
// put menu key up top right, next to F12. Have never used printsc or scroll lock so whatever.

	[0] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PAUSE, KC_HOME,  KC_END,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_DEL,   KC_BSPC,  KC_DEL,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                      KC_ENT,   KC_PGDN,
    KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    MO(1),
    KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_APP,  KC_LALT,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

// RESET mapped to func + escape. Pressing this will directly enter bootloader mode.
// volume up/down mapped to func + `]` / `#`
// mute mapped to func + m (not super comfy, should find something nicer if it bothers me)
// func + menu mapped to escape so I can cancel opening it with the same keys instead of moving across the board.
	[1] = LAYOUT(
    RESET,    _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,
    _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_VOLU,  KC_VOLD,            _______,
    _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
    _______,  _______,  _______,  _______, _______,  _______,  _______,  _______,  KC_MUTE,  _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,                     _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______
  )
};

/////////////
// Unicode //
// Ideally I wanted to put the Norwegian letters in the function row.
// It looked like I could do this with unicode, but actual support for unicode blasts from the keyboard is awkward 
// enough that its not really worth it
// See https://docs.qmk.fm/#/feature_unicode?id=unicode-map

// Leaving this here anyway for reference in case I want to try again

// Also need this in rules.md
// UNICODEMAP_ENABLE = yes

// enum unicode_names {
//     A_LOW,
//     A_UP,
//     AE_LOW,
//     AE_UP,
//     O_LOW,
//     O_UP,
// };


// const uint32_t PROGMEM unicode_map[] = {
//     [A_LOW]  = 0x00E5,  // å
//     [A_UP]   = 0x00C5,  // Å
//     [AE_LOW] = 0x00E6,  // æ
//     [AE_UP]  = 0x00C6,  // Æ
//     [O_LOW]  = 0x00F8,  // ø
//     [O_UP]   = 0x00D8,  // Ø
// };

// use these in the mapping, eg instead of KC_A, use one of these:
// XG(A_LOW, A_UP),
// XG(AE_LOW, AE_UP), 
// XG(O_LOW, O_UP),