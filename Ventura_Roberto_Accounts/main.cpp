
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Savings.h"
#include "Checkings.h"

using namespace std;

int main(int argc, char** argv) 
{
    srand(static_cast<unsigned int>(time(0)));
    
    char answer;
    float money;
    int num=rand()%99999+10000;
    bool quit=false;
    char option;
    int counter=0;
    
    cout<<"What account will you be opening today, "<<endl;
    cout<<"checkings or savings (1 for checkings or 2 for savings): ";
    cin>>answer;
    
    while(answer !=49 && answer!=50)
    {
        cout<<"Invalid Choice, try again: ";
        cin>>answer;
    }
    
    cout<<"How much money is going into your account: ";
    cin>>money;
    
    if(answer==49)
    {
        Checkings user(money,num);
        
        while(quit==false)
        {
            cout<<endl;
            cout<<"Your Balance: "<<user.getBalance()<<endl;
            cout<<"What do you want to do? "<<endl;
            cout<<"(1) Make a Deposit"<<endl;
            cout<<"(2) Make a Withdrawal"<<endl;
            cout<<"(3) Quit ATM"<<endl;
            cout<<"Enter Option: ";
            cin>>option;
            
            while(answer !=49 && answer!=50 && answer!=51)
            {
                cout<<"Invalid Choice, try again: ";
                cin>>option;
            }
            
            switch(option)
            {
                case 49:
                {
                    cout<<"How much money are you going to deposit: ";
                    cin>>money;
                    user.makeDeposit(money);
                    counter++;
                    
                    //Simulate a month has gone by
                    if(counter==30)
                    {
                        user.monthlyProc();
                    }
                    
                    break;
                }
                case 50:
                {
                    cout<<"How much money are you going to withdraw: ";
                    cin>>money;
                    user.makeWithdraw(money);
                    counter++;
                    
                    //Simulate a month has gone by
                    if(counter==30)
                    {
                        user.monthlyProc();
                    }
                    break;
                }
                case 51:
                {
                    quit=true;
                }
            }
        }
    }
    else
    {
        Savings user(money,num);
        
        while(quit==false)
        {
            cout<<endl;
            cout<<"Your Balance: "<<user.getBalance()<<endl;
            cout<<"What do you want to do? "<<endl;
            cout<<"(1) Make a Deposit"<<endl;
            cout<<"(2) Make a Withdrawal"<<endl;
            cout<<"(3) Quit ATM"<<endl;
            cout<<"Enter Option: ";
            cin>>option;
            
            while(answer !=49 && answer!=50 && answer!=51)
            {
                cout<<"Invalid Choice, try again: ";
                cin>>option;
            }
            
            switch(option)
            {
                case 49:
                {
                    cout<<"How much money are you going to deposit: ";
                    cin>>money;
                    user.makeDeposit(money);
                    counter++;
                    
                    //Simulate a month has gone by
                    if(counter==30)
                    {
                        user.monthlyProc();
                    }
                    break;
                }
                case 50:
                {
                    cout<<"How much money are you going to withdraw: ";
                    cin>>money;
                    user.makeWithdraw(money);
                    counter++;
                    
                    //Simulate a month has gone by
                    if(counter==30)
                    {
                        user.monthlyProc();
                    }
                    break;
                }
                case 51:
                {
                    quit=true;
                }
            }
        }
    }
    
    return 0;
}

