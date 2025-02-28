/*
Copyright 2020 Dimitris Mantzouranis

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _WINDOWS,
    _MAC,
    _FN1,
    _FN2,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 *   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ + │ BKSPC │DEL│
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┼───┤
 * │TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \   │HME│
 * ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┼───┤
 * │CAPS │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ” │ RETURN  │END│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┬───┼───┤
 * │SHFT  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │  SHIFT │ ^ │INS│
 * ├────┬─┴──┬┴───┼───┴───┴───┴───┴───┴───┴┬──┴┬──┴┬───┬───┼───┼───┤
 * │CTRL│ OS │ALT │                        │ALT│FN2│FN1│ < │ v │ > │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
*   Row:         0          1          2          3        4         5        6         7        8        9          10         11         12         13         14         15        */
    [_WINDOWS] = {
            {   KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,     KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_NO,     KC_DEL    },
            {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,     KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH, KC_NO,     KC_HOME   },
            {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,     KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_NO,     KC_END    },
            {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,     KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_INS    },
            {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,    KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RCTRL,  MO(_FN2),  MO(_FN1),  KC_LEFT,   KC_DOWN,   KC_RGHT   }
        },
    [_MAC] = {
            {   KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,     KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_NO,     KC_DEL    },
            {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,     KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH, KC_NO,     KC_HOME   },
            {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,     KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_NO,     KC_END    },
            {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,     KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_INS    },
            {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,    KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RCTRL,  MO(_FN2),  MO(_FN1),  KC_LEFT,   KC_DOWN,   KC_RGHT   }
        },
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │ESC│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│       │TOG│ TOG = RGB Toggle
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┼───┤
 * │    │RMD│MOD│PLN│BRT│RNB│SWL│SNK│KNT│XMS│GRD│SPD│SPI│      │   │ RGB Back, RGB Fwd, Plain, Breathe, Rainbow, Swirl, Snake, Knight, Xmas, Gradient, Speed Down, Speed Up
 * ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┼───┤
 * │     │VLD│VLU│   │   │   │   │SAD│SAI│VAD│VAI│   │         │PGU│ Volume Down, Volume Up     Saturation Down, Saturation Up, Brightness Down, Brightness Up    Page Up  
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┬───┼───┤
 * │      │   │   │   │   │   │   │   │   │HUD│HUI│        │   │PGD│ Hue Down, Hue Up    Page Down
 * ├────┬─┴──┬┴───┼───┴───┴───┴───┴───┴───┴┬──┴┬──┴┬───┬───┼───┼───┤
 * │    │    │    │          RESET         │   │   │   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
*   Row:         0          1          2          3        4         5        6         7        8        9          10         11         12         13         14         15        */
    [_FN1] = {
            {   KC_GRAVE,  KC_F1,     KC_F2,     KC_F3,   KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO,     KC_NO,     RGB_TOG    },
	        {   KC_NO,     RGB_RMOD,  RGB_MOD,   RGB_M_P, RGB_M_B,  RGB_M_R,  RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X,   RGB_M_G,   RGB_SPD,   RGB_SPI,   KC_NO,     KC_NO,     KC_NO      },
            {   KC_NO,     KC_VOLD,   KC_VOLU,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    RGB_SAD,  RGB_SAI, RGB_VAD,   RGB_VAI,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_PGUP    },
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,     RGB_HUD,   RGB_HUI,   KC_NO,     KC_NO,     KC_NO,     KC_PGDOWN  },
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,    RESET,    KC_NO,    KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      }
        },
/*
 *   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │   │
 * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┼───┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │   │      │   │
 * ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │         │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┬───┼───┤
 * │      │   │   │   │   │   │   │   │   │   │   │        │   │   │
 * ├────┬─┴──┬┴───┼───┴───┴───┴───┴───┴───┴┬──┴┬──┴┬───┬───┼───┼───┤
 * │    │    │    │                        │   │   │   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
*   Row:         0          1          2          3        4         5        6         7        8        9          10         11         12         13         14         15        */
    [_FN2] = {
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      },
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      },
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      },
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      },
            {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      }
        }
};

void dip_switch_update_user(uint8_t index, bool active){
    switch(index){
        case 0: // macos/windows togggle
            if(active){ //macos
                layer_off(_WINDOWS);
                layer_on(_MAC);
            }
            else{ //windows
                layer_on(_WINDOWS);
                layer_off(_MAC);
            }
        break;
    }
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;
}
