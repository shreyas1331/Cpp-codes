#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    //base case
    if (size==0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=search(arr+1,size-1,key);
        return remainingPart;
    }
}
int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;
    int key=3;
    bool ans = search(arr,size,key);
    if(ans){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent";
    }
}