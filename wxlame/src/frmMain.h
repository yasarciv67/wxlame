/*
 * This file is part of the wxLame and licensed under the GNU General Public License, version 3
 * http://www.gnu.org/licenses/gpl-3.0.html
 */

#ifndef FRMMAIN_H
#define FRMMAIN_H

#include "ConfigBase.h"

//(*Headers(frmMain)
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class frmMain: public wxFrame
{
public:

    frmMain(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~frmMain();

    //(*Declarations(frmMain)
    wxToolBarToolBase* ToolBarItem4;
    wxToolBar* ToolBar1;
    wxMenu Menu1;
    wxToolBarToolBase* ToolBarItem3;
    wxMenuItem* MenuItem14;
    wxMenuItem* MenuItem15;
    wxMenuItem* MenuItem13;
    wxToolBarToolBase* ToolBarItem6;
    wxMenuItem* MenuItem12;
    wxToolBarToolBase* ToolBarItem1;
    wxStatusBar* StatusBar1;
    wxToolBarToolBase* ToolBarItem5;
    wxListCtrl* lstFiles;
    wxToolBarToolBase* ToolBarItem8;
    wxMenuBar* MenuBar1;
    wxToolBarToolBase* ToolBarItem2;
    wxToolBarToolBase* ToolBarItem7;
    //*)

protected:

    //(*Identifiers(frmMain)
    static const long ID_LISTCTRL1;
    static const long ID_MENUITEM15;
    static const long ID_MENUITEM2;
    static const long ID_MENUITEM1;
    static const long ID_MENUITEM3;
    static const long ID_MENUITEM4;
    static const long ID_MENUITEM6;
    static const long ID_MENUITEM7;
    static const long ID_MENUITEM8;
    static const long ID_MENUITEM10;
    static const long ID_MENUITEM11;
    static const long ID_MENUITEM9;
    static const long ID_STATUSBAR1;
    static const long ID_TOOLBARITEM8;
    static const long ID_TOOLBARITEM1;
    static const long ID_TOOLBARITEM2;
    static const long ID_TOOLBARITEM3;
    static const long ID_TOOLBARITEM4;
    static const long ID_TOOLBARITEM5;
    static const long ID_TOOLBARITEM6;
    static const long ID_TOOLBARITEM7;
    static const long ID_TOOLBAR1;
    static const long ID_MENUITEM14;
    static const long ID_MENUITEM5;
    static const long ID_MENUITEM12;
    static const long ID_MENUITEM13;
    //*)

private:

    //(*Handlers(frmMain)
    void mnuAddFiles(wxCommandEvent& event);
    void mnuExit(wxCommandEvent& event);
    void mnuClearList(wxCommandEvent& event);
    void mnuRemoveFiles(wxCommandEvent& event);
    void mnuLameOptions(wxCommandEvent& event);
    void mnuEncode(wxCommandEvent& event);
    void mnuDecode(wxCommandEvent& event);
    void OnlstFilesClick(wxListEvent& event);
    void OnlstFilesItemRClick(wxListEvent& event);
    void mnuAbout(wxCommandEvent& event);
    void mnuLameWebsite(wxCommandEvent& event);
    void mnuWxLameWebsite(wxCommandEvent& event);
    void mnuAddDirectory(wxCommandEvent& event);
    //*)

    void updateStatusBar();
    void updateDisabledControls();
    void loadResources();
    ConfigBase *configBase;

    DECLARE_EVENT_TABLE()
};

#endif