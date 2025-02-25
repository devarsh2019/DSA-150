#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data= value;
        next = NULL;
    }
};
class QueueLL
{
     public:
     Node* start = NULL;
     Node* end = NULL;
     int size;
     public:
     void enqueue(int value)
     {
        Node* temp = new Node(value);
        
        if(start == NULL)
        {
            start = temp;
            end = temp;
        }
        else{
            end->next = temp;
            end = temp;
        }
        cout<<" Inserted into Queue "<<temp->data<<endl;
        size++;
     }
     void dequeue()
     {
        if(start == NULL) cout<<"QUEUE is empty "<<endl;
        Node * temp = start;
        start = start->next;
        delete temp;
        size--;
     }
     void QueueTop()
     {
        if(start == NULL) 
        {
        cout<<"QUEUE is empty "<<endl;
        
        }
        else
        {
            cout<<"QUEUE Peek "<<start->data<<endl;
        }
     }

};

int main()
{
  QueueLL qt;
  qt.enqueue(5);
  qt.enqueue(6);
  qt.enqueue(7);
  qt.dequeue();
  qt.QueueTop();
}
