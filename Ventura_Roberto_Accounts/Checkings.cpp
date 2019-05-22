#include "Checkings.h"

Checkings::Checkings():BankAccount()
{
    
}

Checkings::Checkings(float x,int y):BankAccount(x,y)
{
    
}

void Checkings::makeWithdraw(float w)
{
    int temp = this->balance-w;
    
    if (temp<0)
    {
        this->balance-10.0;
    }
    else
    {
        BankAccount::makeWithdraw(w);
    }
}

void Checkings::monthlyProc()
{
    this->monChgs+=5.00;
    this->monChgs+= (.50*this->numWithdraw);
    BankAccount::monthlyProc();
}