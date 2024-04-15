class Solution {
public:
    void helper(TreeNode* root, int num, int& sum){
        if(root == nullptr) return;
        
        num = num * 10 + root->val;
        
        if(root->left == nullptr && root->right == nullptr){
            sum += num;
            return;
        }
        
        helper(root->left, num, sum);
        helper(root->right, num, sum);
    }
    
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        helper(root, 0, sum);
        return sum;
    }
};
