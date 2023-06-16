// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x=2,y=2;
//     int result = pow(x,y);
//     cout<<result;
// }

// using c language
// #include<stdio.h>
// float power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,(b-1));
// }
// int main(){
//     int a,b,res;
//     scanf("%d %d",&a,&b);
//     res=power(a,b);
//     printf("value is: %d ",res);
// }

#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    return 2 * power(n-1);
}
int main(){
    int n;
    cin>>n;
    
    cout<<power(n)<<endl;
}