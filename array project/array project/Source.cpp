#include<iostream>
using namespace std;


int main()
{
	int monkey[] = { 16, 2, 77, 40, 12071 };
	int n, result = 0;
	
	for (size_t n = 0; n < 5; n++)
	{

		result = result + monkey[n];
		cout << result << endl;

	}


	system("pause");
	return 0;
}