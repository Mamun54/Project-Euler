#include<bits/stdc++.h>
using namespace std;



int main()


{



    string temp="1";
    string  s;

    int k=2;
    int result;




    for(int i=64; i<=64; i++)
    {
        s="";

        int carry=0;

        for(int j=temp.length()-1; j>=0; j--)
        {
            int res=k*(temp[j]-'0')+carry;

            carry=res/10;

            s=char(res%10+'0')+s;





        }

        if(carry)
        {
            stringstream out;
            out<<carry;
            s=out.str()+s;
        }

        temp=s;



    }

    int call;
    result=0;



    for(int l=0; l<=temp.length()-1; l++)
    {
        call=0;
        call=(temp[l]-'0');
        result+=call;

    }
    cout<<result;


}
