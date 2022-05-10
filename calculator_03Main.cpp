/***************************************************************
 * Name:      calculator_03Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    sakar k.c. ()
 * Created:   2019-06-15
 * Copyright: sakar k.c. ()
 * License:
 **************************************************************/

#include "calculator_03Main.h"
#include <wx/msgdlg.h>
#include<iostream>
#include<string>
#include <sstream>      // std::ostringstream



//(*InternalHeaders(calculator_03Frame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(calculator_03Frame)
const long calculator_03Frame::ID_BUTTON7 = wxNewId();
const long calculator_03Frame::ID_TEXTCTRL1 = wxNewId();
const long calculator_03Frame::ID_BUTTON1 = wxNewId();
const long calculator_03Frame::ID_BUTTON2 = wxNewId();
const long calculator_03Frame::ID_STATICTEXT1 = wxNewId();
const long calculator_03Frame::ID_BUTTON3 = wxNewId();
const long calculator_03Frame::ID_BUTTON4 = wxNewId();
const long calculator_03Frame::ID_BUTTON5 = wxNewId();
const long calculator_03Frame::ID_BUTTON6 = wxNewId();
const long calculator_03Frame::ID_BUTTON8 = wxNewId();
const long calculator_03Frame::ID_BUTTON9 = wxNewId();
const long calculator_03Frame::ID_BUTTON10 = wxNewId();
const long calculator_03Frame::ID_BUTTON11 = wxNewId();
const long calculator_03Frame::ID_BUTTON12 = wxNewId();
const long calculator_03Frame::ID_BUTTON13 = wxNewId();
const long calculator_03Frame::ID_BUTTON14 = wxNewId();
const long calculator_03Frame::ID_BUTTON15 = wxNewId();
const long calculator_03Frame::ID_BUTTON16 = wxNewId();
const long calculator_03Frame::ID_BUTTON17 = wxNewId();
const long calculator_03Frame::ID_BUTTON18 = wxNewId();
const long calculator_03Frame::ID_BUTTON19 = wxNewId();
const long calculator_03Frame::ID_BUTTON20 = wxNewId();
const long calculator_03Frame::ID_STATICTEXT2 = wxNewId();
const long calculator_03Frame::ID_STATICTEXT3 = wxNewId();
const long calculator_03Frame::idMenuQuit = wxNewId();
const long calculator_03Frame::idMenuAbout = wxNewId();
const long calculator_03Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(calculator_03Frame,wxFrame)
    //(*EventTable(calculator_03Frame)
    //*)
END_EVENT_TABLE()

