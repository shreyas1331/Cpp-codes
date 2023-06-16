#include<iostream>
using namespace std;

struct Node {
    public:
    int data ;
    struct Node* next;
}*first=NULL;         //GLOBAL VARIABLE   
            
            
void create(int A[],int n){
    struct Node *t,*last;
    first=new Node();
    first->data=A[0];
    first->next=NULL;
    last=first;

    for (int i=1;i<n;i++){
        t=new Node();
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
    

}
void display(struct Node *p){
    while (p!=NULL){
        cout <<p->data<<" ";
        p=p->next;
    }
}
// struct Node *LSearch(struct Node *p,int key){
//     while (p!=NULL){
        
//     }
// }
int main(){
    int A[]={2,5,7,3,5};
    create(A,5);
    display(first);


}