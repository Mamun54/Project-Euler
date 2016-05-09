#include<bits/stdc++.h>
using namespace std;




int main()
{

    string str="3628800";
    string result="";
    ///////////////////////////////////////////
    string temp;
    string met;

    int carry;
    int len,res;



    string boro=str;
    string coto=result;



    for(int i=0; i<362800; i++)
    {







        len=boro.length()-1;



        carry=0;

        for(int j=coto.length()-1; j>=0; j--,len--)
        {
            res=(coto[j]-'0')+(boro[len]-'0')+carry;

            temp.push_back((res%10)+'0');

            carry=res/10;


        }

        while(len>=0)
        {


            res= (boro[len]-'0')+carry;

            temp.push_back((res%10)+'0');

            carry=res/10;

            len--;
        }


        if(carry!=0)
            temp.push_back(carry+'0');




        met=temp;
        temp.clear();
        reverse(met.begin(),met.end());
        //////////////////////////////////////////

        result=met;

        // result.push_back(met+'0');
        met.clear();

        boro=result;
        coto=str;

        cout<<result<<endl;

    }





}






