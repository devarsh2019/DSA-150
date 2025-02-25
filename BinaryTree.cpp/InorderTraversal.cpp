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
void inorder(Node* root,vector<int> &arr)
{
    if (root == nullptr) return;
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
vector<int> inorderTravesal(Node* root)
{
    vector<int> arr;
    inorder(root ,arr);
    return arr;
}
int main()
{
    Node* root = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(3);
    //inorder(root);
    vector<int> result = inorderTravesal(root);
    cout<<"Inorder Traversal"<<endl;
    for(int val : result)
    {
        cout<<val<<" ";
    }
}