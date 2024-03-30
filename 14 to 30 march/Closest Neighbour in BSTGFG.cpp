class Solution {
 public:
       int findMaxForN(Node* root, int n) {
        // Base case: if root is NULL, return -1 indicating no maximum found
        if (root == NULL)
            return -1;

        // If current node's key is greater than n, explore left subtree
        if (root->key > n)
            return findMaxForN(root->left, n);
        
        // If current node's key is less than or equal to n,
        // then the maximum value less than or equal to n might be in right subtree or the current node itself
        int rightMax = findMaxForN(root->right, n);
        
        // If there's a maximum value found in the right subtree that satisfies the condition, return it
        if (rightMax != -1)
            return rightMax;
        
        // Otherwise, the current node itself might be the maximum if its key is less than or equal to n
        return root->key <= n ? root->key : -1;
    }
};
