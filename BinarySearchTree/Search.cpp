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
   Node* searchBST(Node* root ,int val)
   {
       while(root != NULL && root->data != val)
       {
           root = val < root->data ? root->left : root->right;
       }
       return root;
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

    Node* ans = searchBST(root,14);
    cout<< ans->data;

}