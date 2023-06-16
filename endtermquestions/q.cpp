#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    stack<int> st;
    int x;
    for (int i=0;i<5;i++){
        cin>>x;
        if(x==-99){
            break;
        }
        st.push(x);
    }
    while(!st.empty()){
        cout<< st.top() << "\t";
        st.pop();
    }
}