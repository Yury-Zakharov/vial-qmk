// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "6x7_full_track.h"
enum custom_layer {
    _COLEMAK,
    _QWERTY,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_6x7(
        KC_ESC , KC_F1   , KC_F2  , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                    KC_F7 , KC_F8  , KC_F9  , KC_F10, KC_F11, KC_F12   , TO(_QWERTY),
        DRGSCRL, KC_GRV  , KC_1   , KC_2  , KC_3  , KC_4  , KC_5  ,                    KC_6  , KC_7   , KC_8   , KC_9  , KC_0  , KC_LBRC  , KC_RBRC,
        SNIPING, KC_TAB  , KC_Q   , KC_W  , KC_F  , KC_P  , KC_B  ,                    KC_J  , KC_L   , KC_U   , KC_Y  , KC_SCLN, KC_BSLS, KC_BACKSLASH,
        KC_BTN3, KC_CAPS , KC_A   , KC_R  , KC_S  , KC_T  , KC_G  ,                    KC_M  , KC_N   , KC_E  ,  KC_I  , KC_O,  KC_QUOT, DRGSCRL,
        KC_BTN1, KC_LSFT , KC_Z   , KC_X  , KC_C  , KC_D  , KC_V  ,                    KC_K  , KC_H   , KC_COMM, KC_DOT, KC_SLSH, KC_RSFT  , KC_BTN1,
        KC_LCTL, KC_LCTL,  KC_LGUI, KC_LBRC,KC_RBRC,                                                    KC_PLUS, KC_EQL,KC_RGUI, KC_RALT,  KC_RCTL,
                                                RAISE , KC_SPC , KC_BSPC,     KC_LALT, KC_ENTER, LOWER,
                                                KC_TAB, KC_HOME, KC_GRV
        ),

    [_QWERTY] = LAYOUT_6x7(
        KC_ESC , KC_F1   , KC_F2  , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                    KC_F7 , KC_F8  , KC_F9  , KC_F10, KC_F11, KC_F12   , TO(_COLEMAK),
        DRGSCRL, KC_GRV  , KC_1   , KC_2  , KC_3  , KC_4  , KC_5  ,                    KC_6  , KC_7   , KC_8   , KC_9  , KC_0  , KC_LBRC  , KC_RBRC,
        SNIPING, KC_TAB  , KC_Q   , KC_W  , KC_E  , KC_R  , KC_T  ,                    KC_Y  , KC_U   , KC_I   , KC_O  , KC_P  , KC_QUOT, KC_BACKSLASH,
        KC_BTN3, KC_CAPS , KC_A   , KC_S  , KC_D  , KC_F  , KC_G  ,                    KC_H  , KC_J   , KC_K   , KC_L  ,KC_SCLN, KC_RCTL, DRGSCRL,
        KC_BTN1, KC_LSFT , KC_Z   , KC_X  , KC_C  , KC_V  , KC_B  ,                    KC_N  , KC_M   , KC_COMM, KC_DOT,KC_SLSH, KC_RSFT  , KC_BTN1,
        KC_LCTL, KC_LCTL,  KC_LGUI, KC_LBRC,KC_RBRC,                                                    KC_PLUS, KC_EQL,KC_RGUI, KC_RALT,  KC_RCTL,
                                                RAISE , KC_SPC , KC_BSPC,     KC_LALT, KC_ENTER, LOWER,
                                                KC_TAB, KC_HOME, KC_GRV
        ),

    [_LOWER] = LAYOUT_6x7(
        KC_ESC , KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6  ,                  KC_F7 , KC_F8  , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 , _______,
        _______, KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                   KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL , _______,
        _______, _______,_______,_______,_______,_______,KC_LBRC,                   KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS, _______,
        _______, _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                   KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE, _______,
        _______, _______,_______,_______,_______,_______,_______,                   _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS, _______,
        _______, _______,_______,_______,KC_PSCR,                                                   _______, KC_P0, _______,_______, QK_BOOT,
                                               _______,KC_BTN1,KC_BTN3,       _______,_______,_______,
                                               _______,SNIPING,DRGSCRL
        ),

    [_RAISE] = LAYOUT_6x7(
        _______,KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                   KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 , _______,
        _______,_______,_______,_______,_______,_______,KC_LBRC,                   KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE, _______,
        _______,_______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                   KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU, _______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,KC_VOLD, _______,
        _______,_______,RGB_VAI,RGB_SAI,RGB_HUI,RGB_MOD,RGB_TOG,                   _______,_______,_______,_______,_______,_______, _______,
        QK_BOOT, _______,_______, _______,_______,                                                KC_EQL ,_______,_______,_______,_______,
                                               _______,_______,_______,       _______,_______,_______,
                                               _______,_______,_______
        )
};

