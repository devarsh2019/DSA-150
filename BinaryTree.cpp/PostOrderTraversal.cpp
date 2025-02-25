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
    left=right= nullptr;
  }
};
void postorder(Node* root , vector<int> &arr)
{
    if(root == nullptr) return;
    postorder(root->left,arr);
    postorder(root->right,arr);
    arr.push_back(root->data);
}
vector<int> postorderTrav(Node* root)
{
   vector<int> arr;
   postorder(root,arr);
   return arr;
}
int main()
{
  Node* root = new Node(1);
  root->right = new Node(2);
  root->left = new Node(3);
  vector<int> result = postorderTrav(root);
  cout<<"PostOrder Traversal"<<endl;
  for(int val : result)
  {
    cout<<val<<" ";
  }
}