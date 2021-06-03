/*** Copyright (C) 2019-2021 ZaidaTek and Andreas Riebesehl
**** This work is licensed under: Creative Commons Attribution-NoDerivatives 4.0 International Public License
**** For full license text, please visit: https://creativecommons.org/licenses/by-nd/4.0/legalcode
***/
#ifndef ZS__DEFINES_H_INCLUDED
#define ZS__DEFINES_H_INCLUDED

#ifdef ZTM__OS__WINDOWS
#define ZSCOPE_FONT_WINDOW (const ZT_CHAR*)"MS Sans Serif"
#define ZSCOPE_FONT_TITLE (const ZT_CHAR*)"MS Sans Serif"
#else
#define ZSCOPE_FONT_WINDOW ZTK_DEFAULT_WINDOW_TEXT_FONT
#define ZSCOPE_FONT_TITLE ZTK_DEFAULT_WINDOW_TEXT_FONT
#endif

#define ZSCOPE_WIDTH_MENU 0.6
#define ZSCOPE_HEIGHT_MENU 0.6
#define ZSCOPE_WIDTH_BUTTON 0.25
#define ZSCOPE_HEIGHT_BUTTON 0.05
#define ZSCOPE_HEIGHT_FONT 0.03333
#define ZSCOPE_HEIGHT_FONT_BIG 0.05
#define ZSCOPE_HEIGHT_MAX_BUTTON 32
#define ZSCOPE_HEIGHT_MAX_FONT 24
#define ZSCOPE_HEIGHT_MAX_FONT_BIG 36

#define ZSCOPE_REPEAT 25

#define ZSCOPE_ID_MENU_BOX 0x100
#define ZSCOPE_ID_MENU_HEAD_PAGE 0x109
#define ZSCOPE_ID_MENU_HEAD_DEVICE 0x110
#define ZSCOPE_ID_MENU_HEAD_SETTING 0x111
#define ZSCOPE_ID_MENU_HEAD_HELP 0x112
#define ZSCOPE_ID_MENU_HEAD_CREDITS 0x113
#define ZSCOPE_ID_MENU_HEAD_SETTINGS 0x121
#define ZSCOPE_ID_MENU_HEAD_EXIT 0x114
#define ZSCOPE_ID_MENU_DEVICE_TYPE 0x115
#define ZSCOPE_ID_MENU_DEVICE_ADDRESS 0x116
#define ZSCOPE_ID_MENU_DEVICE_SPEED 0x117
#define ZSCOPE_ID_MENU_DEVICE_CHANNEL 0x118
#define ZSCOPE_ID_MENU_DEVICE_CONNECT 0x119
#define ZSCOPE_ID_MENU_DEVICE_DISCONNECT 0x120
#define ZSCOPE_ID_MENU_SETTINGS_RENDERER 0x122
#define ZSCOPE_ID_MENU_SETTINGS_LANGUAGE 0x123
#define ZSCOPE_ID_MENU_SETTINGS_FRAMERATE 0x124

#define ZSCOPE_ID_HUD_MENU 0x200
#define ZSCOPE_ID_HUD_BOX_TOP 0x201
#define ZSCOPE_ID_HUD_BOX_BOTTOM 0x202
#define ZSCOPE_ID_HUD_CAPTURE 0x211
#define ZSCOPE_ID_HUD_RECORD 0x2110
#define ZSCOPE_ID_HUD_SELECTOR 0x212
#define ZSCOPE_ID_HUD_DIAGRAM_TYPE 0x213
#define ZSCOPE_ID_HUD_DIAGRAM_RESET 0x221
#define ZSCOPE_ID_HUD_DIAGRAM_BITMAP 0x2210
#define ZSCOPE_ID_HUD_DIAGRAM_PNG 0x2211
#define ZSCOPE_ID_HUD_TRIGGER_MODE 0x233
#define ZSCOPE_ID_HUD_TRIGGER_FLANK 0x224
#define ZSCOPE_ID_HUD_TRIGGER_CHANNEL 0x231
#define ZSCOPE_ID_HUD_TRIGGER_HOLDOFF 0x2310
#define ZSCOPE_ID_HUD_MEASURE_UNIT 0x232
#define ZSCOPE_ID_HUD_CURSOR_TYPE 0x222
#define ZSCOPE_ID_HUD_CURSOR_TARGET 0x223

