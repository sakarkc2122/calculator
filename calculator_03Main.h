/***************************************************************
 * Name:      calculator_03Main.h
 * Purpose:   Defines Application Frame
 * Author:    sakar k.c. ()
 * Created:   2019-06-15
 * Copyright: sakar k.c. ()
 * License:
 **************************************************************/

#ifndef CALCULATOR_03MAIN_H
#define CALCULATOR_03MAIN_H

//(*Headers(calculator_03Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class calculator_03Frame: public wxFrame
{
    public:

        calculator_03Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~calculator_03Frame();

    private:

        //(*Handlers(calculator_03Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnbtnBackSpaceClick(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OntxtDisplayText(wxCommandEvent& event);
        void OnbtnPMClick(wxCommandEvent& event);
        void Onbtn7Click(wxCommandEvent& event);
        void OnbtnPMClick1(wxCommandEvent& event);
        void Onbtn7Click1(wxCommandEvent& event);
        void OnbtnBackSpaceClick1(wxCommandEvent& event);
        void Onbtn0Click(wxCommandEvent& event);
        void Onbtn1Click(wxCommandEvent& event);
        void Onbtn2Click(wxCommandEvent& event);
        void Onbtn3Click(wxCommandEvent& event);
        void OnBTN4Click(wxCommandEvent& event);
        void Onbtn5Click(wxCommandEvent& event);
        void Onbtn6Click(wxCommandEvent& event);
        void Onbtn7Click2(wxCommandEvent& event);
        void Onbtn8Click(wxCommandEvent& event);
        void Onbtn9Click(wxCommandEvent& event);
        void OnbtnPlusClick(wxCommandEvent& event);
        void OnbtnSubClick(wxCommandEvent& event);
        void OnbtnmultClick(wxCommandEvent& event);
        void OnbtnDivClick(wxCommandEvent& event);
        void OnbtnEqualClick(wxCommandEvent& event);
        void OnbtnDotClick(wxCommandEvent& event);
        void OntxtDisplayText1(wxCommandEvent& event);
        void botton_click(wxCommandEvent& event);
        //*)

        //(*Identifiers(calculator_03Frame)
        static const long ID_BUTTON7;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_BUTTON13;
        static const long ID_BUTTON14;
        static const long ID_BUTTON15;
        static const long ID_BUTTON16;
        static const long ID_BUTTON17;
        static const long ID_BUTTON18;
        static const long ID_BUTTON19;
        static const long ID_BUTTON20;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(calculator_03Frame)
        wxButton* BTN4;
        wxButton* Button2;
        wxButton* btn0;
        wxButton* btn1;
        wxButton* btn2;
        wxButton* btn3;
        wxButton* btn5;
        wxButton* btn6;
        wxButton* btn7;
        wxButton* btn8;
        wxButton* btn9;
        wxButton* btnBackSpace;
        wxButton* btnC;
        wxButton* btnDiv;
        wxButton* btnDot;
        wxButton* btnEqual;
        wxButton* btnPM;
        wxButton* btnPlus;
        wxButton* btnSub;
        wxButton* btnmult;
        wxStaticText* lblShowOp;
        wxStaticText* lblshowop1;
        wxStaticText* lblshowop2;
        wxStatusBar* StatusBar1;
        wxTextCtrl* txtDisplay;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATOR_03MAIN_H
