#include"Savings.h"

Savings::Savings():BankAccount()
{
    this->isActive=false;
}

Savings::Savings(float x,int y):BankAccount(x,y)
{
    if(this->balance>=100.0)
    {
        this->isActive=true;
    }
    else
    {
        this->isActive=false;
    }
}

void Savings::makeDeposit(float d) 
{
    BankAccount::makeDeposit(d);
    if (this->balance>=100)
    {
        this->isActive=true;
    }
}

void Savings::makeWithdraw(float w)
{
    if (this->isActive==true)
    {
        BankAccount::makeWithdraw(w);
    }
    
    if(this->balance<100)
    {
        this->isActive=false;
    }
}
        
void Savings::monthlyProc()
{
    if (this->numWithdraw>5)
    {
        int temp = this->numWithdraw - 5;
        this->monChgs = temp;
    }
    BankAccount::monthlyProc();
    if (this->balance<100)
    {
        this->isActive=false;
    }
}