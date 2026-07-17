// ElysiumClient-specific config variables.
// See src/engine/shared/config.h for how this file is included.

MACRO_CONFIG_INT(EcRainbowTee, ec_rainbow_tee, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Cycle your tee's colors through the rainbow")
MACRO_CONFIG_INT(EcRainbowSpeed, ec_rainbow_speed, 100, 1, 1000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How fast the rainbow cycles, in percent")

MACRO_CONFIG_INT(EcOutline, ec_outline, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draw a colored outline around your own tee for visibility")
MACRO_CONFIG_COL(EcOutlineColor, ec_outline_color, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of the tee outline")

MACRO_CONFIG_INT(EcFastInput, ec_fast_input, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict extra ticks ahead using your latest unconfirmed input, reducing perceived input delay")
MACRO_CONFIG_INT(EcFastInputAmount, ec_fast_input_amount, 20, 1, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How many milliseconds of extra prediction to apply (capped to one tick - beyond this the multi-tick extrapolation gets unreliable)")
MACRO_CONFIG_INT(EcFastInputMode, ec_fast_input_mode, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "0=normal (repredict on input change), 1=Maik Input (skips the aim-freeze safety net), 2=Numb Input (throttled repredicts)")
MACRO_CONFIG_INT(EcFastInputThrottleMs, ec_fast_input_throttle_ms, 30, 10, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Numb Input: minimum time between repredicts")

MACRO_CONFIG_STR(EcCustomResolution, ec_custom_resolution, 32, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Custom window resolution, e.g. 1920x1080")

// Translate
MACRO_CONFIG_STR(EcTranslateBackend, ec_translate_backend, 32, "google", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate backend (google, ftapi, libretranslate)")
MACRO_CONFIG_STR(EcTranslateTarget, ec_translate_target, 16, "en", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate incoming messages to this language")
MACRO_CONFIG_STR(EcTranslateEndpoint, ec_translate_endpoint, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "For backends which need it, endpoint to use (must be https)")
MACRO_CONFIG_STR(EcTranslateKey, ec_translate_key, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "For backends which need it, api key to use")
MACRO_CONFIG_INT(EcTranslateAuto, ec_translate_auto, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Automatically translate incoming messages")
MACRO_CONFIG_INT(EcTranslateOutgoing, ec_translate_outgoing, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate your own outgoing chat messages before sending them")
MACRO_CONFIG_STR(EcTranslateOutgoingTarget, ec_translate_outgoing_target, 16, "en", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Language to translate your outgoing messages into")
