#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"printing inside the function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"going back to main function"<<endl;

}

int main(){
    int arr[3]={1,3,5};

    update(arr,3);
    cout<<"inside the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

}