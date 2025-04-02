#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //Maxheap
    priority_queue<int> pq;
    pq.push(50);
    pq.push(55);
    pq.push(53);
    pq.push(54);
   cout<<"Max heap top : "<<pq.top()<<endl;
   
   //Minheap
   priority_queue<int,vector<int>,greater<int>> minheap;
   minheap.push(50);
   minheap.push(55);
   minheap.push(53);
   minheap.push(54);
  cout<<"Min heap top : "<<minheap.top();

}