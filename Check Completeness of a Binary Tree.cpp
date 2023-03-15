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
    bool isCompleteTree(TreeNode* root) {
        if(!root) return true;
        int flag =0;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            if(temp && flag) return false;
            if(!temp) flag =1; // give the null node a flag = 1, then if after this node still have nonnull nodes, it would return false
            else
            {
                q.push(temp -> left);
                q.push(temp -> right);
            }
            q.pop();
        }
        return true;
    }
};
