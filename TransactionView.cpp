// TransactionView.cpp

#include "TransactionView.h"
#include <afxcmn.h> // For CListCtrl

// Implementation of CListCtrl-based view with color-coding

void CTransactionView::OnInitialUpdate() {
    CListCtrl& listCtrl = GetListCtrl();
    listCtrl.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
    PopulateListCtrl();
}

void CTransactionView::PopulateListCtrl() {
    CListCtrl& listCtrl = GetListCtrl();
    listCtrl.InsertColumn(0, _T("ID"), LVCFMT_LEFT, 50);
    listCtrl.InsertColumn(1, _T("Date"), LVCFMT_LEFT, 100);
    listCtrl.InsertColumn(2, _T("Amount"), LVCFMT_RIGHT, 100);

    // Add sample data and color-coding
    for (int i = 0; i < 10; ++i) {
        int index = listCtrl.InsertItem(i, std::to_wstring(i).c_str());
        listCtrl.SetItemText(index, 1, _T("2026-02-25"));
        listCtrl.SetItemText(index, 2, std::to_wstring((i + 1) * 10).c_str());

        // Color-coding
        if (i % 2 == 0) {
            listCtrl.SetItemBkColor(index, RGB(255, 255, 255)); // White
        } else {
            listCtrl.SetItemBkColor(index, RGB(200, 200, 255)); // Light blue
        }
    }
}