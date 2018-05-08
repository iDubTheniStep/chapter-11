//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	
	//declare variables
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  
	char finalgrade;
	//declare arrays and fill with data
	int totalpoints[] = { 0, 300, 350, 400, 450 };
	char grade[] = { 'A', 'B', 'C',' D', 'F' };
	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;
	if (points >= totalpoints[0] && points < totalpoints[1])
	{
		cout << grade[0];

	}
	else if (points >= totalpoints[0] && points < totalpoints[1])
	{
		cout << grade[1];

	}
	else if (points >= totalpoints[0] && points < totalpoints[1])
	{
		cout << grade[2];

	}
	else if (points >= totalpoints[0] && points < totalpoints[1])
	{
		cout << grade[3];

	}
	else if (points >= totalpoints[0] && points < totalpoints[1])
	{
		cout << grade[4];

	}

	
	

	system("pause");
	return 0;
}	//end of main function