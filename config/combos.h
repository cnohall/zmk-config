/ {
    combos {
        compatible = "zmk,combos";

        combo_bspc {
            timeout-ms = <50>;
            key-positions = <31 32>;
            layers = <0>
            bindings = <&kp BSPC>;
        };

        combo_del {
            timeout-ms = <50>;
            key-positions = <31 33>;
            layers = <0>
            bindings = <&kp DEL>;
        };

        combo_ret {
            timeout-ms = <50>;
            key-positions = <25 26>;
            layers = <0>
            bindings = <&kp RET>;
        };

        combo_col {
            timeout-ms = <50>;
            key-positions = <32 33>;
            layers = <0>
            bindings = <&kp SE_COLN>;
        };

    };
};
