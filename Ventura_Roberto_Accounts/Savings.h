#ifndef SAVINGS_H
#define SAVINGS_H

#include "BankAccount.h"

class Savings: public BankAccount
{
    private:
        bool isActive;
    public:
        Savings();
        Savings(float,int);
        void makeDeposit(float);
        void makeWithdraw(float);
        void monthlyProc();
};


#endif /* SAVINGS_H */

