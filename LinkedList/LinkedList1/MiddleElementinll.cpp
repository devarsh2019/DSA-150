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
        data =val;
        next = nullptr;
    }
};
void midElement(Node* head)
{
    int count =0;
    Node* temp = head;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    int mid = count/2;
   temp =head;
    for(int i=0 ; i<mid ;i++)
    {
        temp = temp->next;
    }
    cout<<"Middle Element of Linked List is : " <<temp->data<<endl;

}
//Tortoise Hare Algo
void midll(Node* head)
{
    Node* slow =head ;Node* fast = head;
    while(fast != nullptr && fast->next != nullptr )
    {
        slow= slow->next;
        fast = fast->next->next;
    }
    cout<<"Middle Element of Linked List by Tortoise and Hare : " <<slow->data<<endl;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next=  new Node(3);
    head->next->next->next=  new Node(4);
    head->next->next->next->next =  new Node(5); 
    midElement(head);
    midll(head);
}