#include<bits/stdc++.h>
using namespace std;

bool prime(int number)
{
    int n=number;

    int i=2;

    if(number<2)
        return false;

    while(i*i<=n)
    {
        if(n%i==0)
        {
            return false;

        }

        i++;
    }

    return true;
}

bool check_it(int number)
{
    int n=number;

    while(n>0)
    {
        if(prime(n))

            n=n/10;

        else

            return false;
    }

    int temp=10;

    while(number%temp!=number)
    {
        if(prime(number%temp))
            temp=temp*10;
        else
            return false;
    }
    return true;
}

//bool check_property(int a){
//	int copy=a;
//	while (a>0){
//		if (!is_prime(a))
//			return false;
//            a/=10;
//
//
//	}
//	int test=10;
//	while (copy%test!=copy){
//		if (!is_prime(copy%test))
//			return false;
//		test*=10;
//	}
//	return true;
//}





int main()
{


    int counter=0;

    long long sum=0;


    for(int j=11;  counter<=11; j+=2)
    {
        if(check_it(j))
        {

            counter++;
            cout<<j<<endl;




        }
    }




}
