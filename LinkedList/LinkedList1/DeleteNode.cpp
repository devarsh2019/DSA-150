#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
void printLL(Node* head)
{
    Node* temp = head;
    while(temp != nullptr) 
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* deleteHeadNode(Node* head)
{
    if(head == NULL) return head;
    Node* temp = head;
    head= head->next;
    delete temp;
    return head;
}
Node* deleteTailNode(Node* head)
{
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;
    while(temp->next->next != nullptr) 
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
Node* deleteNode(Node* head ,int deletenode)
{
    if(head == NULL ) return head;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != nullptr) 
    {
        if(temp->data == deletenode)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    printLL(head);
   int deletenode = 4;
   //Node* res = deleteHeadNode(head);
  // printLL(res);
  // Node* res1= deleteTailNode(head);
 //  printLL(res1);
   Node* ans= deleteNode(head,deletenode);
   printLL(ans);
}