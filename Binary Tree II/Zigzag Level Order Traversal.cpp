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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);
        bool flag=0;
        while(q.size())
        {
            int sz=q.size();
            vector<int>temp;
            for(int i=0;i<sz;i++)
            {
                TreeNode*top=q.front();
                q.pop();
                temp.push_back(top->val);
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
            if(flag)
                reverse(temp.begin(),temp.end());
            flag^=1;
            ans.push_back(temp);
        }
        return ans;
    }
};
