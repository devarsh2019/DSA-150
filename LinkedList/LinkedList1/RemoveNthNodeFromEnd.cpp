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
Node* deleteNodeFromEnd(Node* head,int n)
{
    Node* temp =head;
    int count =0;
    while(temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
     temp =head;
    int size = count - n;
    while(temp != NULL)
    {
        size--;
        if( size == 0) break;
        temp= temp->next;
    }
    Node* deletenode = temp;
    temp->next = temp->next->next;
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
    Node* res = deleteNodeFromEnd(head,2);
    printLL(res);
}