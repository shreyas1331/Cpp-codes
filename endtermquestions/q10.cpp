#include<bits/stdc++.h>
using namespace std;
 class Node 
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkList 
{
    Node *top;
    public:
    void add(int data)
    {
        if (top == NULL) {
            top = new Node(data);
            return;
        }
        Node *s = new Node(data);
        s->next = top;
        top = s;
    }
     void pop()
    {
        Node *s = top;
        cout<<top->data <<" ";
        top = top->next;
        return;
    }
  
    void reverse()
    {
     while(top!=NULL)
       pop();
    }
};
 int main()
{
    LinkList *s = new LinkList();
    int item;
    cin>>item;
    while(item!=-99)
    {
        s->add(item);
    
        cin>>item;
    }
    s->reverse();
    
    return 0;
}