#include<bits/stdc++.h>
using namespace std;

int function(int n)
{
    int singles[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 }; //from 0
    int teens[] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 }; //from 10
    int tens[] = { 6, 6, 5, 5, 5, 7, 6, 6 }; // from 20

    if(n<10)
    {

        return singles[n];

    }


   if(n<20)
    {
        return teens[n%10];
    }


   if(n<100)
     {
         return tens[n/10-2]+function(n%10);
     }

    if(n<1000)
    {
        if(n%100==0)
        {
            return singles[n/100]+7;
        }
        else
        {

         return singles[n/100]+10+function(n%100);

        }
    }
    if(n<10000)
    {

        if(n%1000==0)

        return singles[n/1000]+8;

        else
        return singles[n/1000]+11+function(n%1000);

    }




}




int main()
{
    int sum=0;


    for(int i=1; i<=1000; i++)
    {
        int temp=i;
        sum+=function(temp);
    }


    cout<<"the total result is:"<<sum<<endl;




}

