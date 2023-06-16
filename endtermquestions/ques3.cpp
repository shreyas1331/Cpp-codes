#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int x[n];
    for(int i=0;i<n;i++){
        cin>> x[i];
    }
    for (int i=0;i<n;i++){
        cout<< x[i] << "\t";
    }
    cout << "\n";
    sort(x,x+n);
     for (int i=0;i<n;i++){
        cout<< x[i] << "\t";
    }

}