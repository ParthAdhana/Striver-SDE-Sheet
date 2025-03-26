/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
//in=left, root,right
//pre=root,left,right
//post left,right,root
void dfs(TreeNode* root, vector<vector<int>>&ans)
{
    if(root==NULL)return;
    ans[1].push_back(root->data);
    dfs(root->left,ans);
    ans[0].push_back(root->data);
    dfs(root->right,ans);
    ans[2].push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>>ans(3);
    // if(root==NULL);
    // return ans;
    dfs(root,ans);
    //cout<<ans.size()<<' '<<ans[0].size()<<' '<<ans[1].size<<' '<<ans[2].size()<<endl;
    return ans;
}