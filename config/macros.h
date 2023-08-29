/ {
    macros {
    /* Macro macro: */
#define str(s) #s
#define MACRO(NAME, BINDINGS) \
        macro_##NAME: macro_##NAME { \
            compatible = "zmk,behavior-macro"; \
            label = str(macro_##NAME); \
            #binding-cells = <0>; \
            wait-ms = <30>; \
            tap-ms = <40>; \
            bindings = <BINDINGS>; \
        };

        MACRO(circ, &kp SE_CIRC &kp SPACE)
    };
};
