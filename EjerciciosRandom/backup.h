#pragma once  //______________________________________ EjerciciosRandom.h  
#include "Resource.h"
class EjerciciosRandom: public Win::Dialog
{
public:
	EjerciciosRandom()
	{
	}
	~EjerciciosRandom()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxSalida;
	Win::Button bt1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(267);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(60);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosRandom";
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 18, 26, 143, 25, hWnd, 1000);
		bt1.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 171, 23, 89, 30, hWnd, 1001);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxSalida.Font = fontArial014A;
		bt1.Font = fontArial014A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		return false;
	}
};