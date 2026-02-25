#ifndef BANKSYNCWORKERTHREAD_H
#define BANKSYNCWORKERTHREAD_H

class BankSyncWorkerThread {
public:
    BankSyncWorkerThread();
    ~BankSyncWorkerThread();

    void start();
    void stop();
    void run();

private:
    bool isRunning;
};

#endif // BANKSYNCWORKERTHREAD_H