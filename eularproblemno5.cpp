#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int i,j,k;


  int num=2025;   //which is divide by 1....10


  int counter=0;

  while(1)
  {
      counter=0;
      for (i=11;i<=20;i++)
      {




          if(num%i!=0)
          {
               break;
          }

         counter=counter+1;

      }
        if(counter==10){
          cout<<"the desiarve number is:"<<num<<endl;
          break;
        }
          num=num+1;
  }



}
