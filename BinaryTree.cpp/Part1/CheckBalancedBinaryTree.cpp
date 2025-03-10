#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val)
    {
        data = val;
        left=right=nullptr;
    }
};
int height(Node* root)
{
    if(root == nullptr) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1 + max(lh,rh);
}
bool chkbalancedtree(Node* root)
{
   if(root == nullptr) return true;
   int leftheight = height(root->left);
   int rightheight = height(root->right);

   if(abs(rightheight - leftheight) <= 1 && chkbalancedtree(root->left) && chkbalancedtree(root->right)) return true;
   return false;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    bool res = chkbalancedtree(root);
    if(res) cout<<"It is balanced Tree";
    else cout<<"It is not balanced Tree";
}