class Solution
{
    public:
    void inorder(Node *root,vector<int> &arr){
        if(root==NULL){
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    int absolute_diff(Node *root)
    {
        vector<int> arr;
      inorder(root,arr);
      int mini=INT_MAX;
      for(int i=1;i<arr.size();i++){
          int a=arr[i]-arr[i-1];
          if(a<mini){
              mini=a;
          }
      }
      return mini;
    }
};
