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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>mp;
        vector<vector<int>>ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        if(root==NULL)return ans;
        while(q.size())
        {
            int sz=q.size();
            map<int,vector<int>>temp;
            
            for(int i=0;i<sz;i++)
            {
                TreeNode* top=q.front().first;
                int level=q.front().second;
                q.pop();
                temp[level].push_back(top->val);
                if(top->left)q.push({top->left,level-1});
                if(top->right)q.push({top->right,level+1});
                
            }
            for(auto &it : temp)
            {
                sort(it.second.begin(),it.second.end());
                for(auto next : it.second)
                {
                    mp[it.first].push_back(next);
                }
            }
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};