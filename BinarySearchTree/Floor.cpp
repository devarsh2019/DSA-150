#include<iostream>
#include<vector>
using namespace std;
class Node
{
      public:
      int data;
      Node* left;
      Node* right;
      Node(int val)
    {
       data = val;
       left = right = nullptr;
    }
};
   int Floor(Node* root ,int key)
   {
      int floor = -1;
      while(root)
      {
        if (root->data == key)
        {
            floor = root->data;
            return floor;
        }
        if(key > root->data)
        {
           floor = root->data;
           root= root->right;
        }
        else
        {
            root = root->left;
        }
      }
      return floor;
   }
int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(6);

    int ans = Floor(root,7);
    cout<< ans;

}