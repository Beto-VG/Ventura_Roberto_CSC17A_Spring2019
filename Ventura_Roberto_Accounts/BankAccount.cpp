#include "BankAccount.h"

BankAccount::BankAccount()
{
    this->setBalance(0.0);
    this->setAccNumber(0);
    this->numDeposits=0;
    this->numWithdraw=0;
    this->monChgs=0.0;
}

BankAccount::BankAccount(float x, int y)
{
    this->setBalance(x);
    this->setAccNumber(y);
    this->numDeposits=0;
    this->numWithdraw=0;
    this->monChgs=0.0;
}

void BankAccount::setBalance(float x)
{
    if(x>0)
    {
        this->balance=x;
    }
    else
    {
        this->balance=0;
    }
}

void BankAccount::setAccNumber(int y)
{
    this->accNumber=y;
}

float BankAccount::getBalance()
{
    return this->balance;
}

void BankAccount::makeDeposit(float d)
{
    this->balance+=d;
    this->numDeposits++;
}

void BankAccount::makeWithdraw(float w)
{
    int check=this->balance-w;
    if(check>0.0)
    {
        this->balance-=w;
        this->numWithdraw++;
    }
}

void BankAccount::monthlyProc()
{
    this->balance-=this->monChgs;
    this->numDeposits=0;
    this->numWithdraw=0;
    this->monChgs=0.0;
}


    
