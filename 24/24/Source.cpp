//Intermediate24.cpp
//Stores monthly rainfall amounts in an array
//Displays the monthly rainfall amounts, the
//total annual rainfall amount, the average rainfall
//amount, the highest rainfall amount, or the lowest
//rainfall amount
//Created/revised by <your name> on <current date>
#include <iostream>
using namespace std;

double rain[] = { 0.0 };
int choice = 0;


void displayMonthly(double rain[], int numElements);
void displayTotal(double rainAmt[], int elements);

int main()
{
	//declare array and variable
	double rainfall[12] = { 0.0 };
	int choice = 0;

	
	//get rainfall amounts
	for (int x = 0; x < 12; x += 1)
	{
		cout << "Enter rainfall for month " 
			<< x + 1 << ": ";
		cin >> rainfall[x];
	} 



	double total = 0.0;
	double avg = 0.0;


	for (int x = 0; x < elements; x += 1)
		total = total + rainAmt[x];
	//end for
	avg = total / elements;
	cout << "Average rainfall: " << avg << endl;
	double highest = rainAmt[0];
	for (int x = 1; x < elements; x += 1)
	if (rainAmt[x] > highest)
		highest = rainAmt[x];
	double lowest = rainAmt[0];
	for (int x = 1; x < elements; x += 1)
	if (rainAmt[x] < lowest)
		lowest = rainAmt[x];
	//end if
	//end for
	cout << "Lowest rainfall: " << lowest << endl;
	//end if
	//end for
	cout << "Highest rainfall: " << highest << endl;
	do
	{

		//display menu and get menu choice
		cout << endl;
		cout << "1  Display monthly amounts" << endl;
		cout << "2  Display total amount" << endl;
		cout << "3  Display average amount" << endl;
		cout << "4  Display highest amount" << endl;
		cout << "5  Display lowest amount" << endl;
		cout << "6  End program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		//call appropriate function or end program
		if (choice == 1)
			displayMonthly(rainfall, 12);
		else if (choice == 2)
			displayTotal(rainfall, 12);
		else if (choice == 3)
			displayAverage(rainfall, 12);
		else if (choice == 4)
			displayHigh(rainfall, 12);
		else if (choice == 5)
			displayLow(rainfall, 12);
		//end if
	} while (choice >= 1 && choice <= 5);

	//system("pause");
	return 0;
}   //end of main function

//*****function definitions*****
void displayMonthly(double rain[], int numElements)
{
	cout << "Monthly rainfall amounts:" << endl;
	for (int x = 0; x < numElements; x += 1)
		cout << rain[x] << endl;
	//end for
}  //end of displayMonthly function

void displayTotal(double rainAmt[], int elements)
{
	double total = 0.0;
	for (int x = 0; x < elements; x += 1)
		total = total + rainAmt[x];
	//end for
	cout << "Total rainfall: " << total << endl;
}  //end of displayTotal function

void displayAverage(double rainAmt[], int elements)
{

}
//end of displayAverage function

void displayHigh(double rainAmt[], int elements)
{

}
//end of displayHigh function

void displayLow(double rainAmt[], int elements)
{

} 
//end of displayLow function