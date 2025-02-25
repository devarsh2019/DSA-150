#include<iostream>
using namespace std;
class stackNode
{
    public:
    int data;
    stackNode* next;

    stackNode(int data1)
    {
        data = data1;
        next = NULL;
    }
};
class stackLL
{
    public:
    stackNode* top;
    int size;

    stackLL()
    {
        top = NULL;
        size = 0 ;
    }
    public:
    void stackPush(int value)
    {
        stackNode* x = new stackNode(value);
        x->next = top;
        top = x;
        cout<<"Element Push "<<x->data<<endl;
        size++;
    }
   int pop()
   {
    if(top == NULL) return -1;
    int topData = top->data;
    stackNode* temp = top;
    top = top -> next;
    delete temp;
    size--;
    cout <<"Element Pop "<<topData<<endl;
    return topData;
   }
   int stackSize() {
    return size;
  }
  int stackTop() {
    if (top == NULL) return -1;
    return top -> data;
  }
  void printStack() {
    stackNode * current = top;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
}
};

int main()
{
   stackLL st;
   st.stackPush(4);
   st.stackPush(5);
   st.stackPush(6);
   st.pop();
   st.pop();
   st.printStack();
}