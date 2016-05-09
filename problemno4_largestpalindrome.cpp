
#include<bits/stdc++.h>
using namespace std;

long  check_palindome(long long   x)
{

    long long num=x;

    long long  dig,rev;
     rev=0;

    while(num>0)
    {
      dig = num % 10;
      rev = rev * 10 + dig;
      num = num / 10;

   }
 if(rev==num)
 {
     return num;
 }



}


int main()
{


  int i,j,k,l;

  long  long max=9009;


for(i=999;i>100;i--)
{
    for(j=999;j>=i;j--)
    {
        long long get=(i*j);

        long long now=check_palindome(get);


        if(get>max&&now==get)
        {


            max=get;
            cout<<i<<' '<<j<<endl;

        }

    }

}
cout<<"the maximum number:"<<max<<endl;




}
