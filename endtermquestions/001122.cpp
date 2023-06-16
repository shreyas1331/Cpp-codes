#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void create(int val)
{
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL; 
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
Node* segregate(Node *newHead) {
        // Write your Code here
        int c0=0;
        int c1=0;
        int c2=0;
        Node *curr=newHead;
        while(curr!=NULL){
            if((curr->data) == 0){
                c0++;
            }
            if((curr->data)== 1){
                c1++;
            }
            if((curr->data) == 2){
                c2++;
            }
            curr=curr->next;
        }
        Node *temp=newHead;
        while(c0){
            temp->data=0;
            c0--;
            temp=temp->next;
        }
        while(c1){
            temp->data=1;
            c1--;
            temp=temp->next;
        }
        while(c2){
            temp->data=2;
            c2--;
            temp=temp->next;
        }
        return newHead;

}

void show()
{
    Node* temp = head;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int ele;
        cin >> ele;
        create(ele);
    }
    head = segregate(head);
    show();
    return 0;
}