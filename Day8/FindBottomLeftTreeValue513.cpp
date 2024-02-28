/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> myQueue;
        myQueue.push(root);
        int ans=root->val;
        while(!myQueue.empty()){
            int level=myQueue.size();
            for(int i=0;i<level;i++){
                TreeNode* n1=myQueue.front(); 
                ans = n1->val;
            
                myQueue.pop();

                if(n1->right){
                    myQueue.push(n1->right);
                }
                if(n1->left){
                    myQueue.push(n1->left);
                }
            }
        }
        return ans;
    }
};
