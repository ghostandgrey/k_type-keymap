#include "k_type.h"

#define _______ KC_TRNS

#define _QW 0
#define _ARROW 1
#define _INTELLIJ 2
#define _APPS 3
#define _WIN 4

#define ARROW MO(_ARROW)
#define INTJ MO(_INTELLIJ)
#define APPS MO(_APPS)
#define WIN MO(_WIN)

#define ARR_ESC LT(ARROW, KC_ESC)
#define INTJ_Z LT(INTJ, KC_Z)
#define INTJ_F LT(INTJ, KC_F)
#define INTJ_J LT(INTJ, KC_J)
#define SPC_APP LT(APPS, KC_SPC)
#define LOCKSCR LGUI(LCTL(KC_Q))
#define SWTCSCR LGUI(LSFT(LCTL(KC_G)))
#define ALTLEFT LALT(KC_LEFT)
#define ALTRGHT LALT(KC_RGHT)
#define GUILEFT LGUI(KC_LEFT)
#define GUIRGHT LGUI(KC_RGHT)
#define CHARS LGUI(LCTL(KC_SPC))
#define ADDTODO LGUI(LSFT(KC_A))
#define DW_LEFT LALT(KC_BSPC)
#define DW_RGHT LALT(KC_DEL)

#define TAB_WIN LT(WIN, KC_TAB)
#define C_LEFT LCTL(KC_LEFT)
#define C_RIGHT LCTL(KC_RIGHT)

// App-Specific Shortcuts
#define MUTE_MT LGUI(LSFT(KC_M)) // Mute/unmute in Microsoft Teams

// IntelliJ Shortcuts
#define FNDFILE LSFT(LCTL(KC_N))
#define REFACTR LCTL(LALT(LSFT(KC_T)))
#define CLOSE LCTL(KC_F4)
#define HIDWINS LCTL(LSFT(KC_F12))
#define RUNTGTS LSFT(LALT(KC_F10))
#define RERUN LCTL(KC_F5)
#define EXECUTE LCTL(LSFT(KC_F10))
#define SYMBOL LSFT(LCTL(LALT(KC_N)))
#define DEBUG LCTL(LSFT(KC_F9))
#define END LCTL(KC_F2)
#define CREATE LALT(KC_INS)
#define FIND LCTL(LSFT(KC_F))
#define GO2TEST LCTL(LSFT(KC_T))
#define GIT LALT(KC_GRV)
#define HIERARC LCTL(LALT(KC_H))
#define USAGES LALT(KC_F7)
#define MENU LALT(LSFT(KC_SCLN))
#define BACK LCTL(LALT(KC_LEFT))
#define FORWARD LCTL(LALT(KC_RGHT))
#define PREVMTD LALT(KC_UP)
#define NEXTMTD LALT(KC_DOWN)
#define FONT_DN LSFT(LCTL(LALT(KC_MINS)))
#define FONT_UP LSFT(LCTL(LALT(KC_EQL)))
#define FONTRES LSFT(LCTL(LALT(KC_SCLN)))
#define INFO LCTL(KC_F1)
#define OUTLINE LCTL(KC_F12)
#define PRVCHNG LCTL(LALT(LSFT(KC_UP)))
#define NXTCHNG LCTL(LALT(LSFT(KC_DOWN)))
#define EXT_VAR LCTL(LALT(KC_V))
// Bookmarks
#define SHOW_BM LSFT(KC_F11)
#define GOTOBM0 LCTL(KC_0)
#define GOTOBM1 LCTL(KC_1)
#define GOTOBM2 LCTL(KC_2)
#define GOTOBM3 LCTL(KC_3)
#define GOTOBM4 LCTL(KC_4)
#define GOTOBM5 LCTL(KC_5)
#define GOTOBM6 LCTL(KC_6)
#define GOTOBM7 LCTL(KC_7)
#define GOTOBM8 LCTL(KC_8)
#define GOTOBM9 LCTL(KC_9)
#define SET_BM0 LCTL(LSFT(LALT(KC_0)))
#define SET_BM1 LCTL(LSFT(LALT(KC_1)))
#define SET_BM2 LCTL(LSFT(LALT(KC_2)))
#define SET_BM3 LCTL(LSFT(LALT(KC_3)))
#define SET_BM4 LCTL(LSFT(LALT(KC_4)))
#define SET_BM5 LCTL(LSFT(LALT(KC_5)))
#define SET_BM6 LCTL(LSFT(LALT(KC_6)))
#define SET_BM7 LCTL(LSFT(LALT(KC_7)))
#define SET_BM8 LCTL(LSFT(LALT(KC_8)))
#define SET_BM9 LCTL(LSFT(LALT(KC_9)))

