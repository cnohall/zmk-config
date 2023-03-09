/ {
    behaviors {
        hm_aodia: homerow_aodia {
        compatible = "zmk,behavior-hold-tap";
        label = "HOMEROW_AODIA";
        #binding-cells = <2>;
        tapping-term-ms = <220>;
        quick-tap-ms = <0>;
        flavor = "tap-preferred";
        global-quick-tap;
        bindings = <&kp>, <&kp>;
        };

        hm_sl: homerow_sl {
        compatible = "zmk,behavior-hold-tap";
        label = "HOMEROW_SL";
        #binding-cells = <2>;
        tapping-term-ms = <220>;
        quick-tap-ms = <0>;
        flavor = "tap-preferred";
        global-quick-tap;
        bindings = <&kp>, <&kp>;
        };

        hm_dk: homerow_dk {
        compatible = "zmk,behavior-hold-tap";
        label = "HOMEROW_DK";
        #binding-cells = <2>;
        tapping-term-ms = <200>;
        quick-tap-ms = <0>;
        flavor = "tap-preferred";
        global-quick-tap;
        bindings = <&kp>, <&kp>;
        };

        hm_fj: homerow_fj {
        compatible = "zmk,behavior-hold-tap";
        label = "HOMEROW_FJ";
        #binding-cells = <2>;
        tapping-term-ms = <200>;
        quick-tap-ms = <0>;
        flavor = "tap-preferred";
        global-quick-tap;
        bindings = <&kp>, <&kp>;
        };

    };
};
