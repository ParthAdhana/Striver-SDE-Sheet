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
    void dfs(TreeNode* root, int level,int & ans)
    {
        if(root==NULL)return ;
        ans=max(level,ans);
        dfs(root->left,level+1,ans);
        dfs(root->right,level+1,ans);

    }
    int maxDepth(TreeNode* root) {
        int ans=1;
        if(root==NULL)return 0;
        dfs(root,1,ans);
        return ans;
    }
};