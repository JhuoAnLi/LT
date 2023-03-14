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
    int sumNumbers(TreeNode* root) {
        return god(root,0);
    }
    int god (TreeNode * root,int i)
    {
        if(root == nullptr) return 0; // check if original root is nullptr
        int temp = i*10 + root -> val; 
        if(root ->right == nullptr && root ->left == nullptr) return temp; // make sure it's leave
        return god(root ->right , temp) + god (root -> left, temp); //left and right nodes
    }
};
