#include<bits/stdc++.h>
using namespace std;


int main()
{

long long num =500;
bool me=true;

int counter,i;

while(me)
{
    counter=0;
    i=1;
    while(counter<=500)
    {
        if(num%i==0)
        {
            counter++;
        }
        if(i>=num)
        {
            break;

        }

        i++;
    }

    num++;
    if(counter==500)
{
    cout<<"the Number is "<<num<<endl;
    me=false;
    break;

}

}


}
