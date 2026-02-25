#pragma once

#include <afxwin.h>

class AddTransactionDialog : public CDialog
{
public:
    AddTransactionDialog(CWnd* pParent = nullptr);

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual BOOL OnInitDialog();
    afx_msg void OnBnClickedOk();
    DECLARE_MESSAGE_MAP()

private:
    void ValidateTransactionData();
};

AddTransactionDialog::AddTransactionDialog(CWnd* pParent)
    : CDialog(IDD_ADD_TRANSACTION_DIALOG, pParent)
{
}

void AddTransactionDialog::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    // TODO: Add your specialized code here and/or call the base class
}

BOOL AddTransactionDialog::OnInitDialog()
{
    CDialog::OnInitDialog();
    // TODO: Add your extra initialization here
    return TRUE;
}

void AddTransactionDialog::OnBnClickedOk()
{
    ValidateTransactionData();
    CDialog::OnOK();
}

void AddTransactionDialog::ValidateTransactionData()
{
    // TODO: Add your validation logic here
}