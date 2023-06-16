#include<iostream>
using namespace std;
int binarySearch (int arr[], int size, int key){
    int start=0;
    int end = size -1;
    
    int mid =(start+end)/2;

    while (start<=end){
        if (arr[mid] == key){
            return mid;
        }
        if (key>arr[mid]){
            start=mid +1;
        }
        else{
            end=mid-1;
        }
        mid = (start +end) /2;
    }
    return -1;
}
int main(){
    int even[6]={3,4,5,7,8,9};
    //int odd[5]={3,8,11,13,15};

    int index = binarySearch(even,6,8);
    cout<<"index of 8"<<index;
}
