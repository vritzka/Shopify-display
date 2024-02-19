// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

    #include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1( lv_event_t * e);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Panel1;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Panel2;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Panel3;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui_Label9;
extern lv_obj_t *ui_Panel4;
extern lv_obj_t *ui_Label10;
extern lv_obj_t *ui_Label11;
extern lv_obj_t *ui_Panel5;
extern lv_obj_t *ui_Label12;
extern lv_obj_t *ui_Label13;
extern lv_obj_t *ui_Panel6;
extern lv_obj_t *ui_Label14;
extern lv_obj_t *ui_Label15;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
void ui_event_Screen2( lv_event_t * e);
extern lv_obj_t *ui_Screen2;
extern lv_obj_t *ui_Container1;
void ui_event_ScreenBrightnessSlider( lv_event_t * e);
extern lv_obj_t *ui_ScreenBrightnessSlider;
extern lv_obj_t *ui_Label7;
extern lv_obj_t *ui_Container2;
void ui_event_WifiKeyboard( lv_event_t * e);
extern lv_obj_t *ui_WifiKeyboard;
extern lv_obj_t *ui_WifiDropdown;
extern lv_obj_t *ui_WifiPassword;
void ui_event_WifiScanButton( lv_event_t * e);
extern lv_obj_t *ui_WifiScanButton;
extern lv_obj_t *ui_WifiStatusLabel;
extern lv_obj_t *ui_Container3;
extern lv_obj_t *ui_Label4;
void ui_event_FirmwareUpgradeButton( lv_event_t * e);
extern lv_obj_t *ui_FirmwareUpgradeButton;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_UpgradeStatusBar;
extern lv_obj_t *ui_CurrentVersionLabel;
void ui_event____initial_actions0( lv_event_t * e);
extern lv_obj_t *ui____initial_actions0;




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
