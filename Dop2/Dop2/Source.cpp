#include<iostream>

using namespace std;

struct You
{
	int day;
	int mounth;
	int year;
	
}; 

void main()
{
	You are[2];
	cout << "Enter your day mounth year  in nof HB: "<<endl;
	cin >> are[0].day;
	cin >> are[0].mounth;
	cout << "Enter currently date : "<<endl;
	cin >> are[1].day;
	cin >> are[1].mounth;
	cin >> are[1].year;
	int year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	bool IsTrue = true;
	for (int i = 0; i < 2; i++)
	{
		if (are[i].day > 31 || are[i].day < 0 || are[i].mounth>12 || are[i].mounth < 0 || are[1].year>3000 || are[1].year < 1920)
		{
			IsTrue = false;
		}
		else if (are[i].day == 29 && are[1].year % 400 == 1 && are[1].year % 4 == 1 && are[1].year % 100 == 0)
		{
			IsTrue = false;
		}
	}
	if (IsTrue == false)
	{
		cout << "Sorry your information is false, try again later!"<<endl;
	}
	else
	{  
	if(are[0].mounth )



		
	}
}