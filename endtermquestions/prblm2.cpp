# include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
void insertEnd(struct Node* &head, int data){
  struct Node* node = new Node(), *trav;
  node->data  = data;    
  node->next = NULL;
  if(head==NULL)
  {
      head = node;
  }
  else
  {
    trav = head;
    while(trav->next!=NULL)
       trav=trav->next;
    trav->next=node;
  }
}

struct Node* AddSmallestLargest(struct Node* head)
{   
    Node*curr=head;
    int min=INT16_MAX;
    while(curr!=NULL){
        if(curr->data<min){
            min=curr->data;
        }
        curr=curr->next;
    }
    curr=head;
    int max=INT16_MIN;
    while(curr!=NULL){
        if(curr->data>max){
            max=curr->data;
        }
        curr=curr->next;
    }
    Node* temp=new Node();
    Node* temp1=new Node();

    // Write Your Code Here
}

void forwardPrint(struct Node* head)
{
    struct Node* trav=head;
    if(trav==NULL)
    {
	   cout<<"EMPTY";
	   return;
    }
    while(trav!=NULL)
    {
    	cout<<trav->data<<" ";
    	trav=trav->next;
    }
}

int main()
{
  int n,m;
  struct Node* head = NULL;
  cin>>n;
  while(n--)
  {
      cin>>m;
      insertEnd(head, m);
  }
  head = AddSmallestLargest(head);
  forwardPrint(head);
}
