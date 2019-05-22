#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
protected: 
    float balance;
    int accNumber;
    int numDeposits;
    int numWithdraw;
    float monChgs;
public:
    BankAccount(); 
    BankAccount(float, int);
    void setBalance(float);
    void setAccNumber(int);
    float getBalance();
    virtual void makeDeposit(float);
    virtual void makeWithdraw(float);
    virtual void monthlyProc();
};



#endif /* BANKACCOUNT_H */

