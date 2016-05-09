
#include<bits/stdc++.h>
using namespace std;

int isprime(int get)

{
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
    int num=2;
    int counter=0;

    while(1)

    {
        int get=isprime(num);
        if(get==1)
        {
            counter=counter+1;
        }

        if(counter==10001)
        {


        cout<<"the 10001 th prime number"<<num;


        break;
        }
        num++;
    }

}
