#include<iostream>
using namespace std;
void sort(int arr[],int n){                          //round 1 se n-1 round tk chlega 
    for (int i =1;i<n;i++){
        //for round n-1
        for(int j=0;j<n-i;j++){                      //phele element ko pkdenge aur phir next vale se 
            if (arr[j]>arr[j+1]){                    //compare krke dekhenge if that element is bigger then ignore                     
                swap(arr[j],arr[j+1]);               //otherwise swap if 1st element is bigger 
            }
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    sort(arr,6);
    printarray(arr,6);

}