#include<iostream>
#include<vector>
#include<queue>
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
int maxdepth(Node* root)
{
    if(root == nullptr) return 0;
     queue<Node*> q;
     q.push(root);
     int count =0;
     while(!q.empty())
     {
       int size = q.size();
        for(int i=0 ; i < size ; i++)
        {
            Node* node = q.front();
            q.pop();
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
        }
        count++;
     }
     return count;
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
    cout<< maxdepth(root);
}