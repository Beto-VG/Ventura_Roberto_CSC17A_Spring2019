/*
Name: Roberto Ventura
Date: 3/6/19
Class: CSC-17A 
*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void total(float, int);

int main(int argc, char** argv) 
{
    
    int weight;
    int miles;
    float rate;
    const float rateA = 1.75, rateB = 2.95, rateC = 3.55, rateD = 4.95;
    
    cout<<"Enter weight (in ounces - max: 1800): ";
    cin>>weight;

    if (weight<=0 || weight>1800)
    {
        cout<<"Weight out of range program terminating";
        return 0;
    }

    else if (weight>0 && weight<=60 )
    {
        rate = rateA;
    }

    else if (weight>60 && weight<=120)
    {
        rate = rateB;
    }
    else if (weight>120 && weight<=400)
    {
        rate = rateC;
    }
    
    else if(weight>400 && weight<=1800)
    {
        rate = rateD;
    }
    
    cout<<"Enter miles shipping (max: 3500): ";
    cin>>miles;
    
    if (miles<=0 || miles>3500)
    {
        cout<<"Shipping distance is out of range. Program terminating"<<endl;
        return 0;
    }
    
    total(rate,miles);
                
    return 0;
}

void total(float rate , int miles)
{
    float charges;
    charges = rate * ceil( miles / 525.0f );
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your total is $"<<charges<<endl;
}