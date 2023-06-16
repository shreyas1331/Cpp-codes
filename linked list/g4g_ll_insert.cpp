#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *insertBegin(Node*head,int x)
{
    Node*temp=new Node (x);
    temp->next=head;
    return temp;
}
Node *insertEnd(Node*head,int x){
    Node *temp=new Node(x);
    if (head==NULL)
            return temp;
        Node*curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=temp;
        return head;
    
}
Node *deleted(Node* head)
{
    if(head==NULL)
    return NULL;
    else
    {
        Node*temp=head->next;  //first ko head bna do aur next ko temp then delete head
        delete head;
        return temp;
    }
}
void display(struct Node *p){
    while (p!=NULL){
        cout <<p->data<<" ";
        p=p->next;
    }
}

int main(){
    Node *head=NULL;
    head=insertBegin(head,30);
    head=insertBegin(head,20);
    head=insertBegin(head,10);
    head=insertBegin(head,5);
    head=insertBegin(head,60);
    head=insertEnd(head,40);
    // head=deleted(head);
    display(head);
    return 0;
}