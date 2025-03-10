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
        left=right =nullptr;
    }
};
void  rightsideview(Node* root ,int level, vector<int>& ans)
{
    if(root == nullptr) return;
   if (level == ans.size())
   {
    ans.push_back(root->data);
   }
   rightsideview(root->right ,level+1,ans);
   rightsideview(root->left,level+1,ans);
}
vector<int> rightside(Node* root)
{
    vector<int> ans;
    rightsideview(root,0,ans);
    return ans;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> res;
    res = rightside(root);
    for(int ans : res)
    {
        cout<<ans << " ";
    }
}