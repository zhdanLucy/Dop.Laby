#include<iostream>

using namespace std;

//ÇÀÄÀ×À 14
void main()
{
	
	cout << "Enter how much will be numbers" << endl;
	int a;
	cin >> a;
	int* arr = new int[a];
	cout << "Enter your numbers" << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> *(arr + i);
	}
	
	for (int i = 0; i < a; i++)
	{
		if( i!=(a-1))
		if (*(arr + i) < *(arr + i + 1))
		{
			*(arr + i) = *(arr + i + 1);
		} 
		else if (*(arr + i) < *(arr + i + 2))
		{
			*(arr + i) = *(arr + i + 2);
		}
		else
		{
			*(arr + i) = 0;
		}
		



	}
	*(arr + (a - 1)) = 0;
	for (int i = 0; i < a; i++)
	{
		cout <<*(arr + i)<<" ";
	}
	cout << endl;

	system("pause");
}