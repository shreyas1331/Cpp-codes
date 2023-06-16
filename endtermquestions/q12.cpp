#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    stack<int> st;
    vector <int> vc;
    for (int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            int value;
            cin>>value;
            st.push(value);
            vc.push_back(value);
        }
        else if(x==2){
            if(st.empty()){
                cout<< -1 << endl;
            }
            else{
            cout << st.top() <<endl;
            st.pop();
            }
        }
        else if(x==3){
            cout<< *min_element(vc.begin(),vc.end());
        }
    }
}