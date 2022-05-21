
#define MK_KINETIC_SPEED
// // Set the mouse settings to a comfortable speed/accuracy trade-off,
// // assuming a screen refresh rate of 60 Htz or higher
// // The default is 50. This makes the mouse ~3 times faster and more accurate
// #define MOUSEKEY_INTERVAL 16
// // The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// // give it more time to accelerate to max speed to retain precise control over short distances.
// #define MOUSEKEY_TIME_TO_MAX 40
// // The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
// #define MOUSEKEY_DELAY 100
// // It makes sense to use the same delay for the mouseweel
// #define MOUSEKEY_WHEEL_DELAY 100
// // The default is 100
// #define MOUSEKEY_WHEEL_INTERVAL 50
// // The default is 40
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// #define MK_KINETIC_SPEED
#define MOUSEKEY_INTERVAL 50
#define MOUSEKEY_INITIAL_SPEED 5
#define MOUSEKEY_BASE_SPEED 1000


// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD
#undef TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
// #define PERMISSIVE_HOLD
#undef PERMISSIVE_HOLD

// // #undef PREVENT_STUCK_MODIFIERS

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 30
