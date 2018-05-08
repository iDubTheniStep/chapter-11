#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void displayarray(double dollars[], int numElemnets)
{
	double total = 0;
	cout << fixed << setprecision(2) << endl;
	for (int sub = 0; sub < numElemnets; sub++)
	{
		cout << "sales for region " << sub + 1 << ": $";
		cout << dollars[sub] << endl;
		total = total + dollars[sub];

	}
	cout << "your total is " << total << endl;
}
int main()
{

	double sales[4] = {0.0};
	double total = 0;
	int answer = 1;


	while (answer == 1)
	{

		for (int sub = 0; sub < 4; sub++)
		{
			cout << "enter sales for region";
			cout << sub + 1 << ": ";
			cin >> sales[sub];
		}
		for (int sub = 0; sub < 4; sub++)
		{
			cout << "sales for region " << sub + 1 << ": $";
			cout << sales[sub] << endl;
			total = total + sales[sub];
		}
		cout << "your total is " << total << endl;
		cout << " do you want to total anything else 1 for yes 2 for no " << endl;
		cin >> answer;
	}

	system("pause");
	return 0;
}
