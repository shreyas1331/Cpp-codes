#include<iostream>
using namespace std;

/*void reverse(int arr[],int n){
    int start=0;
    int end =n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={4,6,9,3,5};
    reverse(arr,5);
    printarray(arr,5);


}*/
void reverse(int arr[],int n){
    int start=0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
            start++;
            end--;
        
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={4,6,2,6,8};
    reverse(arr,5);
    printarray(arr,5);
}