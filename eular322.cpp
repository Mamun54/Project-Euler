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


 int prime=2;
 long long unsigned int number;
 cout<<"enter the number:";
 cin>>number;

 cout<<endl;

 int max=0;


 while(number!=1)
 {

 if(isprime(prime)&&(number%prime==0))
 {

     max=prime;

     number=number/prime;

 cout<<prime<<" "<<number<<endl;


 }
 else{

 prime++;

 }

 }
 cout<<"the maximum factrorization is:"<<max<<endl;








}

