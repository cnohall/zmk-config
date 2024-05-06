// LAYERS
#define BASE   0
#define GAME   1
#define LOWER  2
#define RAISE  3
#define NAV    4
#define NUM    5
#define FUNC   6
#define WM     7
#define ADJUST 8

#define BT_CH_0 &bt BT_SEL 0
#define BT_CH_1 &bt BT_SEL 1
#define BT_CH_2 &bt BT_SEL 2
#define BT_CH_3 &bt BT_SEL 3
#define BT_CH_4 &bt BT_SEL 4
#define GO_BLE  &out OUT_BLE
#define GO_USB  &out OUT_USB

// CUSTOM KEY CODES
#define XXX &none
#define ___ &trans

#define MEH      LC(LS(LALT))
#define TAB_PREV &kp LC(PG_UP)
#define TAB_NEXT &kp LC(PG_DN)
#define CLeft    &kp LC(LEFT)
#define CRight   &kp LC(RIGHT)
#define NEXT     &kp LC(K)
#define PREV     &kp LC(LS(K))
#define COMNT    &kp LC(SE_QUOT)
#define DUPLIC   &kp LC(LS(D))
#define DLINE    &kp LC(D)
#define YANK     &kp LC(INS)
#define PASTE    &kp LS(INS)
#define KUT      &kp LC(X)
#define SEL_A    &kp LC(A)
#define CLOSE    &kp LA(F4)       // ALT + F4
#define CAD      &kp LC(LA(DEL))  // CTRL + ALT + DEL

#define TONAV  &to NAV
#define TOBASE &to BASE

#define C_ESC  &mt LCTRL ESC

#define BS_LOW &lt LOWER BSPC
#define TABNUM &lt NUM TAB
#define SPCNAV &lt NAV SPACE
#define ENT_RS &lt RAISE ENTER
#define WM_Z   &lt WM Z

