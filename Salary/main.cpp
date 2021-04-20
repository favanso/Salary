#include <iostream>
#include <string>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	float paymentByDay = 0.01;
	int daysWorked;
	float totalPayment=0;
	int salaryPlus = 2;
	
	
		cout << "How many days did you work this month?" << endl;
		cin >> daysWorked;
		while ((daysWorked < 1) || (daysWorked > 31))
		{
			cout << "Please insert a number between 1 and 31. " << " Please, Re-enter your number. " << endl;
			cin>>daysWorked;
		}
		
		for (int i = 0; i < daysWorked; i++)
			{
				totalPayment += paymentByDay;
				cout << "Your salary for day " << (i + 1) << " are $" << setprecision(4) << paymentByDay << endl;
				//cout << "   " << (i + 1) << "           $";
				//cout << paymentByDay << endl;
				paymentByDay *= salaryPlus;
			}
			
			cout << "Your total salary for this month is $" << setprecision(4) << totalPayment << endl;
		
	return 0;
}