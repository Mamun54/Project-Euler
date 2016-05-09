#include<bits/stdc++.h>
using namespace std;
int check_prime(int number)
{
    int j=2;

    while(j*j<=number)
    {
        if(number%j==0)
        {
            return 0;
        }
        j++;


    }

    return 1;

}




int main()
{

    int n,k=0;
    int flag=10;
    int temp,temp1,number=0;

    int m=0;

//for(int i=11;i<=10000;i++)
//{
   k=0;
   m=0;
   n=17;

    if(check_prime(n)==1)
    {
        k++;
        m++;


        temp=n%flag;
        if(check_prime(temp)==1)
            k++;



        temp1=n/flag;
        if(check_prime(temp1)==1)
            m++;




        temp=n%(flag*10);

        if(check_prime(temp)==1)
            k++;



        temp1=n/(flag*10);
        if(check_prime(temp1)==1)
            m++;



        temp=n%(flag*100);
        if(check_prime(temp)==1)
            k++;



        temp1=n/(flag*100);
        if(check_prime(temp1)==1)
            m++;




 if (m==k)
 cout<<n<<endl;





}//end of if



}//end of for




