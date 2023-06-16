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
int min1(Node *head){
    Node *curr=head;
    int minn=INT_MAX;
    while(curr!=NULL){
        if(curr->data<minn){
            minn=curr->data;
        }
        curr=curr->next;

    }
    return minn;
}
int max1(Node *head){
    Node *curr1=head;
    int maxx=INT_MIN;
    while(curr1!=NULL){
        if(curr1->data>maxx){
            maxx=curr1->data;
        }
        curr1=curr1->next;
    }
    return maxx;
}



struct Node* AddSmallestLargest(struct Node* head)
{
    // Write Your Code Here
    // Node *curr=head;
    // struct *Node node1= new Node();
    // struct *Node node2= new Node();
    // int data1=minn(head);
    // int data2=maxx(head);
    // node2->data=data1;
    // node2->next=NULL;
    // while(curr=NULL){
    //     curr=curr->next;
    // }
    // curr->next= node2;
    // node1->data=data1;
    // node1->next=head;
    // return node1;


     if(head==NULL)
    return NULL;
  struct Node* node1 = new Node();
  struct Node* node2 = new Node(), *trav;
  int data1 = min1(head);
  int data2 = max1(head);
  node2->data  = data2;    
  node2->next = NULL;
  trav = head;
  while(trav->next!=NULL)
       trav=trav->next;
  trav->next=node2;
  node1->data  = data1;    
  node1->next = head;
  return node1;


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