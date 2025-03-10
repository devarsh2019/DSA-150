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
vector<int> morrisinorder(Node* root)
{
    Node* cur = root;
    vector<int> ans;
    while(cur != nullptr)
    {
         if(cur->left == nullptr)
         {
            ans.push_back(cur->data);
            cur = cur->right;
         }
         else {
            Node* prev = cur->left;
            while (prev->right && prev->right != cur) {
                prev = prev->right;
            }
            if (prev->right == NULL) {
                prev->right = cur;
                cur = cur->left;
            } else {
                prev->right = NULL;
                ans.push_back(cur->data);
                cur = cur->right;
            }
        }
    }
    return ans;
}
int main()
{
      /*
    Tree
        1
       / \
      2   5
     / \ 
    4   5
        \
         6 
    */
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->right->right = new Node(6);
  vector<int> res;
  res = morrisinorder(root);
  for(int ans : res)
  {
    cout<<ans <<" ";
  }
}