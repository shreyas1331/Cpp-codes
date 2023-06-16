#include<iostream>
#include<climits>
using namespace std;



int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0 ;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int average =sum/n;

    int max=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
       
    }

    int second_l=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>second_l && arr[i]<max){
            second_l=arr[i];
        }
    }

    int smallest=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

  
    
    cout<<"sum is :"<<sum<<endl;
    cout<<"average is :"<<average<<endl;
    cout<<"greatest element is:"<<max<<endl;
    cout<<"second largest element is:"<<second_l<<endl;
    cout<<"smallest no. is :"<<smallest<<endl;
    
    
}