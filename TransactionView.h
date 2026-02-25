#pragma once
#include <afxwin.h>
#include <afxlistctrl.h>

class CTransactionView : public CView
{
protected:
    CListCtrl m_TransactionListCtrl;

    DECLARE_DYNCREATE(CTransactionView)

public:
    CTransactionView() {}

protected:
    virtual void OnInitialUpdate()
    {
        CView::OnInitialUpdate();

        // Set the style for the list control
        m_TransactionListCtrl.Create(WS_CHILD | WS_VISIBLE | LVS_REPORT, rectDefault, this, IDC_LIST_TRANSACTIONS);

        // Add columns to the list control
        m_TransactionListCtrl.InsertColumn(0, _T("Transaction ID"), LVCFMT_LEFT, 100);
        m_TransactionListCtrl.InsertColumn(1, _T("Amount"), LVCFMT_LEFT, 100);
        m_TransactionListCtrl.InsertColumn(2, _T("Date"), LVCFMT_LEFT, 100);
        
        // Load and display transactions (this will need your transaction data logic)
        LoadTransactions();
    }

    void LoadTransactions()
    {
        // Here, you'd load your transaction data into the list control
        // For example, adding static data for demonstration purposes
        m_TransactionListCtrl.InsertItem(0, _T("1"));
        m_TransactionListCtrl.SetItemText(0, 1, _T("100.00"));
        m_TransactionListCtrl.SetItemText(0, 2, _T("2026-02-25"));

        // Additional transactions would be added here
    }

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CTransactionView, CView)
END_MESSAGE_MAP()