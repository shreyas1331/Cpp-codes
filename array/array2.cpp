#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[],int n){

    int min = INT_MAX;

    for (int i=0;i<n;i++){
        if (num[i]<min){
            min=num[i];
        }
    }
    return min;

}
int getMax(int num[],int n){

    int max = INT_MIN;

    for (int i=0;i<n;i++){
        if (num[i]>max){
            max=num[i];
        }
    }
    return max;

}


int main(){
    int size;
    cout<<"enter the size of an array"<<endl;
    cin>>size;

    int num[100];
    //taking input in array
    for(int i=0;i<size;i++){
        
        cin>>num[i];
    }

    cout<<"max value of array is "<<getMax(num,size)<<endl;
    cout<<"min value of array is "<<getMin(num,size)<<endl;
}