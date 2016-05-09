#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double squre_sum=0;
    long long ans=0;
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    squre_sum=(double)(n*(n+1)*(2*n+1))/6;
    cout<<squre_sum<<endl;
    double get1=squre_sum;

      long double sum_squre=0;
      sum_squre=(double)(n*(n+1))/2;
      cout<<sum_squre<<endl;
       long long get2=(sum_squre*sum_squre);
      cout<<get2<<endl;


       ans=(double) (get2-get1);
      cout<<ans;





}


