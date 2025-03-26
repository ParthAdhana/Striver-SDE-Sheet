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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        if(root==NULL)return 0;
        q.push({root,0});
        long long ans=0;
        while(q.size())
        {
            long long low=q.front().second;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode* top=q.front().first;
                long long node=q.front().second-low;
                ans=max(ans,node);
                q.pop();
                if(top->left)q.push({top->left,2*node+1});
                if(top->right)q.push({top->right,2*node+2});
            }
        }
        return ans+1;
    }
};