#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include "getInfo.h"
using namespace std;


getInfo::getInfo()
{
	zero = 0;
	sum = 0;
	
}


getInfo::start()
{
	
	cout << "Please enter the amounts of harvested LEs: ";
	cout << endl;	
	
	for (int i=0; i<4; i++)
	{
	
		cin >> le[i];
		sum += le[i];
	
		if(le[i] == 0)
		{
			zero++;
		}
	
	}	
}



getInfo::computeTotal()
{
	cout << "Please enter your last day's total: ";
	cin >> preTotal;
	
	total = sum + preTotal;
	
	
	
	
	
}












getInfo::display()
{

cout << sum;
cout << endl;
cout << zero;
cout << endl;
cout << total;
cout << endl;
cout << time_t();
	
}
