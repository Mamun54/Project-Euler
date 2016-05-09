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

string multiple(string boro,string choto)
{


//   string result ="0";
//   string temp;
//
//   int x=0;
//
//
//   int rest,carry;
//
//
//
//   for( int j=small.length()-1;j>=0;j--)
//   {
//
//
//
//     for(int k=0;k<small.length()-1-j;k++)
//
//        temp.push_back('0');
//
//
//        carry=0;
//
//
//
//       for(int i=big.length()-1;i>=0;i--)
//       {
//           rest=(big[i]-'0')*(small[j]-'0')+carry;
//
//          temp.push_back((rest%10)+'0');
//          carry = rest/10;
//       }
//
//
//
//           if(carry!=0)
//           temp.push_back(carry+'0');
//
//
//           reverse(temp.begin(),temp.end());
//
//       // protiva value gun korsey  abong ta gog korbe result ar satey
//       //the n   result hobe  prothom  value ta
//
//
//           result=addvalue(result,temp);
//
// cout<<result<<endl;
//
//
//
//   }
//
//   return result;
//

    string result="0";
    for(int i=choto.length()-1; i>=0; i--)
    {
         string temp;

        for(int j=0; j<choto.length()-1-i; j++)
            temp.push_back('0');
        int carry = 0;
        int res;

        for(int j=boro.length()-1; j>=0; j--)
        {
           res = (boro[j]-'0')*(choto[i]-'0')+carry;
           temp.push_back((res%10)+'0');
           carry = res/10;

        }

        if(carry!=0)
         temp.push_back(carry+'0');


        reverse(temp.begin(), temp.end());
        result = addvalue(result, temp);
        cout<<result<<endl;
    }

    return result;


}


int main()
{

    cout<<addvalue("362680","362680");



}
