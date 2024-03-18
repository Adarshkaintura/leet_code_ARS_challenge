 vector<int> levelOrder(Node* root)
    {
        vector<int> ans;
      queue<Node*> q;
      q.push(root);
      while(!q.empty()){
          Node* temp=q.front();
          q.pop();
          ans.push_back(temp->data);
          if(temp!=NULL){
              if(temp->left){
                  q.push(temp->left);
              }
              if(temp->right){
                  q.push(temp->right);
              }
          }
      }
      return ans;
    }
