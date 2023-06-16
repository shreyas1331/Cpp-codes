#include<iostream>
using namespace std;

struct Node {
    public:
    int data ;
    struct Node* next;
}*first=NULL;             //GLOBAL VARIABLE   
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
int count(struct Node *p){
    int l=0;
    while (p){
        l++;
        p=p->next;

    }
    return l;
}



void Insert(struct Node *p,int index,int x)
{
    
 struct Node *t;
 int i;

 if(index < 0 || index > count(p))
 return;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;

 }


}

int main(){
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);
   Insert(first,0,5);
    
    display(first);


}