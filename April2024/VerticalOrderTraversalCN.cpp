#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
  vector<int> ans;
  if(!root){
      return ans;
  }
  map<int,map<int,multiset<int>>> nodes;
  queue<pair<TreeNode<int>*,pair<int,int>>>todo;
  todo.push({root, {0, 0}});
  while(!todo.empty()){
      auto p=todo.front();
      todo.pop();
      TreeNode<int>* node=p.first;
      int x=p.second.first,y=p.second.second;
      nodes[x][y].insert(node->data);
      if(node->left){
        todo.push({node->left, {x - 1, y + 1}});
      }
      if (node->right) {
        todo.push(node->right, {
        x + 1, y + 1}
      });
      }
      for(auto p:nodes){
          vector<int> col;
          for(auto q:p.second){
              col.insert(col.end()),q.second.begin(),q.second.end());
          }
          ans.insert(ans.end(),col.begin(),col.end());
      }
   return ans;
}
