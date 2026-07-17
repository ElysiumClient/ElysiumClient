// ElysiumClient-specific config variables.
// See src/engine/shared/config.h for how this file is included.

MACRO_CONFIG_INT(EcRainbowTee, ec_rainbow_tee, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Cycle your tee's colors through the rainbow")
MACRO_CONFIG_INT(EcRainbowSpeed, ec_rainbow_speed, 100, 1, 1000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How fast the rainbow cycles, in percent")

MACRO_CONFIG_INT(EcOutline, ec_outline, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draw a colored outline around your own tee for visibility")
MACRO_CONFIG_COL(EcOutlineColor, ec_outline_color, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of the tee outline")

// Fast Input: ported from AetherClient (github.com/AetherClientTeam/AetherClient), used with
// permission. Predicts extra ticks ahead using the latest unconfirmed input to reduce perceived
// input delay. ec_fast_input_mode selects the prediction "feel": 0=Aether+ (adaptive), 1=Saiko+,
// 2=TClient, 3=Lewn+, 4=Zeni$h+.
MACRO_CONFIG_INT(EcFastInput, ec_fast_input, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict extra ticks ahead using your latest unconfirmed input, reducing perceived input delay")
MACRO_CONFIG_INT(EcFastInputMode, ec_fast_input_mode, 0, 0, 4, CFGFLAG_CLIENT | CFGFLAG_SAVE, "0=Aether+ (adaptive), 1=Saiko+, 2=TClient, 3=Lewn+, 4=Zeni$h+")
MACRO_CONFIG_INT(EcFastInputMovementAmount, ec_fast_input_movement_amount, 30, 0, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Aether+ movement prediction amount, in ms")
MACRO_CONFIG_INT(EcFastInputActionAmount, ec_fast_input_action_amount, 38, 0, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Aether+ hook/fire prediction amount, in ms")
MACRO_CONFIG_INT(EcFastInputTClientAmount, ec_fast_input_tclient_amount, 20, 1, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "TClient mode prediction amount, in ms")
MACRO_CONFIG_INT(EcFastInputTClientOthers, ec_fast_input_tclient_others, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "TClient mode: apply fast input to other tees")
MACRO_CONFIG_INT(EcSaikoAmount, ec_saiko_amount, 0, 0, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Saiko+ strength (accepts decimals such as 1.195)")
MACRO_CONFIG_INT(EcSaikoAmountFine, ec_saiko_amount_fine, 0, 0, 9, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Saiko+ third decimal digit")
MACRO_CONFIG_INT(EcSaikoOthers, ec_saiko_others, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply Saiko+ fast input to other tees")
MACRO_CONFIG_INT(EcLewnAmount, ec_lewn_amount, 140, 100, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Lewn+ strength (accepts decimals such as 1.195)")
MACRO_CONFIG_INT(EcLewnAmountFine, ec_lewn_amount_fine, 0, 0, 9, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Lewn+ third decimal digit")
MACRO_CONFIG_INT(EcLewnCorrection, ec_lewn_correction, 75, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Lewn+ render correction sharpness")
MACRO_CONFIG_INT(EcLewnOthers, ec_lewn_others, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply Lewn+ fast input to other tees")
MACRO_CONFIG_INT(EcZenishAmount, ec_zenish_amount, 100, 100, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Zeni$h+ strength (accepts decimals such as 1.195)")
MACRO_CONFIG_INT(EcZenishAmountFine, ec_zenish_amount_fine, 0, 0, 9, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Zeni$h+ third decimal digit")
MACRO_CONFIG_INT(EcZenishCorrection, ec_zenish_correction, 30, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Zeni$h+ render correction softness")
MACRO_CONFIG_INT(EcZenishOthers, ec_zenish_others, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply Zeni$h+ fast input to other tees")
MACRO_CONFIG_INT(EcFastInputAdaptiveOthers, ec_fast_input_adaptive_others, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Aether+: apply fast input movement offset to other tees")
MACRO_CONFIG_INT(EcFastInputAdaptiveOthersStyle, ec_fast_input_adaptive_others_style, 1, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Aether+ other-tee feel: 0 smooth, 1 precision, 2 aggressive")
MACRO_CONFIG_INT(EcFastInputAdaptiveOthersAmount, ec_fast_input_adaptive_others_amount, 135, 0, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Aether+ other-tee amount in 0.01 ticks")
MACRO_CONFIG_INT(EcFastInputBrakePriority, ec_fast_input_brake_priority, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict A/D reverse direction changes more aggressively")
MACRO_CONFIG_INT(EcFastInputBrakeReleasePriority, ec_fast_input_brake_release_priority, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predict A/D to neutral changes more aggressively")
MACRO_CONFIG_INT(EcFastInputBrakeAmount, ec_fast_input_brake_amount, 30, 0, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Brake priority prediction amount, in ms")
MACRO_CONFIG_INT(EcFastInputSmoothCorrections, ec_fast_input_smooth_corrections, 43, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Aether+ render correction sharpness")
MACRO_CONFIG_INT(EcFastInputPingAssist, ec_fast_input_ping_assist, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Adjust render correction sharpness slightly based on prediction time")
MACRO_CONFIG_INT(EcFastInputAutoMargin, ec_fast_input_auto_margin, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use fast input amount as a prediction margin floor")
MACRO_CONFIG_INT(EcFastInputLagGuard, ec_fast_input_lag_guard, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Reduce isolated fast input timing spikes and other-tee jitter")
MACRO_CONFIG_INT(EcFastInputDebug, ec_fast_input_debug, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show fast input debug information")

MACRO_CONFIG_STR(EcCustomResolution, ec_custom_resolution, 32, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Custom aspect ratio for a stretched view (WxH, e.g. 4x3) - does not change your actual resolution")

// Translate
MACRO_CONFIG_STR(EcTranslateBackend, ec_translate_backend, 32, "google", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate backend (google, ftapi, libretranslate)")
MACRO_CONFIG_STR(EcTranslateTarget, ec_translate_target, 16, "en", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate incoming messages to this language")
MACRO_CONFIG_STR(EcTranslateEndpoint, ec_translate_endpoint, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "For backends which need it, endpoint to use (must be https)")
MACRO_CONFIG_STR(EcTranslateKey, ec_translate_key, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "For backends which need it, api key to use")
MACRO_CONFIG_INT(EcTranslateAuto, ec_translate_auto, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Automatically translate incoming messages")
MACRO_CONFIG_INT(EcTranslateOutgoing, ec_translate_outgoing, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate your own outgoing chat messages before sending them")
MACRO_CONFIG_STR(EcTranslateOutgoingTarget, ec_translate_outgoing_target, 16, "en", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Language to translate your outgoing messages into")
