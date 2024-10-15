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
    void solve(TreeNode* root, int& k,int &n){
        if(root==NULL)return  ;
        solve(root->left,k,n);
        k--;
        if(k==0){
            n=root->val;
            return ;
        }
        solve(root->right,k,n);
        return ; 
    }
    int kthSmallest(TreeNode* root, int k) {
        int n = 0;
        solve(root,k,n);
        return n ; 
    }
};