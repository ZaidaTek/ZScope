/*** Copyright (C) 2019-2020 ZaidaTek and Andreas Riebesehl
**** This work is licensed under: Creative Commons Attribution-NoDerivatives 4.0 International Public License
**** For full license text, please visit: https://creativecommons.org/licenses/by-nd/4.0/legalcode
***/
#ifndef ZSCOPE__DEFINES_H_INCLUDED
#define ZSCOPE__DEFINES_H_INCLUDED

#define ZSCOPE_FONT_WINDOW ZTK_DEFAULT_WINDOW_TEXT_FONT
#define ZSCOPE_FONT_TITLE ZTK_DEFAULT_WINDOW_TEXT_FONT
#define ZSCOPE_FONT_PRINTER ZTK_DEFAULT_WINDOW_TEXT_FONT
#if (defined(_WIN32) || defined(_WIN64))
#undef ZSCOPE_FONT_WINDOW
#define ZSCOPE_FONT_WINDOW "MS Sans Serif"
#undef ZSCOPE_FONT_TITLE
#define ZSCOPE_FONT_TITLE "MS Sans Serif"
#undef ZSCOPE_FONT_PRINTER
#define ZSCOPE_FONT_PRINTER "MS Sans Serif"
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
#define ZSCOPE_ID_MENU_HEAD_EXIT 0x114
#define ZSCOPE_ID_MENU_DEVICE_TYPE 0x115
#define ZSCOPE_ID_MENU_DEVICE_ADDRESS 0x116
#define ZSCOPE_ID_MENU_DEVICE_SPEED 0x117
#define ZSCOPE_ID_MENU_DEVICE_CHANNEL 0x118
#define ZSCOPE_ID_MENU_DEVICE_CONNECT 0x119
#define ZSCOPE_ID_MENU_DEVICE_DISCONNECT 0x120

#define ZSCOPE_ID_HUD_MENU 0x200
#define ZSCOPE_ID_HUD_BOX_TOP 0x201
#define ZSCOPE_ID_HUD_BOX_BOTTOM 0x202
#define ZSCOPE_ID_HUD_CAPTURE 0x211
#define ZSCOPE_ID_HUD_SELECTOR 0x212
#define ZSCOPE_ID_HUD_DIAGRAM_TYPE 0x213
#define ZSCOPE_ID_HUD_DIAGRAM_RESET 0x221
#define ZSCOPE_ID_HUD_TRIGGER_MODE 0x233
#define ZSCOPE_ID_HUD_TRIGGER_FLANK 0x224
#define ZSCOPE_ID_HUD_TRIGGER_CHANNEL 0x231
#define ZSCOPE_ID_HUD_TRIGGER_HOLDOFF 0x2310
#define ZSCOPE_ID_HUD_MEASURE_UNIT 0x232
#define ZSCOPE_ID_HUD_CURSOR_TYPE 0x222
#define ZSCOPE_ID_HUD_CURSOR_TARGET 0x223

#define ZSCOPE_FLAG_NONE 0x0

#define ZSCOPE_MENU_NONE 0
#define ZSCOPE_MENU_DEVICE 1
#define ZSCOPE_MENU_HELP 2
#define ZSCOPE_MENU_CREDITS 3
#define ZSCOPE_MENU_TOGGLE -1

#define ZSCOPE_HUD_DIAGRAM 0
#define ZSCOPE_HUD_TRIGGER 1
#define ZSCOPE_HUD_MEASURE 2
#define ZSCOPE_HUD_CURSOR 3
#define ZSCOPE_HUD_SETTING 4

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

#define ZSCOPE_DEFAULT_MENU (ZSCOPE_MENU_DEVICE)
#define ZSCOPE_DEFAULT_HUD (ZSCOPE_HUD_TRIGGER)

#endif // ZSCOPE__DEFINES_H_INCLUDED
