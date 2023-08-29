/ {
    macros {
        ZMK_MACRO(macro_circ,
            wait-ms = <30>;
            tap-ms = <40>;
            bindings = <&kp SE_CIRC &kp SPACE>;
            layers = QUERTY;
        )
    };
};