// Media Keys

#define VOLUP KC__VOLUP
#define VOLDOWN KC__VOLDOWN

#define ALT_UP LALT(KC_UP)
#define ALT_DWN LALT(KC_DOWN)

#define FULL_SCREEN "g"
#define LEFT_HALF "f"
#define RIGHT_HALF "h"

enum custom_keycodes {
  D_EMAIL = SAFE_RANGE,
  A_EMAIL,
  PW,
  BRAVE,
  FIREFOX,
  ITERM,
  NOTION,
  OUTLOOK,
  SIGNAL,
  SPOTIFY,
  TEAMS,
  TODOIST,
  VMWARE,
  MUTECHT,
  TO_MNTR,
  TO_LPTP,
  PLYPAUS,
  PREVTRK,
  NEXTTRK
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = KEYMAP(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           ADDTODO,   CHARS, LOCKSCR, \
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  MUTECHT, KC_PGUP, \
      TAB_WIN, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, \
      ARR_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
      KC_LSFT, INTJ_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                            KC_UP, \
      KC_LCTL, KC_LALT, KC_LGUI,          SPC_APP,                    KC_RALT, KC_RGUI,   INTJ,  KC_RCTL,                            KC_LEFT, KC_DOWN, KC_RGHT),

    [_ARROW] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,      PW, \
      _______, _______, _______, _______, _______, _______, _______, _______,  ALT_UP,  ALT_UP, _______, _______, _______, _______,   VOLUP, PLYPAUS, KC_MSTP, \
      _______, _______, _______,  KC_ENT, _______, _______, _______, D_EMAIL,   KC_UP, A_EMAIL, _______, _______, _______, _______, VOLDOWN, PREVTRK, NEXTTRK, \
      ARR_ESC, DW_LEFT, KC_BSPC,  KC_DEL, DW_RGHT, GUILEFT, ALTLEFT, KC_LEFT, KC_DOWN, KC_RGHT, ALTRGHT, GUIRGHT, _______, \
      _______, _______, _______, _______, _______, KC_HOME,  KC_END, ALT_DWN, ALT_DWN, SWTCSCR, _______, _______,                            KC_PGUP, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            KC_HOME, KC_PGDN, KC_END),

    [_INTELLIJ] = KEYMAP(
      _______, SET_BM1, SET_BM2, SET_BM3, SET_BM4, SET_BM5, SET_BM6, SET_BM7, SET_BM8, SET_BM9, SET_BM0, _______, _______,          _______, _______, _______, \
      _______, GOTOBM1, GOTOBM2, GOTOBM3, GOTOBM4, GOTOBM5, GOTOBM6, GOTOBM7, GOTOBM8, GOTOBM9, GOTOBM0, _______, _______, _______, _______, _______, _______, \
      _______,   CLOSE, _______,     END, REFACTR, GO2TEST, _______, _______, PREVMTD, OUTLINE, _______, _______, _______, _______, _______, _______, _______, \
      HIDWINS, RUNTGTS,  SYMBOL,   DEBUG,    FIND,     GIT, HIERARC,    BACK, NEXTMTD, FORWARD, FONTRES, _______, _______, \
      _______,  INTJ_Z, EXECUTE,  CREATE, EXT_VAR, SHOW_BM, FNDFILE,    MENU, FONT_DN, FONT_UP,    INFO, _______,                            PRVCHNG, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            _______, NXTCHNG, _______),

    [_APPS] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          TO_MNTR, TO_LPTP,   RESET, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______,   CHARS, _______, TODOIST, _______, FIREFOX,   ITERM, OUTLOOK, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______,  SIGNAL, _______, _______, _______, _______, KC_MINS, _______, _______, _______, _______, _______, \
      _______, _______, _______,   TEAMS,  VMWARE,   BRAVE,  NOTION, SPOTIFY, _______, _______, _______, _______,                            _______, \
      _______, _______, _______,          SPC_APP,                   _______, _______, _______, _______,                            _______, _______, _______),

    [_WIN] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______,  ALT_UP,  ALT_UP, _______, _______, _______, _______, _______, _______, _______, \
      TAB_WIN, _______, _______, _______, _______, _______, _______, _______,   KC_UP, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______,  C_LEFT, KC_LEFT, KC_DOWN, KC_RGHT, C_RIGHT, _______, _______, \
      _______, _______, _______, _______, _______, KC_HOME,  KC_END, ALT_DWN, ALT_DWN, _______, _______, _______,                            _______, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            _______, _______, _______),
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

};

