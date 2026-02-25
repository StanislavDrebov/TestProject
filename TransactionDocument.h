#pragma once

#include <afxwin.h> // MFC core and standard components

class CTransactionDocument : public CDocument
{
protected:
    // Create from serialization only
    CTransactionDocument() {} 

public:
    DECLARE_DYNCREATE(CTransactionDocument)

    // Attributes
    // e.g., information about transactions

    // Operations
    void AddTransaction(const CString& transactionDetails);
    void RemoveTransaction(int transactionID);

    // Overrides
    virtual BOOL OnNewDocument();
    virtual void Serialize(CArchive& ar);
    // Document commands

protected:
    virtual ~CTransactionDocument();
    DECLARE_MESSAGE_MAP()
};