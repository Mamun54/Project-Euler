#include<bits/stdc++.h>
using namespace std;

int main()
{


    int number ,result=0;
    int temp_result;



    for(int i=2;i<355000;i++)
    {
         number=i;
         temp_result=0;

        while(number>0)
        {

            int temp=number%10;

            number=number/10;


            int get=temp;


            for(int j=1;j<5;j++)//here 4 because the number is already here
            {
                get=get*temp;
            }

            temp_result=temp_result+get;



        }
        if(temp_result==i)
        {
            cout<<temp_result<<endl;
            result+=i;
        }





    }
    cout<<"the total result is :"<<result<<endl;





}
