#include<iostream>
using namespace std;

//searching element in an array
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    
    //initialising the array
    int arr[10]={3,4,1,6,2,8,4,1,6,9};
    cout<<"input the number "<<endl;
    int key;
    cin>>key;
    //calling the function
    bool found=search(arr,10,key);
    //checking whether the key is present or not
    if (found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
}