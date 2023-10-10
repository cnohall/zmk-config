// clang-format off
// LAYERS
#define QWERTY 0
#define GAME 1
#define LOWER 2
#define RAISE 3
#define GAME_LOW 4
#define NAV 5
#define WM 6
#define NUM 7
#define FUNC 8
#define ADJUST 9

// CUSTOM KEY CODES
#define XXX &none
#define ___ &trans

#define CLeft  &kp LC(LEFT)
#define CRight &kp LC(RIGHT)
#define NEXT &kp LC(K)
#define PREV &kp LC(LS(K))

#define C_ESC  &mt LCTRL ESC
#define BS_LOW &lt LOWER BSPC
#define ENT_RS &lt RAISE ENTER
#define SPCNAV &lt NAV SPACE
#define TABNUM &lt NUM TAB
#define TABNAV &lt NAV TAB
#define TABFNC &lt FUNC TAB
#define SPC_GL &lt GAME_LOW SPACE

#define SLWM   &sl WM
#define MOVE   &sk LSHFT
#define CLOSE  &kp LA(F4)       // ALT + F4
#define CAD    &kp LC(LA(DEL))  // CTRL + ALT + DEL

#define TONAV  &to NAV
#define TOBASE &to QWERTY

#define MEH        LC(LS(LALT))
#define C_PGUP &kp LC(PG_UP)
#define C_PGDN &kp LC(PG_DN)
#define COMNT  &kp LC(SE_QUOT)
#define DUPLIC &kp LC(LS(D))
#define YANK   &kp LC(INS)
#define PASTE  &kp LS(INS)
#define KUT    &kp LC(X)

// HOMEROW
#define HM_A &hm_aodia LGUI A
#define HM_S &hm_sl LALT S
#define HM_D &hm_dk LCTRL D
#define HM_F &hm_fj LSHFT F
#define HM_ODIA &hm_aodia LGUI SE_ODIA
#define HM_L &hm_sl LALT L
#define HM_K &hm_dk LCTRL K
#define HM_J &hm_fj LSHFT J
// clang-format on
