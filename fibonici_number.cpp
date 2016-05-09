#include<bits/stdc++.h>
using namespace std;
string add_fibo(string t1,string t2)
{
    string temp;
    int look=0;


    if (t1.size() > t2.size())
    {
        for (int i=t2.size(); i < t1.size(); i++)
            t2.insert(t2.begin(), +'0');

    }


    if (t2.size() > t1.size())
    {
        for (int i=t1.size(); i < t2.size(); i++)
            t1.insert(t1.begin(), +'0');


    }





     int res;
     int carry=0;
     temp="";

    for(int i=t2.length()-1; i>=0; i--)
    {



        res=(t1[i]-'0'+t2[i]-'0'+ carry)%10;

        carry=(t1[i]-'0'+t2[i]-'0'+ carry)/10;



        temp=char(res+'0')+temp;




    }

    if(carry!=0)
    {
        temp.insert(temp.begin(), carry+'0');
    }

   string roll=temp;
   temp.clear();
   carry=0;



    return roll;

}


int main()
{
    string s1="1";
    string s2="1";



    int i=1;
    while(s1.size()<25)
    {

        string te=add_fibo(s1,s2);

        s1=s2;
        s2=te;
        cout<<te<<endl;
        i++;
    }

     cout<<"the output is"<<i<<endl;
}
