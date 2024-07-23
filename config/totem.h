// LAYERS
#define BASE         0                  // QWERTY
#define BASE_MAC     1                  // QWERTY for MacOS
#define CLMDH        2                  // Colemak-DH, no home row mods
#define GAME         3                  // Gaming layer, no home row mods
#define LOWER        4                  // Lower layer
#define LOWER_MAC    5                  // Lower layer
#define RAISE        6                  // Raise layer
#define RAISE_MAC    7                  // Raise layer
#define NAV          8                  // Navigation layer
#define NAV_MAC      9                  // Navigation layer
#define NUM         10                  // Numpad layer
#define NUM_MAC     11                  // Numpad layer
#define FUNC        12                  // Function keys
#define ADJUST      13                  // Adjust layer

#define BT_CH_0     &bt BT_SEL 0
#define BT_CH_1     &bt BT_SEL 1
#define BT_CH_2     &bt BT_SEL 2
#define BT_CH_3     &bt BT_SEL 3
#define BT_CH_4     &bt BT_SEL 4
#define GO_BLE      &out OUT_BLE
#define GO_USB      &out OUT_USB

// CUSTOM KEY CODES
#define XXX         &none
#define ___         &trans
#define MEH         LC(LS(LALT))        // Left Alt + Ctrl
#define TAB_PREV    &kp LC(PG_UP)       // Previous tab
#define TAB_NEXT    &kp LC(PG_DN)       // Next tab
#define CLeft       &kp LC(LEFT)        // CTRL + Left arrow
#define CRight      &kp LC(RIGHT)       // CTRL + Right arrow
#define NEXT        &kp LC(K)           // Next occurance
#define PREV        &kp LC(LS(K))       // Previous occurance
#define COMNT       &kp LG(SE_QUOT)     // Comment line
#define DUPLIC      &kp LG(LS(D))       // Duplicate line
#define DLINE       &kp LG(D)           // Delete line
#define YANK        &kp LC(INS)
#define PASTE       &kp LS(INS)
#define KUT         &kp LC(X)
#define SEL_A       &kp LC(A)
#define CLOSE       &kp LA(F4)          // ALT + F4
#define CAD         &kp LC(LA(DEL))     // CTRL + ALT + DEL

#define TONAV       &to NAV
#define TOBASE      &to BASE
#define TOBASE_MAC  &to BASE

#define C_ESC       &mt LCTRL ESC

#define BS_LOW      &lt LOWER BSPC
#define TABNUM      &lt NUM TAB
#define SPCNAV      &lt NAV SPACE
#define ENT_RS      &lt RAISE ENTER

