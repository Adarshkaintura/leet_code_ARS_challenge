class Solution
{
public:
    int maxlevel;
    int maxsum;
    
    Solution():maxlevel{0},maxsum{0}{};
    
    void helper(Node* root,int level,int sum){
        if(root==NULL){
            return;
        }
        sum+=root->data;
        level+=1;
       helper(root->left,level,sum);
       helper(root->right,level,sum);
       if(maxlevel<level){
          maxlevel=level;
          maxsum=sum;
       }else if(level==maxlevel){
           maxsum=max(sum,maxsum);
       }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
       int level=0;
       int sum=0;
       helper(root,level,sum);
       return maxsum;
    }
};
