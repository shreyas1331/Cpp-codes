#include<iostream>
using namespace std;

void printno(int n){
    if(n>0){
        printno(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n=10;
    printno(n);
}