#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high)
{
	int i = low;
	int j = high;
	int pivot = arr[low];
	while (i < j)
	{
		while (pivot >= arr[i])
			i++;
		while (pivot < arr[j])
			j--;
		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j;
}

void quickSort(int arr[], int low, int high)
{
	if (low > high) return;
	
    // Pivot element's Right Index
    int pivot = partition(arr, low, high);

    // Left part of array 
	quickSort(arr, low, pivot - 1);

    // Right part of Array
    quickSort(arr, pivot + 1, high);

}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6};
	int size = sizeof(arr) / sizeof(int);
	cout<<"Before Sorting"<<endl;
	printArray(arr, size);
	quickSort(arr, 0, size - 1);
	cout<<"After Sorting"<<endl;
	printArray(arr, size);
	return 0;
}