//void keyboard_post_init_user(void) {
//#ifdef CONSOLE_ENABLE
//    debug_enable=true;
//    debug_matrix=true;
//    debug_keyboard=true;
//    debug_mouse=true;
//#else
//    debug_enable=false;
//    debug_matrix=false;
//    debug_keyboard=false;
//    debug_mouse=false;
//#endif
//}


// DEFINE THESE KEYS SOMEWHERE ON THE KEYMAP, USUALLY LEFT BOTTOM ROW
//           _______,RGB_VAI,RGB_SAI,RGB_HUI,RGB_MOD,RGB_TOG,

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM colemak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 3, HSV_PURPLE},       // Light 4 LEDs, starting with LED 6
    {21, 3, HSV_PURPLE}      // Light 4 LEDs, starting with LED 6
);
const rgblight_segment_t PROGMEM querty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 3, HSV_RED},       // Light 4 LEDs, starting with LED 6
    {21, 3, HSV_RED}      // Light 4 LEDs, starting with LED 6
);
const rgblight_segment_t PROGMEM lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 3, HSV_BLUE},
    {21, 3, HSV_BLUE}
);
const rgblight_segment_t PROGMEM raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 3, HSV_YELLOW},
    {21, 3, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    colemak_layer,
    querty_layer,    // Overrides caps lock layer
    lower_layer,    // Overrides other layers
    raise_layer     // Overrides other layers
);

//bool led_update_user(led_t led_state) {
//    rgblight_set_layer_state(0, led_state.caps_lock);
//    return true;
//}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _COLEMAK));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _QWERTY));
    rgblight_set_layer_state(2, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(3, layer_state_cmp(state, _RAISE));
    return state;
}


#endif

//    rgblight_enable();
#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}
//    rgblight_layers = my_rgb_layers;
//    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
//    rgblight_sethsv_noeeprom_cyan();
//    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return OLED_ROTATION_180;
}

static void render_wylderbuilds(void) {
    static const char PROGMEM wylderbuilds[] = {
        // 'dark wylderbuilds_oled_name', 128x32px
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x40,
        0x40, 0x60, 0x20, 0x20, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x20, 0x60,
        0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0x40, 0x40, 0x60, 0x60,
        0x40, 0x40, 0x40, 0x40, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xf0,
        0x00, 0x00, 0xc1, 0xc1, 0x01, 0x01, 0xf1, 0x11, 0x01, 0x01, 0x01, 0x31, 0x60, 0xc0, 0x80, 0xc0,
        0xf0, 0x10, 0x00, 0x00, 0x00, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xc0,
        0x00, 0x01, 0x03, 0x9e, 0xf8, 0x00, 0x00, 0x20, 0xe0, 0xf0, 0x10, 0x30, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x20, 0xf0, 0x30, 0xa0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x98, 0xf0, 0x70,
        0x00, 0x00, 0x00, 0x00, 0xf0, 0x80, 0x00, 0x70, 0xfe, 0x03, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00,
        0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0xf1, 0x11, 0x33, 0x63, 0xc3,
        0x83, 0x01, 0x01, 0xc1, 0xe1, 0x31, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x1f, 0x7c, 0xff, 0x07, 0x7c, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0xc0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x7f, 0xff,
        0x60, 0x30, 0x18, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x01, 0x7f, 0xf2, 0x82, 0x02, 0x80, 0x80, 0x00,
        0x00, 0x00, 0x00, 0x7f, 0x0e, 0x1b, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0x81, 0xc1, 0x63,
        0x3e, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x00, 0x00,
        0x00, 0x1f, 0xff, 0x80, 0xc0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x60, 0x30, 0x1f,
        0x07, 0x00, 0x00, 0x01, 0x43, 0x44, 0x7c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(wylderbuilds, sizeof(wylderbuilds));
}

bool oled_task_user(void) {
    oled_set_cursor(0, 1);
    if (is_keyboard_master()) {
        oled_write_P(PSTR("Layer\n"), false);

        switch (get_highest_layer(layer_state)) {
            case _COLEMAK:
                oled_write_P(PSTR("COLMK\n"), false);
                break;
            case _QWERTY:
                oled_write_P(PSTR("QWRTY\n"), false);
                break;
            case _LOWER:
                oled_write_P(PSTR("LOWER\n"), false);
                break;
            case _RAISE:
                oled_write_P(PSTR("RAISE\n"), false);
                break;
            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                oled_write_ln_P(PSTR("Undefined"), false);
        }
        oled_set_cursor(0, 5);
        oled_write_P(PSTR("WPM: "), false);

        oled_write(get_u8_str(get_current_wpm(), ' '), false);
        // Host Keyboard LED Status

        oled_set_cursor(0, 8);
        led_t led_state = host_keyboard_led_state();

        oled_write_P(led_state.num_lock ? PSTR("NUMLK \n") : PSTR("    \n"), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAPLK \n") : PSTR("    \n"), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCRLK \n") : PSTR("    \n"), false);
    } else {
        // write WPM to right OLED
        render_wylderbuilds();


    }

    return false;
}
#endif
