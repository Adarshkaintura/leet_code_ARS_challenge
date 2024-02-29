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
    bool isEvenOddTree(TreeNode* root) {
        if (!root)
            return true;
        queue<TreeNode*>q1;
        q1.push(root);
        int prev=0;
        int flag=1;
        int level=0;
        while(!q1.empty()){
            int level_size=q1.size();
            for(int i=0;i<level_size;i++){
                TreeNode* a1=q1.front();
                 int a=a1->val;
                 q1.pop();

                if(level%2==0){
                       if(a%2==0 ||(i>0 && prev>=a) ){
                           return false;
                       }
                }else{
                    if(a%2!=0|| (i>0 && prev<=a)){
                        return false;
                    }
                }
                prev=a;
                if(a1->left){
                    q1.push(a1->left);
                }
                if(a1->right){
                    q1.push(a1->right);
                }
                
            }
            level =!level;
            
        }
        return true;
    }
};
