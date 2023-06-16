#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[],int n){
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6]={3,4,5,6,7,8};
    swapalternate(even,6);
    printarray(even,6);
    return 0;
}