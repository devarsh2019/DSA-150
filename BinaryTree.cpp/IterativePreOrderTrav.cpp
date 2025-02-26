#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};
vector<int> iterativepreoder(Node* root)
{
    vector<int> res;
    stack<Node*> st;
    st.push(root);
    while(!st.empty())
    {
        root = st.top();
        st.pop();
        res.push_back(root->data);
        if(root->right != nullptr)
        {
            st.push(root->right);
        }
        if(root->left != nullptr)
        {
            st.push(root->left);
        }
    }
    return res;
}
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
  vector<int> res = iterativepreoder(root);
  cout<<"Iterative Preorder"<<endl;
  for(int val : res)
  {
    cout<<val<<" ";
  }
}