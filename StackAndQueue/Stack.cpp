#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    int* arr;
    int size;
    int top;
    public:
    Stack()
   {
    top = -1;
    size = 10;
    arr = new int[size];
   }
  void push(int n)
   {
     top++;
     arr[top] = n;
   }
   void pop()
   {
      top--;
   }
   int Top()
   {
     return arr[top];
   }
   int Size()
   {
     return top+1;
   }


};

int main()
{
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout << "Top of stack " << st.Top() << endl;
  st.pop();
  st.pop();
  cout << "Top of stack after two pop " << st.Top() << endl;
  cout<<"Size of stack"<<st.Size()<<endl;
}