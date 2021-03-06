//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: UI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_LANGUAGESERVER_UI_BASE_CLASSES_H
#define _CODELITE_LANGUAGESERVER_UI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/statline.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/dataview.h>
#include "clThemedListCtrl.h"
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class LanguageServerSettingsDlgBase : public wxDialog
{
protected:
    wxCheckBox* m_checkBoxEnable;
    wxStaticText* m_staticText100;
    wxFilePickerCtrl* m_filePickerNodeJS;
    wxStaticLine* m_staticLine102;
    wxStaticText* m_staticText105;
    wxNotebook* m_notebook;
    wxButton* m_buttonNew;
    wxButton* m_buttonDelete;
    wxStdDialogButtonSizer* m_stdBtnSizer4;
    wxButton* m_button6;
    wxButton* m_button8;

protected:
    virtual void OnAddServer(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteLSP(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteLSPUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxEnable() { return m_checkBoxEnable; }
    wxStaticText* GetStaticText100() { return m_staticText100; }
    wxFilePickerCtrl* GetFilePickerNodeJS() { return m_filePickerNodeJS; }
    wxStaticLine* GetStaticLine102() { return m_staticLine102; }
    wxStaticText* GetStaticText105() { return m_staticText105; }
    wxNotebook* GetNotebook() { return m_notebook; }
    wxButton* GetButtonNew() { return m_buttonNew; }
    wxButton* GetButtonDelete() { return m_buttonDelete; }
    LanguageServerSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY,
                                  const wxString& title = _("Language Server Settings"),
                                  const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                                  long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~LanguageServerSettingsDlgBase();
};

class LanguageServerPageBase : public wxPanel
{
protected:
    wxCheckBox* m_checkBoxShowConsole;
    wxCheckBox* m_checkBoxEnabled;
    wxStaticText* m_staticText453;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticText495;
    wxFilePickerCtrl* m_filePickerExe;
    wxStaticText* m_staticText537;
    wxTextCtrl* m_textCtrlArgs;
    wxStaticText* m_staticText579;
    wxDirPickerCtrl* m_dirPickerWorkingDir;
    wxStaticText* m_staticText6311;
    clThemedListCtrl* m_dvListCtrl;

protected:
public:
    wxCheckBox* GetCheckBoxShowConsole() { return m_checkBoxShowConsole; }
    wxCheckBox* GetCheckBoxEnabled() { return m_checkBoxEnabled; }
    wxStaticText* GetStaticText453() { return m_staticText453; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxStaticText* GetStaticText495() { return m_staticText495; }
    wxFilePickerCtrl* GetFilePickerExe() { return m_filePickerExe; }
    wxStaticText* GetStaticText537() { return m_staticText537; }
    wxTextCtrl* GetTextCtrlArgs() { return m_textCtrlArgs; }
    wxStaticText* GetStaticText579() { return m_staticText579; }
    wxDirPickerCtrl* GetDirPickerWorkingDir() { return m_dirPickerWorkingDir; }
    wxStaticText* GetStaticText6311() { return m_staticText6311; }
    clThemedListCtrl* GetDvListCtrl() { return m_dvListCtrl; }
    LanguageServerPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition,
                           const wxSize& size = wxSize(-1, -1), long style = wxTAB_TRAVERSAL);
    virtual ~LanguageServerPageBase();
};

class NewLanguageServerDlgBase : public wxDialog
{
protected:
    wxStdDialogButtonSizer* m_stdBtnSizer37;
    wxButton* m_buttonOK;
    wxButton* m_button41;

protected:
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    NewLanguageServerDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY,
                             const wxString& title = _("New Language Server"), const wxPoint& pos = wxDefaultPosition,
                             const wxSize& size = wxSize(-1, -1),
                             long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~NewLanguageServerDlgBase();
};

#endif
