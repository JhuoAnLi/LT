//horrible
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    void join_vec(vector <ListNode*>*v,ListNode* head)
    {
        for(auto i = head ; i!= nullptr ; i = i -> next)
            v->emplace_back(i);
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector <ListNode*> v;
        join_vec(&v,head);//need to change vector
        return dfs_node(v,0,v.size()-1); // no need to change the vector
    }
    TreeNode* dfs_node(vector <ListNode*> v, int begin , int end)
    {
        if(begin > end) return nullptr;
        int mid = (begin+end) >> 1;
        TreeNode* root = new TreeNode(v[mid] -> val);
        root -> left = dfs_node(v,begin,mid-1);
        root -> right = dfs_node(v,mid+1,end);
        return root;
    }
};
