#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node* root ,vector<int> &arr)
{
    if (root == NULL) return;
    arr.push_back(root->data);
    preorder(root->left,arr);
    preorder(root->right,arr); 
}
vector<int> preOrder(Node* root){
    
    vector<int> arr;
    preorder(root, arr);
    return arr;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    vector<int> result = preOrder(root);

    cout << "Preorder Traversal: ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
}