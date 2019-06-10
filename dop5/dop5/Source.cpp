#include<iostream>
#include<string>
using namespace std;
//ÇÀÄÄÀ×À 19


void main()
{ 
	int mas[5][6];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter numbers of tickets" << endl;
		for (int j = 0; j < 6; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout<< mas[i][j]<<" ";
		}
		cout << endl;
	}
	int per = 0, vtor = 0, happy = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j < 3)
			{
				per = per + mas[i][j];
			}
			else
			{
				vtor = vtor + mas[i][j];
			}
		}
		if (per == vtor)
		{
			happy++;
		}
	}
	cout << "Happy tickets = " << happy << endl;
	system("pause");
}