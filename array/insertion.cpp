#include<iostream>
using namespace std;
void insert(int n,int arr[],int x,int pos){
    n++;
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[100]={3,5,6,8,4};
    insert(5,arr,5,2);
    printarray(arr,6);
}