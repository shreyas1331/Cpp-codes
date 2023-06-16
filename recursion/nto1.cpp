#include<iostream>
using namespace std;

void reverseorder(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
        reverseorder(n-1);
    }
}
int main(){
    int n=5;
    reverseorder(n);
}