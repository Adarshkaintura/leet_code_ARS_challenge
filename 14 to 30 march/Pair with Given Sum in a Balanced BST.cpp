#include <bits/stdc++.h> 
/***********************************************
	The structure of Binary tree is given below: 
	
	template <typename T>
	class BinaryTreeNode {
	public:
		T data;
		BinaryTreeNode<T>* left;
		BinaryTreeNode<T>* right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	};
***********************************************/
void inorder(BinaryTreeNode<int>* root,vector<int>& arr){
	if(root==NULL){
		return;
	}
inorder(root->left,arr);
arr.push_back(root->data);
inorder(root->right,arr);
return;
}
bool findTargetPair(BinaryTreeNode<int>* root, int target)
{

	vector<int> arr;
	inorder(root,arr);
	int i=0;
	int j=arr.size()-1;
	while(i<j){
		int temp=arr[i]+arr[j];
		if(temp==target){
			return true;
		}else{
			if(temp>target){
				j--;
			}else{
				i++;
			}
		}
	}
	return false;
}

//optimized
//i will do it later
