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
    void solve(TreeNode*root , int &diff , int &k){
        if(root==NULL)return ;
        solve(root->left , diff , k);
        diff = min(diff,abs(root->val - k)) ; 
        k = root->val ; 
        solve(root->right , diff , k);
    }
    int getMinimumDifference(TreeNode* root) {
        int diff = INT_MAX  ;
        int  k = INT_MAX ; 
        solve(root , diff , k) ;
        return diff ; 
    }
};