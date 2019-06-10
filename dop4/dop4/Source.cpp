#include<iostream>
#include<time.h>
using namespace std;
//ÇÀÄÀ×À 22
void main()
{
	srand(time(NULL));
	int mas[5][5];
	int count = 0;
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
			mas[i][j] = rand()%2;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << mas[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			count+=mas[i][j];
		}
	}
	int count1=0;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			count1 += mas[i][j];
		}
	}
	int count2 = mas[3][3];
	
	cout << count << endl;
	cout << count1 << endl;
	cout << count2 << endl;
	if (count > count2 && count > count1)
	{
		cout << "the sum of the numbers of the first array is the largest"<<endl;
	}
	else if (count1 > count && count1 > count2)
	{
		cout << "the sum of the second array numbers is the largest"<<endl;
	}
	else if (count1 > count && count1 > count2)
	{
		cout << "the sum of the numbers of the third array is the largest"<<endl;
	}
	system("pause");
}