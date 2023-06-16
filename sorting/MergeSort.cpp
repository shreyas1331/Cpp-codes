#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid, int r){

    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];//temp arrays

    for(int i=0;i<n1;i++){    //for traversing first sub array
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){    //for traversing second sub array
        b[i]=arr[mid+1+i];
    }

    int i=0;                  //making pointers
    int j=0;
    int k=l;

    while (i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else {
            arr[k]=b[j];
            k++;j++;
        }
    }
    while (i<n1){
        arr[k]=a[i];
            k++; i++;
    }
    while (j<n2){
        arr[k]=b[j];
            k++; j++;

    }
}
void mergeSort(int arr[],int l, int r){

    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);

    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[6]={5,2,7,4,8,6};
    mergeSort(arr,0,6);
    printarray(arr,6);
   
}