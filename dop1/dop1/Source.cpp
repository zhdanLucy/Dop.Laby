#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#include<map>
using namespace std;

//ÇÀÄÀ×À23

void main()
{

	map<int, int>count;
	map<int, int >cc;
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin>> x;
		count[x]++;
		
	}
	if (count.size() == 1)
	{
		cout << "Impossible"<<endl;
	}
	else if (count.size() == 2)
	{
		if (count.begin()->second == 4 || count.rbegin()->second == 4)
		{
			cout << "Four of a kind"<<endl;
		}
		else
			cout << "Full house"<<endl;
	}
	else if (count.size() == 3)
	{
		if (count.begin()->second == 2 || count.rbegin()->second == 2)
			cout << "Two pairs"<<endl;
		else
			cout << "Three  of Kind"<<endl;
	}
	else if (count.size() == 4)
	{
		cout << "One pair"<<endl;
	}
	else if (count.rbegin()->first - count.begin()->first == 4)
	{
		cout << "Straight"<<endl;
	}
	else
	{
		cout << "Nothing"<<endl;
	}
	system("pause");
}