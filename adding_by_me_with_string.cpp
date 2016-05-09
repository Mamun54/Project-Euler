#include<bits/stdc++.h>
using namespace std;


string addvalue(string a,string b)
{
    int res;
    int carry=0;


    string temp;
    int x,y;


//    int length1=a.length();
//    int length2=b.length();
//
//
//    if(length1>length2)
//    {
//        boro=a;
//    }
//    else{
//
//       boro =b;
//
//
//    }
//
//
//    if(length1<length2)
//    {
//        coto=a;
//    }
//    else{
//
//       coto =b;
//
//
//    }

    string boro = a.length()>b.length()? a: b;
    string coto = a.length()>b.length()? b: a;

  int j=boro.length()-1;





     carry=0;

    for(int i=coto.length()-1;i>=0;i--,j--){

        res = (boro[j]-'0')+(coto[i]-'0')+carry;
        temp.push_back((res%10)+'0');
        carry = res/10;
    }

    while(j>=0)
    {
        res = (boro[j]-'0')+carry;
        temp.push_back((res%10)+'0');
        carry = res/10;
        j--;
    }

    if(carry!=0)

        temp.push_back(carry+'0');


    reverse(temp.begin(),temp.end());


    return temp;

}



int main()
{
    cout<<addvalue("17","13");
}
