#pragma once

typedef struct TUIData TUIData;

typedef enum {
  kTermModeSynchronizedOutput = 2026,
  kTermModeGraphemeClusters = 2027,
  kTermModeThemeUpdates = 2031,
  kTermModeResizeEvents = 2048,
} TermMode;

typedef enum {
  kTermModeNotRecognized = 0,
  kTermModeSet = 1,
  kTermModeReset = 2,
  kTermModePermanentlySet = 3,
  kTermModePermanentlyReset = 4,
} TermModeState;

typedef enum {
    enable_mouse, disable_mouse,
    enable_mouse_move, disable_mouse_move,
    enable_bracketed_paste, disable_bracketed_paste,
    enable_lr_margin, disable_lr_margin,
    enter_strikethrough_mode,
    enter_altfont_mode,
    set_rgb_foreground, set_rgb_background,
    set_cursor_color,
    reset_cursor_color,
    enable_focus_reporting, disable_focus_reporting,
    resize_screen,
    reset_scroll_reg,
    set_cursor_style, reset_cursor_style,
    save_title, restore_title, set_title,
    set_underline_style,
    set_underline_color,
    do_sync,
    ext_term_instr_num
} ExtTermInstr ;

#define USE_UNIBI 1
#ifdef USE_UNIBI
#include "nvim/tui/terminfo_defs.h"
typedef unibi_term termdata;
#else
#include "nvim/tui/terminfo_data.h"
typedef struct {
  struct terminfo_data *td_base;
  char *ext_str[ext_term_instr_num];
  char *ext_bool[ext_term_instr_num];
} termdata;
#endif
