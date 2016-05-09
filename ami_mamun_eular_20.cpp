//#include <stdio.h>
//
//#define MAX 500
//
//int main(){
//int vet[MAX]={0};
//int i,x,y,v,f,sum;
//
//vet[0]=1;
//y=2;
//
//while (y<101){
//  v = 0;
//  for (i=0;i<MAX;i++){
//    x = vet[i]*y + v;
//    v = 0;
//    if (x > 9){
//      f = x % 10;
//      v = x / 10;
//    }
//    else
//      f = x;
//    vet[i] = f;
//  }
//  y++;
//}
//sum=0;
//for (i=MAX-1;i>=0;i--)
//  sum=sum+vet[i];
//printf("%d",sum);
//return 0;
//}



#include <iostream>
#include <string>
#include <sstream>
using namespace std;



int solve(int n)
{
    string s, res = "1";

    int y, carry;



    for(int i = 1; i <= n; i++)
    {
        carry = 0;

        s="";

        for(int j = res.size()-1; j >=0; j--)
        {

            y = i*(res[j]-'0') +carry;
            carry = y / 10;
            s = char(y % 10 + '0') + s;
        }
        if (carry)
        {
            stringstream out;
            out << carry;
            s = out.str() + s;
        }
        res = s;
        cout<<res<<endl;
    }
    y = 0;
    for(int i = 0; i < res.size(); i++)
        y += (res[i]-'0');
    return y;
}







int main()
{
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}
