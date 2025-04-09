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
      int ceil = -1;
      while(root)
      {
        if (root->data == key)
        {
            ceil = root->data;
            return ceil;
        }
        if(key > root->data)
        {
           root= root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
      }
      return ceil;
   }
int main()
{
    Node* root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);

    int ans = Floor(root,11);
    cout<< ans;

}