#include<bits/stdc++.h>
using namespace std;

int check_prime(long long value)
{
    long long  get=value;



    int i=2;
    while(i*i<=get)
    {
        if(get%i==0)
        {
            return 0;
        }
        i++;
    }
    return 1;

}




int main()
{
    int x=2;

    long long sum=2;

    int tre;
   long long l;


    for(l=3;l<=2000000;l=l+2)
    {
       tre= check_prime(l);

       if(tre==1)
       {
           sum=sum+l;
       }

    }
    cout<<"the tatal value:"<<sum<<endl;
}
