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
Node* addTwoNumber(Node* head , Node* head1)
{
    Node* t1 = head;
    Node* t2 = head1;
    Node* dummyNode = new Node(-1);
    Node* curr =dummyNode;
    int carry =0 ; int sum =0;
    while(t1 != NULL || t2 != NULL)
    {
       sum = carry;
       if(t1) sum = sum + t1->data;
       if(t2) sum = sum + t2->data;
      Node* newNode = new Node(sum%10);
       carry = sum/10;
       curr->next = newNode;
       curr = curr->next;
       if(t1) t1 = t1->next;
       if(t2) t2 = t2->next;     
    }
    if(carry)
    {
    Node* newNode = new Node(carry);
     curr->next = newNode;
    }
    return dummyNode->next;
}
int main()
{
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    printLL(head);
    Node* head1 = new Node(3);
    head1->next = new Node(8);
    head1->next->next = new Node(7);
    printLL(head1);
   Node* ans = addTwoNumber(head,head1);
   printLL(ans);

}