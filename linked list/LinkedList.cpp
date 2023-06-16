/*#include<iostream>
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
        cout<<p->data<<"    ";
        p=p->next;
    }
}
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
}
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
int main(){
    Node*p=NULL;
    Node*q=NULL;
    Node*r=NULL;
    p=new Node();
    q=new Node();
    r=new Node();
    p->data=10;
    p->next=q;

    q->data=20;
    q->next=r;

    r->data=30;
    r->next=NULL;

    
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
        
    }


}
*/
//linked list BY CODING NINJA 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this ->data= data;
        next=NULL;

    }
};
int main(){
    //statically
    Node n1(1);
    Node*head=&n1;
    Node n2(2);
    n1.next=&n2;
    cout<<head->data;

}

