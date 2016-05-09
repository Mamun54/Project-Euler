//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int main(){
//int i,br,sum=11,a[4][10]={0,3,3,5,4,4,3,5,5,4,0,6,6,8,8,7,7,9,8,8,0,3,6,6,5,5,5,7,6,6,0,13,13,15,14,14,13,15,15,14};
//for(i=1;i<1000;i++)
//{
//    br=i;
//    if(br%100>10 && br%100<20)
//        {sum+=a[1][br%10];
//         br/=100;
//         }
//    else{
//        sum+=a[0][br%10];
//        br/=10;
//        sum+=a[2][br%10];
//        br/=10;
//        }
//        sum+=a[3][br%10];
//        if(i%100==0) sum-=3;
//}
//printf("%d",sum);
//return 0;
//}


//int findLetterCount(){
//	//arrays contain letter counts
//	//    ones: pad, "one", "two", ..., "nine"
//	//    tens: pad, "ten", "twenty", ..., "ninety"
//	//specials: pad, "eleven", "twelve", ..., "nineteen"
//	int ones[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
//	int tens[] = { 0, 3, 6, 6, 5, 5, 5, 7, 6, 6 };
//	int specials[] = { 0, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
//	int i = 1;
//	int count = 0;
//
//	//<10
//	while (i < 10){
//		count += ones[i];
//		i++;
//	}
//
//	count += 3; //"ten"
//	i++;
//
//	//>10 and <20
//	while (i < 20){
//		count += specials[i % 10];
//		i++;
//	}
//
//	//>=20 and <100
//	while (i < 100){
//		if (i % 10 == 0){
//			count += tens[i / 10];
//		}
//
//		if (i % 10 != 0){
//			count += tens[i / 10] + ones[i % 10];
//		}
//		i++;
//	}
//
//	//>=100 and <1000
//	while (i < 1000){
//		if (i % 100 == 0){
//			count += ones[i / 100] + 7; //ones[n] + "hundred"
//		}
//
//		if (i % 100 != 0 && (i - (i / 100 * 100)) < 10){
//			//ones[n] + "hundred" + "and" + ones[k]
//			count += ones[i / 100] + 10 + ones[(i - (i / 100 * 100)) % 10];
//		}
//
//		if (i % 100 != 0 && (i - (i / 100 * 100)) == 10){
//			//ones[n] + "hundred" + "and" + "ten"
//			count += ones[i / 100] + 13;
//
//		}
//
//		if (i % 100 != 0 && (i - (i / 100 * 100)) > 10 && (i - (i / 100 * 100)) < 20){
//			//ones[n] + "hundred" + "and" + specials[k]
//			count += ones[i / 100] + 10 + specials[(i - (i / 100 * 100)) % 10];
//		}
//
//		if (i % 100 != 0 && (i - (i / 100 * 100)) >= 20 && ((i - (i / 100 * 100)) % 10) == 0){
//			//ones[n] + "hundred" + "and" + tens[k]
//			count += ones[i / 100] + 10
//				+ tens[(i - (i / 100 * 100)) / 10];
//		}
//
//		if (i % 100 != 0 && (i - (i / 100 * 100)) >= 20 && ((i - (i / 100 * 100)) % 10) != 0){
//			//ones[n] + "hundred" + "and" + tens[k] + ones[j]
//			count += ones[i / 100] + 10 + tens[(i - (i / 100 * 100)) / 10]
//				+ ones[(i - (i / 100 * 100)) % 10];
//		}
//
//		i++;
//	}
//
//	//1000
//	count += 11; //"one" + "thousand"
//
//	return count;
//}


#include <iostream>
#include <vector>
using namespace std;
int f(int n)
{
    int singles[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 }; //from 0
	int teens[] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 }; //from 10
	int tens[] = { 6, 6, 5, 5, 5, 7, 6, 6 }; // from 20

	if (n < 10)
	{
		return singles[n];
	}
	if (n < 20)
	{
		return teens[n-10];
	}
	if (n < 100)
	{
		return tens[n / 10 - 2] + f(n % 10);
	}
	if (n < 1000)
	{
		if (n % 100 == 0)
		{
			return singles[n / 100] + 7;
		}
		return singles[n/100] + 10 + f(n % 100);
	}
	if (n == 1000)
	{
		return 11;
	}
}

int  main()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		sum += f(i);
	}
	cout << sum << endl;
}

//# include <stdio.h>
//int main()
//{
//    int i,j;
//    int decade;
//    int init_sum = 0;
//    int final_sum = 0;
//    int num_letters[101] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8, 6};
//    num_letters[30] = 6;
//    num_letters[40] = 5;
//    num_letters[50] = 5;
//    num_letters[60] = 5;
//    num_letters[70] = 7;
//    num_letters[80] = 6;
//    num_letters[90] = 6;
//    num_letters[100] = 10;
//    for (i = 21; i < 100; i++)
//    {
//        decade = i - i%10;
//        num_letters[i] = num_letters[decade] + num_letters[i%decade];
//    }
//    for (i = 0; i <= 99; i++) init_sum += num_letters[i];
//    final_sum = init_sum;
//    for (j = 1; j <= 9; j++)
//    {
//        final_sum += init_sum + 100*(10 + num_letters[j]) - 3;
//    }
//    final_sum += 11;
//    printf("%d\n",final_sum);
//
//    return 0;
//}

