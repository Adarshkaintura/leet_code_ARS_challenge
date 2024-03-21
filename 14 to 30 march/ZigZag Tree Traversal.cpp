class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
  vector<int> zigZagTraversal(Node* root) {
    if (!root)
        return {};

    stack<Node*> s1;
    vector<int> ans;
    s1.push(root);
    bool flag = true;

    while (!s1.empty()) {
        int len = s1.size();
        stack<Node*> s2;
        if (flag) {
            for (int i = 0; i < len; i++) {
                Node* temp = s1.top(); 
                s1.pop();
                int a = temp->data;
                ans.push_back(a);

                if (temp->left)
                    s2.push(temp->left);
                if (temp->right)
                    s2.push(temp->right);
            }
            
        } else {
            for (int i = 0; i < len; i++) {
                Node* temp = s1.top(); 
                s1.pop();
                int a = temp->data;
                ans.push_back(a);

                if (temp->right)
                    s2.push(temp->right);
                if (temp->left)
                    s2.push(temp->left);
            }
        }
        flag = !flag;
            s1=s2;
    }
    return ans;
}
