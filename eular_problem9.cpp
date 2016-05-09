#include<bits/stdc++.h>
using namespace std;

/**..................a<b<c .............a+b+c=1000 **/
int main()
{

  int limit =1000;


  int a,b,c;

  b=1;
  c=999;
  bool me=true;
  int x=999;
long long sum=0;

while(me){
     b=1;
     c=--x;

  while(b<c)
  {
      a=limit-(b+c);
      if(pow(a,2)+pow(b,2)==pow(c,2))
      {
          cout<<"the require value is";
          cout<<a<<' '<<b<<' '<<c<<endl;
          sum=a*b*c;
          cout<<sum<<endl;
          me=false;
          break;
      }
      b++;
      c--;
  }
}






}

