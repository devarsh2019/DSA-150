#include<iostream>
#include<vector>
#include<stack>
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
        next =nullptr;
    }
};
void printll(Node* head)
{
   Node* temp = head;
   while (temp)
   {
     cout<<temp->data<<" ";
     temp = temp->next;
   }
   delete temp;
}
//BruteForce Approach
void reversell(Node* head)
{
    stack<int> st;
    vector<int> arr;
    Node* temp = head;
    cout<<endl;
    while(temp)
    {
        st.push(temp->data);
        temp= temp->next;
    }
    while(!st.empty())
    {
        cout << st.top() << " ";  
        st.pop();
    }
}
//Optimal approach
void revll(Node* head)
{
    Node* newhead = nullptr;
    cout<<endl;
    while(head)
    {
        Node* nextNode = head->next;
        head->next= newhead;
        newhead= head;
        head= nextNode;
    }
    printll(newhead);
}
int main()
{
    Node* head =  new Node(1);
    head->next = new Node(2);
    head->next->next=  new Node(3);
    head->next->next->next=  new Node(4);
    head->next->next->next->next =  new Node(5);  
    printll(head);
    reversell(head);
    revll(head);
}