#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int year;
	cin>>year;
	year = fabs(year);
	if (year%400==0 
	&& year%4 ==0 
	||year%100)
      {
	  cout<<"����";
      }
	else{
	  cout<<"��������"; 
	} 
	return 0;
 } 
