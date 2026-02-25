#include <windows.h>  // For PostMessage and other Win32 API functions

class BankSyncWorkerThread {
public:
    BankSyncWorkerThread(HWND hwnd) : hWnd(hwnd) {}

    void Start() {
        // Create the thread
        CreateThread(NULL, 0, &BankSyncWorkerThread::ThreadProc, this, 0, NULL);
    }

private:
    HWND hWnd;

    static DWORD WINAPI ThreadProc(LPVOID lpParam) {
        BankSyncWorkerThread* pThis = static_cast<BankSyncWorkerThread*>(lpParam);
        // Perform synchronization tasks
        // ... (your synchronous operations go here)

        // Update UI safely using PostMessage
        PostMessage(pThis->hWnd, WM_USER + 1, 0, 0);
        return 0;
    }
};
