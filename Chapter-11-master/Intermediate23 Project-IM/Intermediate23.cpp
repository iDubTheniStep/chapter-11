//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int points[5] = {62, 75, 100, 83, 85};
	int i = 0;

	char grades[5]  = {'D', 'C', 'A', 'B', 'B'};

	for (int i = 0; i <= 5; i++)
	{
		cout << points[i] << "->" << grades[i] << endl;
		i++;
	}
	system("pause");
	return 0;
}	//end of main function