/* Copyright 2017 Andreas Lindhé
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//#pragma once

//#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_SECT &kp GRAVE  // §
#define SE_1    &kp N1    // 1
#define SE_2    &kp N2    // 2
#define SE_3    &kp N3    // 3
#define SE_4    &kp N4    // 4
#define SE_5    &kp N5    // 5
#define SE_6    &kp N6    // 6
#define SE_7    &kp N7    // 7
#define SE_8    &kp N8    // 8
#define SE_9    &kp N9    // 9
#define SE_0    &kp N0    // 0
#define SE_PLUS &kp MINUS // +
#define SE_ACUT &kp EQUAL // ´ (dead)
// Row 2
#define SE_Q    &kp Q    // Q
#define SE_W    &kp W    // W
#define SE_E    &kp E    // E
#define SE_R    &kp R    // R
#define SE_T    &kp T    // T
#define SE_Y    &kp Y    // Y
#define SE_U    &kp U    // U
#define SE_I    &kp I    // I
#define SE_O    &kp O    // O
#define SE_P    &kp P    // P
#define SE_ARNG &kp LBKT // Å
#define SE_DIAE &kp RBKT // ¨ (dead)
// Row 3
#define SE_A    &kp A    // A
#define SE_S    &kp S    // S
#define SE_D    &kp D    // D
#define SE_F    &kp F    // F
#define SE_G    &kp G    // G
#define SE_H    &kp H    // H
#define SE_J    &kp J    // J
#define SE_K    &kp K    // K
#define SE_L    &kp L    // L
#define SE_ODIA &kp SEMI // Ö
#define SE_ADIA &kp SQT  // Ä
#define SE_QUOT &kp NUHS // '
// Row 4
#define SE_LABK &kp NUBS // <
#define SE_Z    &kp Z    // Z
#define SE_X    &kp X    // X
#define SE_C    &kp C    // C
#define SE_V    &kp V    // V
#define SE_B    &kp B    // B
#define SE_N    &kp N    // N
#define SE_M    &kp M    // M
#define SE_COMM &kp COMMA// ,
#define SE_DOT  &kp DOT  // .
#define SE_MINS &kp SLASH// -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_HALF LS(SE_SECT) // ½
#define SE_EXLM LS(SE_1)    // !
#define SE_DQUO LS(SE_2)    // "
#define SE_HASH LS(SE_3)    // #
#define SE_CURR LS(SE_4)    // ¤
#define SE_PERC LS(SE_5)    // %
#define SE_AMPR LS(SE_6)    // &
#define SE_SLSH LS(SE_7)    // /
#define SE_LPRN LS(SE_8)    // (
#define SE_RPRN LS(SE_9)    // )
#define SE_EQL  LS(SE_0)    // =
#define SE_QUES LS(SE_PLUS) // ?
#define SE_GRV  LS(SE_ACUT) // ` (dead)
// Row 2
#define SE_CIRC LS(SE_DIAE) // ^ (dead)
// Row 3
#define SE_ASTR LS(SE_QUOT) // *
// Row 4
#define SE_RABK LS(SE_LABK) // >
#define SE_SCLN LS(SE_COMM) // ;
#define SE_COLN LS(SE_DOT)  // :
#define SE_UNDS LS(SE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_AT   RA(SE_2)    // @
#define SE_PND  RA(SE_3)    // £
#define SE_DLR  RA(SE_4)    // $
#define SE_EURO RA(SE_5)    // €
#define SE_LCBR RA(SE_7)    // {
#define SE_LBRC RA(SE_8)    // [
#define SE_RBRC RA(SE_9)    // ]
#define SE_RCBR RA(SE_0)    // }
#define SE_BSLS RA(SE_PLUS) // (backslash)
// Row 2
#define SE_TILD RA(SE_DIAE) // ~ (dead)
// Row 4
#define SE_PIPE RA(SE_LABK) // |
#define SE_MICR RA(SE_M)    // µ

