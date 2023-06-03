// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

const char *read_logo(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
      case BASE:
        oled_write_ln_P(PSTR("QWERTY"), false);
        break;
      case EXTRA:
        oled_write_ln_P(PSTR("Canary"), false);
        break;
      case TAP:
        oled_write_ln_P(PSTR("Game"), false);
        break;
      case BUTTON:
        oled_write_ln_P(PSTR("Button"), false);
        break;
      case NAV:
        oled_write_ln_P(PSTR("Nav"), false);
        break;
      case MOUSE:
        oled_write_ln_P(PSTR("Mouse"), false);
        break;
      case MEDIA:
        oled_write_ln_P(PSTR("Media"), false);
        break;
      case NUM:
        oled_write_ln_P(PSTR("Num"), false);
        break;
      case SYM:
        oled_write_ln_P(PSTR("Sym"), false);
        break;
      case FUN:
        oled_write_ln_P(PSTR("Fun"), false);
        break;
      default:
        oled_write_ln_P(PSTR("Undefined"), false);
    }
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
  } else {
    oled_write(read_logo(), false);
  }
  return false;
}
#endif
