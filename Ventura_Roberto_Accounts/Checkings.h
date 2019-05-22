#ifndef CHECKINGS_H
#define CHECKINGS_H

#include"BankAccount.h"

class Checkings:public BankAccount
{
    public:
        Checkings();
        Checkings(float,int);
        void makeWithdraw(float);
        void monthlyProc();
};


#endif /* CHECKINGS_H */

