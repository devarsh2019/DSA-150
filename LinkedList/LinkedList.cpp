#include<iostream>
#include<vector>
using namespace std;

class Node
{
  public:
    int data;
    Node* next; 
    public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
  
};
//Converting an array to LL
Node* convertArrayToLinkedList(vector<int> arr)
    {
       Node* head = new Node(arr[0]);
       Node* mover = head;
       for(int i =1 ;i<arr.size();i++)
       {
        Node* temp = new Node(arr[i]);
        mover->next =temp; 
        mover =temp;
       }
      return head;
    }
    //Printing all elements in LL
    void printAllElementsLL(Node* head)
    {
        Node* temp = head;
        while(temp)
        {
         cout << temp->data <<" ";
         temp = temp->next;
        }
        cout<<endl;
    }
//Deleting Head of the LinkedList
Node* deleteHeadLL(Node* head)
{
         Node* temp = head;
         head = head->next;
         free(temp);
         return head;
}
//Deleting Tail of the LinkedList
Node* deleteTailLL(Node* head)
{
    if(head == NULL || head->next == NULL) return NULL;
         Node* temp = head;
         while(temp->next->next!= NULL)
         {
            temp = temp->next;
         }

         free (temp->next);
        temp->next = NULL;
        return head;
}
Node* deleteKthPos(Node* head,int k)
{
    if(head == NULL || head->next == NULL) return NULL;
    if (k==1)
    {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
        int count =0;
        Node* temp = head;Node* prev = NULL;
        while(temp!= NULL)
        {
           count++;
           if(count == k)
           {
            prev->next=prev->next->next;
            delete temp;
            break;
           }
           prev = temp;
           temp = temp->next;

        }

        free (temp->next);
       temp->next = NULL;
       return head;
}
int main()
{
 
     vector<int> arr = {10,20,30,40,50};
    Node* y = new Node(arr[0],NULL);
   cout << y->data<<endl;
   Node* head = convertArrayToLinkedList(arr);
   cout<<head->data<<endl;
  printAllElementsLL(head);
//Calling the function to delete head
Node* deletehead= deleteHeadLL(head);
cout<<endl<<deletehead->data<<endl;
printAllElementsLL(deletehead);

//Calling function to delete tail
Node* head1 = convertArrayToLinkedList(arr);
Node* deleteTail= deleteTailLL(head);
cout<<endl<<deleteTail->data<<endl;
printAllElementsLL(deleteTail);

//Calling function to remove the kth element of linkedlist
Node* head2 = convertArrayToLinkedList(arr);
Node* deleteKthPosElement= deleteKthPos(head2,3);
printAllElementsLL(deleteKthPosElement);

}