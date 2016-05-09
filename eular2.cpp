#include<bits/stdc++.h>
using namespace std;


int main()
{
    //for fibonici we know that  f(n)=f(n-1)+f(n-2)



  int x,y,z;

  y=1;
  x=0;

  long long sum=0;

  while(y<=4000000)

  {
      z=x+y;
      x=y;
      y=z;

      if(y%2==0)

      {

          sum=sum+y;
      }


  }

  cout<<sum<<endl;


}
