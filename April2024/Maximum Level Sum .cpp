#include <bits/stdc++.h> 
/********************************************************* 

	Binary tree node class for reference:
	
	class TreeNode {
		int val;
		TreeNode left;
		TreeNode right;

		TreeNode(int val) {
			this.val = val;
			this.left = null;
			this.right = null;
		}
	}

********************************************************/

int maxLevelSum(TreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	queue<TreeNode<int>*> q;
	q.push(root);
	int maxi=INT_MIN;
	while(!q.empty()){
		int len=q.size();
		int data=0;
                for (int i = 0; i < len; i++) {
                    TreeNode<int>* node=q.front();
					data+=node->val;
                   q.pop();
    if(node->left){
			 q.push(node->left);
		 }
		 if(node->right){
			 q.push(node->right);
		 }
                }
	maxi=max(data,maxi);     
	   
	}
	return maxi;
}
