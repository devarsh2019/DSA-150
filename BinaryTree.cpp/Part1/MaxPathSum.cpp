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
int sum(Node* root , int& maxi)
{
     if(root == nullptr) return 0;
     int left = max(0,sum(root->left,maxi));
     int right = max(0,sum(root->right,maxi));
     maxi = max(maxi,left+right+root->data);
     return max(left,right) + root->data  ;
}
int maxsum(Node* root)
{ 
   int maxi = INT16_MIN;
   sum(root ,maxi);
   return maxi;
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
    int res = maxsum(root);
    cout<<"Maximum Path Sum of Binary Tree "<<res;
}
