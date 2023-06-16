#include<iostream>
using namespace std;
// void printarray(int arr[],int n){
    
void findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    // return ans;
}
int main(){
    int arr[6]={1,2,3,2,3};
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    // cout<<findunique;
    findunique(arr,6);
    return 0;
    
}