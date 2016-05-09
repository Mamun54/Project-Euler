#include<bits/stdc++.h>
using namespace std;


int factorial(int number)
{
    int facto=1;

    if(number==0 || number==1)
    {
        return 1;

    }

    else if(number>1)
    {
        for(int i=number; i>0; i--)
        {
            facto=facto*i;

        }
        return facto;
    }
}






int main()
{

    long long result=0;
    int fact[100];
    int k=0;

    for(int i=0; i<=10; i++)
    {
        fact[k++]=factorial(i);
        cout<<fact[i]<<endl;
    }

    for (int j= 11; j< 254016; j++)
    {
        int sum=0;

        int n=j;

        while(n>0)
        {
          int  temp=n%10;

            n=n/10;
            sum=sum+ fact[temp];


        }

        if(sum==j)
        {
            result=result+sum;


        }
    }
    cout<<"the result is :"<<result<<endl;
}
