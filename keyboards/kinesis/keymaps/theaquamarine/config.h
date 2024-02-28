#pragma once

// place overrides here

#define EE_HANDS

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD
#undef TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
// #define PERMISSIVE_HOLD
#undef PERMISSIVE_HOLD

// #undef PREVENT_STUCK_MODIFIERS

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 35
