/*                KEY POSITIONS

  ╭────────────────────────╮ ╭────────────────────────╮
  │  0   1   2   3   4   5 │ │  6   7   8   9  10  11 │
  │ 12  13  14  15  16  17 │ │ 18  19  20  21  22  23 │
  │ 24  25  26  27  28  29 │ │ 30  31  32  33  34  35 │
  ╰───────────╮ 36  37  38 │ │ 39  40  41 ╭───────────╯
              ╰────────────╯ ╰────────────╯            */

/ {
    combos {
        compatible = "zmk,combos";

        combo_at {
            timeout-ms = <50>;
            key-positions = <2 14>;
            layers = <0>;
            bindings = <&kp SE_AT>;
        };

        combo_hash {
            timeout-ms = <50>;
            key-positions = <3 15>;
            layers = <0>;
            bindings = <&kp SE_HASH>;
        };

        combo_dlr {
            timeout-ms = <50>;
            key-positions = <4 16>;
            layers = <0>;
            bindings = <&kp SE_DLR>;
        };

        combo_perc {
            timeout-ms = <50>;
            key-positions = <5 17>;
            layers = <0>;
            bindings = <&kp SE_PERC>;
        };

        combo_circ {
            timeout-ms = <50>;
            key-positions = <6 18>;
            layers = <0>;
            bindings = <&macro_circ>;
        };

        combo_amp {
            timeout-ms = <50>;
            key-positions = <7 19>;
            layers = <0>;
            bindings = <&kp SE_AMPR>;
        };

        combo_astr {
            timeout-ms = <50>;
            key-positions = <8 20>;
            layers = <0>;
            bindings = <&kp SE_ASTR>;
        };

        combo_bsls {
            timeout-ms = <50>;
            key-positions = <9 21>;
            layers = <0>;
            bindings = <&kp SE_BSLS>;
        };

        combo_tild {
            timeout-ms = <50>;
            key-positions = <14 26>;
            layers = <0>;
            bindings = <&macro_tild>;
        };

        combo_grv {
            timeout-ms = <50>;
            key-positions = <15 27>;
            layers = <0>;
            bindings = <&macro_grv>;
        };

        combo_bspc {
            timeout-ms = <50>;
            key-positions = <31 32>;
            layers = <0>;
            bindings = <&kp BSPC>;
        };

        combo_del {
            timeout-ms = <50>;
            key-positions = <31 33>;
            layers = <0>;
            bindings = <&kp DEL>;
        };

        combo_col {
            timeout-ms = <50>;
            key-positions = <32 33>;
            layers = <0>;
            bindings = <&kp SE_COLN>;
        };

    };
};
