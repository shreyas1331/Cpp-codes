#include<iostream>
using namespace std;
bool checkpalindrome(string &str,int i,int j){
    if(i>j){
        return true;     
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkpalindrome(str,i+1,j-1);
    }
}
int main(){
    string name ="abbac";
    bool ispalindrome=checkpalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"it is"<<endl;
    }
    else{
        cout<<"it is not"<<endl;
    }
}