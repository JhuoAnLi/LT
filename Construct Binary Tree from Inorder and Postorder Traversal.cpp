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
    unordered_map <int ,int> m;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        for(int i=0 ; i<n ; ++i)
            m[inorder[i]]=i;
        return dfs_treenode(inorder,postorder,0,n-1,0,n-1);
    }
    TreeNode* dfs_treenode(vector<int>& inorder, vector <int>& postorder, int il,int ir, int pl, int pr)
    {
        if(il>ir) return nullptr;
        int k = m[postorder[pr]];
        TreeNode* root = new TreeNode(postorder[pr]);
        root -> left = dfs_treenode(inorder,postorder,il,k-1,pl,pl+k-1-il);
        root -> right = dfs_treenode(inorder, postorder,k+1,ir,pl+k-1-il+1,pr-1);
        return root;

    } 
};
