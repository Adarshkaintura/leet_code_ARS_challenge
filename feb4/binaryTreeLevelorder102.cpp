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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        vector<vector<int>> arr;
        queue<TreeNode*> q1;
        q1.push(root);
        while (!q1.empty()) {
            int level_size = q1.size();
            vector<int> level_vals; 
            for (int i = 0; i < level_size; i++) {
                TreeNode* temp = q1.front();
                level_vals.push_back(temp->val); 
                q1.pop();
                if (temp->left) {
                    q1.push(temp->left);
                }
                if (temp->right) {
                    q1.push(temp->right);
                }
            }
            arr.push_back(level_vals); 
        }
        return arr;
    }
};
