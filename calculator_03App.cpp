/***************************************************************
 * Name:      calculator_03App.cpp
 * Purpose:   Code for Application Class
 * Author:    sakar k.c. ()
 * Created:   2019-06-15
 * Copyright: sakar k.c. ()
 * License:
 **************************************************************/

#include "calculator_03App.h"

//(*AppHeaders
#include "calculator_03Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(calculator_03App);

bool calculator_03App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	calculator_03Frame* Frame = new calculator_03Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
