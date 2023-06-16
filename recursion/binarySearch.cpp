#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key){
    //base case
    //not found
    int mid=(s+e)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[6]={2,3,4,5,6,8};
    int size=6;
    int key=7;
    int ans=binarySearch(arr,0,5,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent";
    }
}