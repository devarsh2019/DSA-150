#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int data1)
    {
        data= data1;
        next = NULL;
    }
};
Node* convertArrayToLL(vector<int> arr)
{
   Node* head = new Node(arr[0]);
   Node* mover = head;
   for(int i =1 ; i< arr.size(); i++)
   {
      Node* temp = new Node(arr[i]);
      mover->next = temp;
      mover = temp;
   }
   return head;
}
int searchElement(Node* head , int val)
{
    Node* temp = head;
    while(temp)
    {
        if(temp->data == val) return 1;
     temp = temp->next;
    }
    return 0;
}
int main()
{
    vector<int> arr = {10,20,30,40,50};
    Node* head = convertArrayToLL(arr);
   cout<< searchElement(head, 30);
}