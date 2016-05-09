#include<bits/stdc++.h>
using namespace std;
string bigSum(string a, string b)
{
    string boro = a.length()>b.length()? a: b;
    string choto = a.length()>b.length()? b: a;
    string temp;
    int j = boro.length()-1;
    int carry = 0;
    for(int i=choto.length()-1; i>=0; i--, j--)
    {
        int res = (boro[j]-'0')+(choto[i]-'0')+carry;
        temp.push_back((res%10)+'0');
        carry = res/10;
    }
    for(; j>=0; j--)
    {
        int res = (boro[j]-'0')+carry;
        temp.push_back((res%10)+'0');
        carry = res/10;
    }
    if(carry!=0)
    temp.push_back(carry+'0');


    reverse(temp.begin(), temp.end());
    return temp;
}
string bigMul(string boro, string choto)
{


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
        result = bigSum(result, temp);
        cout<<result<<endl;
    }

    return result;
}

int main()
{
    cout<<bigMul("123", "25");
}
