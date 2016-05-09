#include<bits/stdc++.h>
using namespace std;


int main()
{


/*int gridSize = 20;
long long  path =1;

for(int i=0 ; i <gridSize ;i++)
{
 path *= 2*gridSize-i;
path /= (i+1);
 cout<<path<<endl;
 }
*/


public long solve() { long right[] = {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; long current[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; for(int x=0;x<20;x++) { for(int y = 0;y<21;y++) { if(y==0) { current[y] = 1; } else { current[y] = current[y-1] + right[y]; } } right = current; } return current[20]; }
}



