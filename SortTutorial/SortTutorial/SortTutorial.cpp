// SortTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void bubbleSort(int arr[], int arrSize);
void printList(int arr[], int arrSize);
using namespace std;
int main()
{
    cout << "Hello World!\n";
	int arr[] = {
		14,65,63,1,54,
		89,84,9,98,57,
		71,18,21,84,69,
		28,11,83,13,42,
		64,58,78,82,13,
		9,96,14,39,89,
		40,32,51,85,48,
		40,23,15,94,93,
		35,81,1,9,43,
		39,15,17,97,52
	};
	int arrSize = sizeof(arr) / sizeof(arr[0]);//sitcking this inside functions causes problems
	printList(arr, arrSize);
	bubbleSort(arr, arrSize);
	printList(arr, arrSize);

}

/*
void bubbleSort(int arr[], int arrSize)
{

}
*/
void bubbleSort(int arr[], int arrSize)
{
	
	for (int step = 0; step < arrSize - 1; ++step)
	{
		int swapped = 0;
		for (int i = 0; i < arrSize - step - 1; ++i)
		{
			if (arr[i] > arr[i+1])
			{

				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
	
}/**/
void printList(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << endl;
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
