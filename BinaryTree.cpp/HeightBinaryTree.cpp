#include<iostream>
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
        left=right=nullptr;
    }
};
int maxheight(Node* root)
{
    if (root == nullptr) return 0;
    int lh = maxheight(root->left);
    int rh = maxheight(root->right);
    return 1 + max(lh,rh);
};

int main()
{
     /*
    Tree
        1
       / \
      2   7
     / \  
    3   4
       / \
      5   6 
    */
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(7);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  root->left->right->left = new Node(5);
  root->left->right->right = new Node(6);
  int res = maxheight(root);
  cout<<"Height of Binary Tree is "<<res;
}
