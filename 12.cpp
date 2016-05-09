#include<bits/stdc++.h>
using namespace std;



//int reading(int num)
//{
//
//    int cont=0;
//    int get=num;
//    int i=num;
//
//    while(i>0)
//    {
//
//        if(get%i==0)
//        {
//
//            cont++;
//
//
//        }
//
//
//
//
//
//        if(cont==5)
//        {
//            return num;
//            break;
//
//
//        }
//
//
//
//    }
//
//
//}
//
//
//
//int main()
//{
//
//    int counter=0;
//    int number;
//    int take=0;
//
//
//
//    cout<<"Enter the number:";
//    cin>>number;
//
//
//
//
//
//
//
//    int get=number*(number+1)/2;
//
//    cout<<get<<endl;
//
//    take=reading(get);
//
//    cout<<take<<endl;
//
//
//
//
//}



//int get_triangular(int n)
//{
//    int x=n;
//
//    x=x*(x+1)/2;
//
//    return x;
//}
//
//
//int get_counter(int m)
//{
//    int get=m;
//    int cnt=0;
//
//    for(int i=1; i<=m; i++)
//    {
//        if(m%i==0)
//        {
//            cnt++;
//        }
//
//    }
//    return cnt;
//}
//
//
//int main()
//{
//    int number;
//    int get;
//
//    while(1)
//    {
//
//
//    cin>>number;
//
//
//    int tri_angular=get_triangular(number);
//    int counter=get_counter(tri_angular);
//    cout<<counter<<endl;
//
//    }
//}




int amt_of_factors(long n)
{
	int amt = 2, i;

	for(i=2;  i*i <= n; i++)
	if (n % i == 0)
	amt += 2;

	return amt;
}

int main(void) {
	long tri;
	int i = 1, j, amt;

	do {
		tri = i * (i + 1) / 2;
		amt = amt_of_factors(tri);
		i++;
	} while(amt < 500);

	printf("%ld\n", tri);

	return 0;
}

