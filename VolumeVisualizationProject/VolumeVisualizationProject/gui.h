// generated by Fast Light User Interface Designer (fluid) version 1.0109

#ifndef gui_h
#define gui_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "Application.h"
#include <stdlib.h>
#include <FL/Fl_Menu_Bar.H>
#include "EditorWindow.h"
#include "DisplayWindow.h"

class Gui {
public:
  Gui();
  Fl_Double_Window *MainWindow;
  Fl_Menu_Bar *menuBar;
  Fl_Menu_Bar *volmenuBar;

  static Fl_Menu_Item menu_menuBar[];
  static Fl_Menu_Item menu_volumeBar[];
  static Fl_Menu_Item *fileMenu;
  static Fl_Menu_Item *readFile;
  static Fl_Menu_Item *volumeMenu;
  static Fl_Menu_Item *readVol;
  static Fl_Menu_Item *xray;
  static Fl_Menu_Item *mip;

public:
  static Fl_Menu_Item *exitButton;
private:
  void cb_exitButton_i(Fl_Menu_*, void*);
  static void cb_exitButton(Fl_Menu_*, void*);
private:
  void cb_readVol_i(Fl_Menu_*, void*);
  static void cb_readVol(Fl_Menu_*, void*);
  void cb_xray_i(Fl_Menu_*, void*);
  static void cb_xray(Fl_Menu_*, void*);
  void cb_mip_i(Fl_Menu_*, void*);
  static void cb_mip(Fl_Menu_*, void*);
public:
  CEditorWindow *EditorWindow;
  CDisplayWindow *DisplayWindow;
  void show();
  Application *app; 
};
#endif
