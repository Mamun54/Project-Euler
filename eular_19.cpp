//#include <iostream>
//using namespace std;
//
//int main()
//{
//	unsigned int day_of_week;
//	unsigned int month;
//	unsigned int year;
//	unsigned int increase;
//	unsigned int sundays;
//
//	day_of_week = 1;
//	month = 1;
//	year = 1900;
//	increase = 0;
//	sundays = 0;
//
//	while(year <= 2000)
//	{
//		switch(month)
//		{
//		case 1:
//			increase = 31;
//			break;
//		case 2:
//			increase = year%4==0?29:28;
//			break;
//		case 3:
//			increase = 31;
//			break;
//		case 4:
//			increase = 30;
//			break;
//		case 5:
//			increase = 31;
//			break;
//		case 6:
//			increase = 30;
//			break;
//		case 7:
//			increase = 31;
//			break;
//		case 8:
//			increase = 31;
//			break;
//		case 9:
//			increase = 30;
//			break;
//		case 10:
//			increase = 31;
//			break;
//		case 11:
//			increase = 30;
//			break;
//		case 12:
//			increase = 31;
//			break;
//		}
//
//		day_of_week = (day_of_week + increase) % 7;
//
//		if(year >= 1901 && day_of_week == 0)
//		{
//			cout << "1/" << month << "/" << year << " was a Sunday." << endl;
//			sundays++;
//		}
//
//		if(month == 12)
//		{
//			year++;
//			month = 1;
//		}
//		else
//			month++;
//	}
//
//	cout << "Total Sundays Between 1/1/1901 & 12/31/2000: " << sundays << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//    int flag;   // leap year
//    int day = 2, sum = 0;
//    for(int year = 1901; year <= 2000; year++)
//    {
//        flag = 0;
//        if(year % 100 == 0)
//        {
//            if(year % 400 == 0) flag = 1;
//        }
//        else
//        {
//            if(year % 4 == 0) flag = 1;
//        }
//        for(int month = 0; month < 12; month++)
//        {
//            day += days[month];
//            if(month == 1 && flag == 1) day += 1;
//            day = day % 7;
//            if(day == 6) sum++;
//        }
//    }
//    cout << sum;
//}

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int day = 3;
    int num_of_sun=0;
    for (int counter = 1901; counter<=2000; counter++)
    {
        cout <<counter<<" starts on "<<day<<endl;
        if (counter%4 == 0)
        {
            if (day == 1) num_of_sun = num_of_sun + 3;
            else if (day == 4 || day ==5 || day == 6 ) num_of_sun = num_of_sun + 2;
            else num_of_sun = num_of_sun + 1;
            day = day + 2;
        }
        else
        {
            if (day == 1 || day == 2 || day ==3) num_of_sun = num_of_sun + 2;
            else if(day == 5) num_of_sun = num_of_sun + 3;
            else num_of_sun = num_of_sun + 1;
            day = day + 1;
        }
        if (day==8) day = 1;
        if (day==9) day = 2;
    }
    cout << num_of_sun;
    return (0);
}
