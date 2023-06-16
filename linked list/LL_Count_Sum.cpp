//LINKED LIST (CREATE , DISPLAY ,COUNT ,FINDING SUM ,MAX NO. MIN NO.)
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first =NULL;               //GLOBAL POINTER
void create(int A[],int n){
    struct Node *t,*last;
    first=new Node();
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=new Node();
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int count(struct Node *p){
    int l=0;
    while (p){
        l++;
        p=p->next;

    }
    return l;
}
int sum (struct Node *p){
    int s=0;
    while (p!=0){
        s+=p->data ;
        p=p->next;

    }
    return s;
}

int max (struct Node *p){
    int max=INT32_MIN;
    while (p){
        if (p->data>max)
        max=p->data;
        p=p->next;
    }
    return max;

}
int min(struct Node *p){
    int min =INT32_MAX;
    while(p){
        if (p->data <min)
        min=p->data;
        p=p->next;
    }
    return min;
}
Node* search (Node *p,int key){
    while (p!=NULL){
        if (key==p->data)
        cout<<"key is present"<<endl;
        else
        cout<<"key is absent";
        
        return p;
        p=p->next;
        
    }
    
    return 0;
}
int main(){
    int A[]={7,5,2,4,9};
    create(A,5);
    display(first);
    cout<<endl;
    cout<<"count is "<<count(first)<<endl;
    cout<<"sum is "<<sum (first)<<endl;
    cout<<"the max number is "<<max(first)<<endl;
    cout<<"the min number is "<<min(first)<<endl;
    //cout<<search(first,9)<<endl;
    search(first,7);
}