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
vector<vector<int>> levelorder(Node* root)
{
    vector<vector<int>> ans;
    if(root == nullptr) return ans;
     queue<Node*> q;
     q.push(root);
     while(!q.empty())
     {
        vector<int> level;
       int size = q.size();
        for(int i=0 ; i < size ; i++)
        {
            Node* node = q.front();
            q.pop();
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
            level.push_back(node->data);
        }
       ans.push_back(level);
     }
     return ans;

};


/*
    1
   / \
  2   3
 / \  / \
4   5 6  7
 */
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>> res = levelorder(root);
    for (vector<int> level : res)
    for (int data : level)
        cout << data << " ";
}