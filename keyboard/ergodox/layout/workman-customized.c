/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	KEY_Escape,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	KEY_6_Caret,
	KEY_DeleteBackspace,	KEY_q_Q,	KEY_d_D,	KEY_r_R,	KEY_w_W,	KEY_b_B,	0x31,
	KEY_Tab,	KEY_a_A,	KEY_s_S,	KEY_h_H,	KEY_t_T,	KEY_g_G,
	KEY_LeftShift,	KEY_z_Z,	KEY_x_X,	KEY_m_M,	KEY_c_C,	KEY_v_V,	KEY_Slash_Question,
	0,	KEY_F2,	KEY_F3,	KEY_F4,	KEY_Period_GreaterThan,
	0,	0,
	0,	0,	0,
	KEY_LeftControl,	KEY_Spacebar,	KEY_LeftGUI,
	// right hand
	0,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	0,	0,
	0x2D,	KEY_j_J,	KEY_f_F,	KEY_u_U,	KEY_p_P,	KEY_SingleQuote_DoubleQuote,	0,
	KEY_y_Y,	KEY_n_N,	KEY_e_E,	KEY_o_O,	KEY_i_I,	0,
	KEY_Backslash_Pipe,	KEY_k_K,	KEY_l_L,	0,	0x38,	KEY_1_Exclamation,	0,
	KEY_Comma_LessThan,	0,	0,	0,	KEYPAD_Pound,
	KEY_LeftArrow,	KEY_RightArrow,
	KEY_UpArrow,	0,	0,
	KEY_DownArrow,	1,	KEY_ReturnEnter
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	KEY_Backslash_Pipe,	KEY_Slash_Question,	0,	0,
	0x35,	0x36,	KEY_LeftBracket_LeftBrace,	0x2F,	KEY_9_LeftParenthesis,	0,
	0,	0,	0,	0,	0,	KEY_Equal_Plus,	0,
	0,	0,	0,	0,	KEY_7_Ampersand,
	0,	0,
	0,	0,	0,
	KEY_Equal_Plus,	KEY_Spacebar,	KEY_GraveAccent_Tilde,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	KEY_8_Asterisk,	0,	KEY_Semicolon_Colon,	0,	0,	0,	0,
	KEY_0_RightParenthesis,	0x30,	KEY_RightBracket_RightBrace,	KEY_Period_GreaterThan,	KEY_Semicolon_Colon,	0,
	0,	KEY_Dash_Underscore,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	1,	0
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	sshprre,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	NULL,	sshprre,	sshprre,	NULL,
	kprrel,	NULL,	NULL,	NULL,	kprrel,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	lpush1,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	sshprre,	kprrel,	NULL,	NULL,
	sshprre,	sshprre,	kprrel,	sshprre,	sshprre,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	sshprre,	NULL,
	NULL,	NULL,	NULL,	NULL,	sshprre,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	sshprre,	NULL,	sshprre,	NULL,	NULL,	NULL,	NULL,
	sshprre,	sshprre,	kprrel,	sshprre,	kprrel,	NULL,
	NULL,	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	sshprre,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	NULL,	sshprre,	sshprre,	NULL,
	kprrel,	NULL,	NULL,	NULL,	kprrel,
	kprrel,	kprrel,
	kprrel,	NULL,	NULL,
	kprrel,	lpop1,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	sshprre,	kprrel,	NULL,	NULL,
	sshprre,	sshprre,	kprrel,	sshprre,	sshprre,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	sshprre,	NULL,
	NULL,	NULL,	NULL,	NULL,	sshprre,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	sshprre,	NULL,	sshprre,	NULL,	NULL,	NULL,	NULL,
	sshprre,	sshprre,	kprrel,	sshprre,	kprrel,	NULL,
	NULL,	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
};
// ----------------------------------------------------------------------------
