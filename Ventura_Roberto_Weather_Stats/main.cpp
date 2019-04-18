#include <iostream>

using namespace std;

struct Weather
{
    float rainfall;
    float hightemp;
    float lowtemp;
    float avgtemp;
};

int main(int argc, char** argv) 
{
    const int months = 3;
    Weather w[months];
    float tRain = 0.0;
    float avgmrain;
    float tAvgs = 0.0;
    float yAvg;
    float lowest;
    float highest;
    int lowM;
    int highM;
   
    for (int index = 0;index<months; index++)
    {
        cout<<"Enter data for Month "<<(index+1)<<endl;
        
        cout<<"Enter Rainfall: ";
        cin>>w[index].rainfall;
        while(w[index].rainfall<0)
        {
            cout<<"Rainfall cannot be negative try again ";
            cin>>w[index].rainfall;
        }
        
        cout<<"Enter High Temperature: ";
        cin>>w[index].hightemp;
        while (w[index].hightemp<-140 || w[index].hightemp>140)
        {
            cout<<"Temperature is not within valid range Try Again ";
             cin>>w[index].hightemp;
        }
        
        cout<<"Enter Low Temperature: ";
        cin>>w[index].lowtemp;
        while (w[index].lowtemp<-140 || w[index].lowtemp>140)
        {
            cout<<"Temperature is not within valid range Try Again ";
            cin>>w[index].lowtemp;
        }
        
        cout<<endl;
        
        w[index].avgtemp = (w[index].hightemp + w[index].lowtemp)/2.0;
    }
    
    lowest=w[0].lowtemp;
    highest=w[0].hightemp;
    lowM=1;
    highM=1;
    
    for (int index = 0;index<months; index++)
    {
        tRain = tRain + w[index].rainfall;
        tAvgs = tAvgs+w[index].avgtemp ;
        
        if (w[index].hightemp > highest)
        {
            highest = w[index].hightemp;
            highM = index + 1;
        }
        
        if (w[index].lowtemp<lowest)
        {
            lowest = w[index].lowtemp;
            lowM = index+1;
        }
    }    
    
    avgmrain = tRain / months;
    yAvg = tAvgs / months;
    
    cout<<"Total Rainfall: "<<tRain<<endl;
    cout<<"Average Monthly Rain: "<<avgmrain<<endl;
    cout<<"Average Monthly Average Temperature: "<<yAvg<<endl;
    cout<<"Lowest Temperature: "<<lowest<<"(Month "<<lowM<<")"<<endl;
    cout<<"Highest Temperature: "<<highest<<"(Month "<<highM<<")"<<endl;
            
    return 0;
}