#define ZSCOPE_CFG_DELIMIT (const ZT_CHAR*)"\n"
#define ZSCOPE_CFG_ASSIGN (const ZT_CHAR*)"="
#define ZSCOPE_CFG_PATH (const ZT_CHAR*)"ZS.cfg"
#define ZSCOPE_CFG_DEV_PORT (const ZT_CHAR*)"dev_port"
#define ZSCOPE_CFG_DEV_RATE (const ZT_CHAR*)"dev_rate"
#define ZSCOPE_CFG_DEV_CHANNEL (const ZT_CHAR*)"dev_channel"
#define ZSCOPE_CFG_MES_UNIT (const ZT_CHAR*)"mes_unit"
#define ZSCOPE_CFG_SET_RENDER (const ZT_CHAR*)"set_render"
#define ZSCOPE_CFG_SET_LANG (const ZT_CHAR*)"set_lang"
#define ZSCOPE_CFG_SET_FPS (const ZT_CHAR*)"set_fps"

#define ZSCOPE_CFG_CLR_GRID_0 (const ZT_CHAR*)"clr_grid0"
#define ZSCOPE_CFG_CLR_GRID_1 (const ZT_CHAR*)"clr_grid1"
#define ZSCOPE_CFG_CLR_CURSOR_0 (const ZT_CHAR*)"clr_cursor0"
#define ZSCOPE_CFG_CLR_CURSOR_1 (const ZT_CHAR*)"clr_cursor1"
#define ZSCOPE_CFG_CLR_CURSOR_2 (const ZT_CHAR*)"clr_cursor2"
#define ZSCOPE_CFG_CLR_BACKGROUND (const ZT_CHAR*)"clr_background"
#define ZSCOPE_CFG_CLR_TRIGGER (const ZT_CHAR*)"clr_trigger"
#define ZSCOPE_CFG_CLR_PLOT_0 (const ZT_CHAR*)"clr_plot0"
#define ZSCOPE_CFG_CLR_PLOT_1 (const ZT_CHAR*)"clr_plot1"
#define ZSCOPE_CFG_CLR_PLOT_2 (const ZT_CHAR*)"clr_plot2"
#define ZSCOPE_CFG_CLR_PLOT_3 (const ZT_CHAR*)"clr_plot3"
#define ZSCOPE_CFG_CLR_PLOT_4 (const ZT_CHAR*)"clr_plot4"
#define ZSCOPE_CFG_CLR_PLOT_5 (const ZT_CHAR*)"clr_plot5"
#define ZSCOPE_CFG_CLR_PLOT_6 (const ZT_CHAR*)"clr_plot6"
#define ZSCOPE_CFG_CLR_PLOT_7 (const ZT_CHAR*)"clr_plot7"

#define ZSCOPE_FLAG_NONE 0x0
#define ZSCOPE_FLAG_SAVE 0x10

#define ZSCOPE_MENU_NONE 0
#define ZSCOPE_MENU_DEVICE 1
#define ZSCOPE_MENU_HELP 2
#define ZSCOPE_MENU_CREDITS 3
#define ZSCOPE_MENU_SETTINGS 4
#define ZSCOPE_MENU_TOGGLE -1

#define ZSCOPE_HUD_DIAGRAM 0
#define ZSCOPE_HUD_TRIGGER 1
#define ZSCOPE_HUD_MEASURE 2
#define ZSCOPE_HUD_CURSOR 3

#define ZSCOPE_USER_FLAG_NONE ZSCOPE_FLAG_NONE
#define ZSCOPE_USER_FLAG_MOVE 0x1
#define ZSCOPE_USER_FLAG_SHIFT 0x10

#define ZSCOPE_USER_TRIGGER_FLAG_HALT 0x10
#define ZSCOPE_USER_TRIGGER_MODE_NONE 0
#define ZSCOPE_USER_TRIGGER_MODE_CONT 1
#define ZSCOPE_USER_TRIGGER_MODE_SINGLE 2

#define ZSCOPE_DEVICE_FLAG_NONE ZSCOPE_FLAG_NONE
//#define ZSCOPE_DEVICE_FLAG_OK 0x1
#define ZSCOPE_DEVICE_FLAG_CAPTURE 0x10
#define ZSCOPE_DEVICE_FLAG_HALT 0x20
#define ZSCOPE_DEVICE_FLAG_RECORD 0x100

#define ZSCOPE_DEFAULT_MENU (ZSCOPE_MENU_DEVICE)
#define ZSCOPE_DEFAULT_HUD (ZSCOPE_HUD_TRIGGER)
#define ZSCOPE_DEFAULT_RENDERER ZTK_RENDERER_SYSTEM
#define ZSCOPE_DEFAULT_FRAMERATE 0
// temporary
#define ZSCOPE_DEFAULT_ADDRESS 3
#define ZSCOPE_DEFAULT_CONFIG 0x1
#define ZSCOPE_DEFAULT_SPEED 100000

#endif // ZS__DEFINES_H_INCLUDED
