#include<iostream>
using namespace std;

int partition(int arr[], int n, int l, int r){
    int pivot = arr[0];

    // count of element's less then pivot
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    // put pivot in right place
    int pivotIndex = count;
    swap(arr[pivotIndex], arr[l]);

    // handing left and right side of the pivot
    int i = l, j = r-1;
    while (i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
    
}

void QuickSort(int *arr, int n, int l, int r){
    if(l > r) return;

    int pos = partition(arr, n, l, r);

    // left part 
    QuickSort(arr, n, l, pos-1);

    // right part 
    QuickSort(arr, n, pos+1, r);
}

int main(){
    int arr[4] = {12, 11, 10, 15};
    int n = sizeof(arr)/sizeof(int);
    QuickSort(arr, n, 0, n-1);

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}