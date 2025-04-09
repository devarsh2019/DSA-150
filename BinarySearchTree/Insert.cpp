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
   Node* insert(Node* root ,int val)
   {
     if(root == NULL) return new Node(val);
     Node* cur = root;
     while(true)
     {
        if(cur->data <= val)
        {
            if(cur -> right != NULL) cur = cur ->right;
            else{
                cur->right = new Node(val);
                break;
            }
        }
        else{
            if(cur -> left != NULL) cur = cur ->left;
            else{
                cur->left = new Node(val);
                break;
            }
        }
     }
     return root;
   }
int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(6);

    Node* ans = insert(root,7);
    cout<< ans->data;

}