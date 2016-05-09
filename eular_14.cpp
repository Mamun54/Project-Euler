#include<bits/stdc++.h>
using namespace std;


int main()
{

int number;
cout<<"Enter the number:";
cin>>number;

int counter=1;

cout<<number<<"->";
while(number>1)
{

    if(number%2!=0)
    number=3*number+1;

    else
    number=number/2;


    cout<<number<<"->"<<ends;
    ++counter;
}
cout<<"the total counter is:"<<counter<<endl;




}
