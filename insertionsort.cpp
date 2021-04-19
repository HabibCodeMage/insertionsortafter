// insertionsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include"vector.h"
using namespace std;
template<typename T>
void insertionsort(vector<T>& array);
int main()
{
	int value;
	vector<int> obj;
	for (size_t i = 0; i <10; i++)
	{
		cout << "ENTER " << i + 1 << " VALUE: ";
		cin >> value;
		obj.push_back(value);
	}
	cin.ignore();
	insertionsort(obj);
	cout << "AFTER INSERTION SORT VALUES ARE\n";
	for (auto it:obj)
	{
		cout << it<<endl;
	}
	system("pause");
}
template<typename T>
void insertionsort(vector<T>& array)
{
	for (size_t i = 1; i < array.size(); i++)
	{
		T temp = array[i];
		size_t j;
		for ( j = i; j > 0 && array[j-1]>temp; j--)
		{
			array[j] = array[j - 1];
		}
		array[j] = temp;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
