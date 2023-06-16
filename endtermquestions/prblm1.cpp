#include<iostream>
using namespace std;
class Node
{
    public:
	int data;
	Node* next;
};
Node* head = NULL;

void insertHead(int val)
{
	Node* newNode = new Node();
	newNode->data = val;
	newNode->next = head;
	head = newNode;
}
void deleteMid()
{   
    Node*curr=head;
    int c=0;
    while(curr!=NULL){
        c++;
        curr=curr->next;
    }
    curr=head;
    int mid=0;
    mid=c/2;
    for(int i=1;i<mid;i++){
        curr=curr->next;
    }
    Node*temp=curr->next->next;
    delete curr->next;
    curr->next=temp;

        // Write your code here	
}
void show()
{   
    Node*curr1=head;
    while(curr1!=NULL){
        cout<<curr1->data<<" ";
        curr1=curr1->next;
    }
        // Write your code here	

}
int main()
{
	int n;
	cin >> n;
	while (n != -1)
	{
		insertHead(n);
		cin >> n;
	}
	deleteMid();
	show();
	return 0;
}