calculator_03Frame::calculator_03Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(calculator_03Frame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(340,490));
    wxFont thisFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial Narrow"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    btn9 = new wxButton(this, ID_BUTTON7, _("9"), wxPoint(175,190), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    txtDisplay = new wxTextCtrl(this, ID_TEXTCTRL1, _("0"), wxPoint(15,30), wxSize(310,70), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    btnBackSpace = new wxButton(this, ID_BUTTON1, _("del"), wxPoint(15,120), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("CE"), wxPoint(95,120), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    lblShowOp = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(16,32), wxSize(60,25), wxALIGN_RIGHT|wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    lblShowOp->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUTEXT));
    btnC = new wxButton(this, ID_BUTTON3, _("C"), wxPoint(175,120), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    btnPM = new wxButton(this, ID_BUTTON4, _("+/-"), wxPoint(255,120), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    btn7 = new wxButton(this, ID_BUTTON5, _("7"), wxPoint(15,190), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    btn8 = new wxButton(this, ID_BUTTON6, _("8"), wxPoint(95,190), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    btnPlus = new wxButton(this, ID_BUTTON8, _("+"), wxPoint(255,190), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    BTN4 = new wxButton(this, ID_BUTTON9, _("4"), wxPoint(15,260), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    btn5 = new wxButton(this, ID_BUTTON10, _("5"), wxPoint(95,260), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    btn6 = new wxButton(this, ID_BUTTON11, _("6"), wxPoint(175,260), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    btnSub = new wxButton(this, ID_BUTTON12, _("-"), wxPoint(255,260), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    btn1 = new wxButton(this, ID_BUTTON13, _("1"), wxPoint(14,330), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    btn2 = new wxButton(this, ID_BUTTON14, _("2"), wxPoint(95,330), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    btn3 = new wxButton(this, ID_BUTTON15, _("3"), wxPoint(175,330), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    btnmult = new wxButton(this, ID_BUTTON16, _("*"), wxPoint(255,330), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    btn0 = new wxButton(this, ID_BUTTON17, _("0"), wxPoint(15,400), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON17"));
    btnDot = new wxButton(this, ID_BUTTON18, _("."), wxPoint(95,400), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON18"));
    btnEqual = new wxButton(this, ID_BUTTON19, _("="), wxPoint(175,400), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON19"));
    btnDiv = new wxButton(this, ID_BUTTON20, _("/"), wxPoint(255,400), wxSize(70,60), 0, wxDefaultValidator, _T("ID_BUTTON20"));
    lblshowop1 = new wxStaticText(this, ID_STATICTEXT2, wxEmptyString, wxPoint(80,32), wxSize(30,25), wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
    lblshowop1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUTEXT));
    lblshowop1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    lblshowop2 = new wxStaticText(this, ID_STATICTEXT3, wxEmptyString, wxPoint(110,32), wxSize(60,25), 0, _T("ID_STATICTEXT3"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn9Click);
//    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&calculator_03Frame::OntxtDisplayText1);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnBackSpaceClick1);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnButton1Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnPMClick1);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn7Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn8Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnPlusClick);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnBTN4Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn5Click);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn6Click);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnSubClick);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn1Click);
    Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn2Click);
    Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn3Click);
    Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnmultClick);
    Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::Onbtn0Click);
    Connect(ID_BUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnDotClick);
    Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnEqualClick);
    Connect(ID_BUTTON20,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&calculator_03Frame::OnbtnDivClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&calculator_03Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&calculator_03Frame::OnAbout);
    //*)
}

calculator_03Frame::~calculator_03Frame()
{
    //(*Destroy(calculator_03Frame)
    //*)
}

void calculator_03Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void calculator_03Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

long first, second, result; //global variable

//event for each buttons

void calculator_03Frame::OnButton1Click(wxCommandEvent& event)
{
    //button C
    txtDisplay -> SetValue("0");
    lblShowOp -> SetLabel("");
}
void calculator_03Frame::OnButton2Click(wxCommandEvent& event)
{
    //button CE
    txtDisplay -> SetValue("0");
}

//incomplete one

void calculator_03Frame::OnbtnPMClick1(wxCommandEvent& event)
{
}
void calculator_03Frame::OnbtnBackSpaceClick1(wxCommandEvent& event)
{
    wxString res;
    long x, a;
    txtDisplay -> GetValue().ToLong(&x);
    a = x/10;
    res = wxString::Format(wxT("%i"), a);
    txtDisplay -> SetValue(res);

}
void calculator_03Frame::Onbtn0Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "0";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);                    //replace the value "0" by button label
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "0";     //for increasing number of digits
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn1Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "1";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "1";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn2Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "2";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "2";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn3Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "3";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "3";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::OnBTN4Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "4";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "4";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn5Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "5";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "5";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn6Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "6";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "6";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn7Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "7";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "7";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn8Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "8";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "8";
        txtDisplay -> SetValue(res);
    }
}
void calculator_03Frame::Onbtn9Click(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "9";
    if(txtDisplay -> GetValue() == "0" ){
        txtDisplay -> SetValue(res);
    }
    else{
        txtDisplay -> GetValue().ToLong(&x);
        res = wxString::Format(wxT("%i"), x) + "9";
        txtDisplay -> SetValue(res);
    }
}

//incomplete one

void calculator_03Frame::OnbtnDotClick(wxCommandEvent& event)
{
}
void calculator_03Frame::OnbtnPlusClick(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "+";
    wxString res1 = "0";
    wxString res2 = "";
    if(txtDisplay -> GetValue().ToLong(&x)){
        res2 = wxString::Format(wxT("%i"), x);
        lblShowOp -> SetLabel(res2);
        txtDisplay -> SetValue(res1);
    }
    lblshowop1 -> SetLabel(res);
}
void calculator_03Frame::OnbtnSubClick(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "-";
    wxString res1 = "0";
    wxString res2 = "";
    if(txtDisplay -> GetValue().ToLong(&x)){
        res2 = wxString::Format(wxT("%i"), x);
        lblShowOp -> SetLabel(res2);
        txtDisplay -> SetValue(res1);
    }
    lblshowop1 -> SetLabel(res);
}
void calculator_03Frame::OnbtnmultClick(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "*";
    wxString res1 = "0";
    wxString res2 = "";
    if(txtDisplay -> GetValue().ToLong(&x)){
        res2 = wxString::Format(wxT("%i"), x);
        lblShowOp -> SetLabel(res2);
        txtDisplay -> SetValue(res1);
    }
    lblshowop1 -> SetLabel(res);
}
void calculator_03Frame::OnbtnDivClick(wxCommandEvent& event)
{
    long x = 0;
    wxString res = "/";
    wxString res1 = "0";
    wxString res2 = "";
    if(txtDisplay -> GetValue().ToLong(&x)){
        res2 = wxString::Format(wxT("%i"), x);
        lblShowOp -> SetLabel(res2);
        txtDisplay -> SetValue(res1);
    }
    lblshowop1 -> SetLabel(res);
}
void calculator_03Frame::OnbtnEqualClick(wxCommandEvent& event)
{
    long x;
    wxString res = wxT("");
    wxString res1 = wxT("");
    txtDisplay -> GetValue().ToLong(&x);
    res1 = wxString::Format(wxT("%i"),x);
    lblshowop2 -> SetLabel(res1);
    if(lblshowop1 -> GetLabel() == '+'){
        if(lblShowOp -> GetLabel().ToLong(&first) and lblshowop2 -> GetLabel().ToLong(&second))
        {
            res << first + second;
            txtDisplay -> SetValue(res);
        }
    }
    if(lblshowop1 -> GetLabel() == '-'){
        if(lblShowOp -> GetLabel().ToLong(&first) and lblshowop2 -> GetLabel().ToLong(&second))
        {
            res << first - second;
            txtDisplay -> SetValue(res);
        }
    }
    if(lblshowop1 -> GetLabel() == '*'){
        if(lblShowOp -> GetLabel().ToLong(&first) and lblshowop2 -> GetLabel().ToLong(&second))
        {
            res << first * second;
            txtDisplay -> SetValue(res);
        }
    }
    if(lblshowop1 -> GetLabel() == '/'){
        if(lblShowOp -> GetLabel().ToLong(&first) and lblshowop2 -> GetLabel().ToLong(&second))
        {
            res << first / second;
            txtDisplay -> SetValue(res);
        }
    }
}
