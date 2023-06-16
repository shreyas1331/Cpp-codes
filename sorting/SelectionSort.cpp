#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){                     //step1-i ko traverse kiya till n-1
    for(int i=0;i<n-1;i++){                              //step2-jo minIndex ayega usko i bnado
        int minIndex=i;

        for(int j=i+1;j<n;j++){                          //step3-jo next element hoga i ka i.e=i+1=j
            if (arr[j]<arr[minIndex])                    //step4-jo j hoga vo minIndex se chota hoga
            {
                //store the value
                minIndex = j;                            //step5-phir jo agge traverse kiya hai array mai 
                                                        //usmai jo chota hoga vo minindex ho jayega aur usko j krke store krva lenge
            }
        }
        //swap function
        swap(arr[minIndex], arr[i]);
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={3,6,8,4,1};
    selectionsort(arr,5);
    printarray(arr,5);
}

// void selection(int arr[], int n){                    1.traverse kro then first ko i(minIndex dedo )
//     for (int i=0;i<n-1;i++){
//         int minIndex=i;

//         for (int j=i+1;j<n;j++){                     2.first ko fix kreke agge ka array traverse kro 
//             if(arr[j]<arr[minIndex]){                3.jo ki j hoga and if j is smaller than minIndex 
//                 minIndex=j;                          4. swap them
//             }
        
//         }
//         swap(arr[minIndex],arr[i]);
//     }

// }

// void printarray(int arr[],int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

// int main(){
//     int arr[6]={3,5,7,2,6,1};
//     selection(arr,6);
//     printarray(arr,6);
// }