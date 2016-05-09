#include<bits/stdc++.h>
using namespace std;
int fibo(int number)
{
   int n=number;
   int fn;


    if(n==0||n==1)
    return 1;




   fn =fibo(n-1)+fibo(n-2);

   return fn;
}

int main()
{
    int n;


    cout<<"enter a number";
    cin>>n;


for(int i=1;i<=n;i++){

   cout<< fibo(i)<<' ';

}

}
