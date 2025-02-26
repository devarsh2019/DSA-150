#include<iostream>
#include<vector>
#include <queue> 
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

vector<vector<int>> levelOrderTraversal(Node* root)
{
    vector<vector<int>> res;
    if(root == nullptr) return res ;

    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
       int size = q.size();

       vector<int> level ;

       for(int i=0 ; i<size ;i++)
       {
        Node* node = q.front();
        q.pop();
        level.push_back(node->data);
        if(node->left!=nullptr) q.push(node->left);
        if(node->right!=nullptr) q.push(node->right);
       }
       res.push_back(level);
    }
    return res;
};



int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    root->right->right->left = new Node(5);
    root->right->right->right = new Node(6);
     // Perform level order traversal
     vector<vector<int>> res = levelOrderTraversal(root);

     // Print the result
     for (vector<int> level : res)
         for (int data : level)
             cout << data << " ";
}