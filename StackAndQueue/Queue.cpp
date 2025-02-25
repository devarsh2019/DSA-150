#include<iostream>
#include<vector>

using namespace std;
class queue
{
   public:
   int* arr;
   int size,currentSize,start,end;
   public:
   queue()
   {
    size=4;
    arr = new int[4];
    currentSize = 0;
    start = -1;
    end = -1;
   }
   void push(int n)
   {
      if(currentSize == size)
      cout<<"Queue is full"<<endl;
      if(end == -1)
      {
        start = 0;
        end =0;
      }
      else 
      end = (end +1) % size;
      arr[end] = n ;
      cout<<"The element is pushed is  "<<n<<endl;
      currentSize++;
   }
   int pop()
   {
    if(start ==-1)
    cout<<"Queue is empty"<<endl;
    int popped = arr[start];
    if(currentSize == 1)
    {
      start =-1;
      end = -1;
    }
    else
    start = start +1 % size;
    currentSize--;
    return popped;
   }
   int top()
   {
    if(start == -1)
    {
    cout<<"Queue is empty"<<endl;
    exit(0);
    }
    return arr[start];
   }
   int Size(){
    return currentSize;
   }

};
int main()
{
  queue q;
  q.push(3);
  q.push(4);
  q.push(2);
  q.top();
  q.pop();
  q.pop();
  q.push(5);
  q.pop();
  q.pop();
  q.top();

}