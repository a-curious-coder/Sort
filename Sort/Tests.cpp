#include <iostream>
#include <stdlib.h>
#include <vector>
#include "./Tests.h"
using namespace std;


int Tests::IntegerSorter(int a[])
{
	system("cls");
	cout << "Integer Sorting Function" << endl;
	cout << "This function will randomly generate 10 integers for the array then print before and after sorting them. \n" << endl;
	for (int j = 0; j < 10; j++) {
		a[j] = rand() % 100; //Using stdlib, I can use the rand function with the number limit 100 to generate 10 random integers for this function to use.
	}

	cout << "Before sorting: ";
	for (int i = 0; i < 10; i++)
	{
		if (i <= 8)
		{
			cout << a[i] << " "; // This if statement within this for loop will print out these random numbers in the order they were generated. 
		} else {
			cout << a[i] << ".\n" << endl;
		}
	}
	
	
	for (int i = 0; i <= 8; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << "After sorting: ";
	for (int i = 0; i < 10; i++)
	{
		if (i <= 8)
		{
			cout << a[i] << " "; // This if statement within this for loop will print out these random numbers in ascending order as they've been filtered through the couple for loops before this. 
		}
		else {
			cout << a[i] << ".\n" << endl;
		}
	}

	cout << "Press any key to return to menu...";
	cin.ignore();
	cin.get();
	
	return 0;
};//Done
float Tests::FloatSorter(float b[], int size)
{
	/*int s1 = sizeof(b); // 40 
	cout << s1 << endl;
	int s2 = sizeof(b[0]); // 4
	cout << s2 << endl;
	int length = s1 / s2;
	cout << length << endl;*/

	cout << "Float Sorter Function" << endl;
	cout << "Before sorting: ";

	if (size < 1) {
		cout << "Error: array doesn't have any elements.";
	}
	else if (size >= 1 && size < 11){
		for (int i = 0; i < size; i++)
		{
			cout << b[i] << " ";
		}
		//----------------
		//Sorts the floating point objects
		for (int i = 0; i <= size -2; i++)
		{
			for (int j = i + 1; j <= size -1; j++)
			{
				if (b[i] > b[j])
				{
					float temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		//--------------
		cout << "\nAfter sorting: ";
		for (int i = 0; i < size; i++)
		{
			cout << b[i] << " ";
		}
	}
	cin.ignore();
	cin.get();

	return 0.0f;
}