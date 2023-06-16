#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int main(){

    //declare
    int number[5];
    printarray(number,5);

    //accessing an array
    cout<<"value of index 2 is"<<number[2]<<endl;
    cout<<"value of index 16 is "<<number[16]<<endl;
    cout<<"value of index 18 is "<<number[18]<<endl;

    //initialising an array
    int array[3]={2,5,7};
    printarray(array,3);
    //accessing the element
    cout<<"value at index 2 is "<<array[2]<<endl;

    //initialising 2nd array
    int array1[5]={2,7,5,3};
    printarray(array1,5);
    cout<<"value at index 4 is "<<array1[4]<<endl;

    int fourth[6]={3,2,5,1,8,4};
    printarray(fourth,6); 

    //printing character array
    char ch[4]={'r','e','w','u'};
    cout<<ch[3]<<endl;
    for (int i =0;i<4;i++){
        cout<<ch[i]<<" ";
    }

    

    
}