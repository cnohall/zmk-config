/ {
    combos {
        compatible = "zmk,combos";

        combo_bspc {
            timeout-ms = <50>;
            key-positions = <16 17>;
            bindings = <&kp BSPC>;
        };

        combo_del {
            timeout-ms = <50>;
            key-positions = <16 18>;
            bindings = <&kp DEL>;
        };

        combo_ret {
            timeout-ms = <50>;
            key-positions = <27 28>;
            bindings = <&kp RET>;
        };

        combo_esc {
            timeout-ms = <50>;
            key-positions = <12 13>;
            bindings = <&kp ESC>;
        };

        combo_col {
            timeout-ms = <50>;
            key-positions = <32 33>;
            bindings = <&kp SE_DOT>;
        };

    };
};