void delay(void) {
    SEND_STRING(SS_DELAY(800));
}

void resize_window(char *resize_type) {
    SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LCTL) SS_DOWN(X_LSFT));
    SEND_STRING(resize_type);
    SEND_STRING(SS_UP(X_LGUI) SS_UP(X_LCTL) SS_UP(X_LSFT));
    delay();
}

void put_on_monitor_in_position(char *position) {
    SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LCTL) SS_DOWN(X_LALT));
    SEND_STRING(position);
    SEND_STRING(SS_UP(X_LGUI) SS_UP(X_LCTL) SS_UP(X_LALT));
    delay();
}

void switch_to_app(char *app) {
    SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
    delay();
    SEND_STRING(app);
    delay();
    SEND_STRING(SS_TAP(X_ENTER));
    delay();
}

void switch_to_space(char *space) {
    SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LALT));
    SEND_STRING(space);
    SEND_STRING(SS_UP(X_LCTL) SS_UP(X_LALT));
    delay();
}

void move_to_monitor(char *app, char *position) {
    switch_to_app(app);
    put_on_monitor_in_position(position);
}

void move_to_laptop(char *app, char *space, char *position) {
    switch_to_space(space);
    switch_to_app(app);
    resize_window(position);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case PW:
      if (record->event.pressed) {
        SEND_STRING("PW_PLACEHOLDER");
      }
      return false;
    case D_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("x#");
      }
      return false;
    case A_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("xE");
      }
      return false;
    case BRAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "brave" SS_TAP(X_ENTER));
      }
      return false;
    case FIREFOX:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "firefox" SS_TAP(X_ENTER));
      }
      return false;
    case ITERM:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "iterm" SS_TAP(X_ENTER));
      }
      return false;
    case OUTLOOK:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "outlook" SS_TAP(X_ENTER));
      }
      return false;
    case NOTION:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "notion" SS_TAP(X_ENTER));
      }
      return false;
    case SIGNAL:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "signal" SS_TAP(X_ENTER));
      }
      return false;
    case SPOTIFY:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "spotify" SS_TAP(X_ENTER));
      }
      return false;
    case TEAMS:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "teams" SS_TAP(X_ENTER));
      }
      return false;
    case TODOIST:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "todoist" SS_TAP(X_ENTER));
      }
      return false;
    case VMWARE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "vmware" SS_TAP(X_ENTER));
      }
      return false;
    case MUTECHT:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "teams" SS_TAP(X_ENTER));
        SEND_STRING(SS_DELAY(200) SS_LGUI(SS_LSFT("m")));
        SEND_STRING(SS_DELAY(200) SS_LGUI(SS_TAP(X_TAB)));
      }
      return false;
    case TO_MNTR:
      if (record->event.pressed) {
        move_to_monitor("todoist", "2");
        move_to_monitor("notion", "3");
        move_to_monitor("spotify", "4");
        move_to_monitor("firefox", "7");
        move_to_monitor("teams", "8");
        move_to_monitor("signal", "9");
      }
      return false;
    case TO_LPTP:
      if (record->event.pressed) {
        move_to_laptop("todoist", "2", FULL_SCREEN);
        move_to_laptop("notion", "3", FULL_SCREEN);
        move_to_laptop("spotify", "4", FULL_SCREEN);
        move_to_laptop("firefox", "7", FULL_SCREEN);
        move_to_laptop("teams", "9", LEFT_HALF);
        move_to_laptop("signal", "9", RIGHT_HALF);
      }
      return false;
    case PLYPAUS:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "spotify" SS_DELAY(200) SS_TAP(X_ENTER));
        SEND_STRING(SS_DELAY(200) SS_TAP(X_SPACE));
        SEND_STRING(SS_DELAY(200) SS_LGUI(SS_TAP(X_TAB)));
      }
      return false;
    case NEXTTRK:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "spotify" SS_DELAY(200) SS_TAP(X_ENTER));
        SEND_STRING(SS_DELAY(200) SS_LCTL(SS_LGUI(SS_TAP(X_RIGHT))));
        SEND_STRING(SS_DELAY(200) SS_LGUI(SS_TAP(X_TAB)));
      }
      return false;
    case PREVTRK:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        SEND_STRING(SS_DELAY(200) "spotify" SS_DELAY(200) SS_TAP(X_ENTER));
        SEND_STRING(SS_DELAY(200) SS_LCTL(SS_LGUI(SS_TAP(X_LEFT))));
        SEND_STRING(SS_DELAY(200) SS_LGUI(SS_TAP(X_TAB)));
      }
      return false;
  }
  return true;
}
