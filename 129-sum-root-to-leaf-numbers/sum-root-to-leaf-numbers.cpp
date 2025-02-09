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

    void solve(TreeNode*root , int&sum ,int k){
        if(!root)return ;

        k = (k*10) + root->val ; 
        if(!root->left&&!root->right){
            sum+= k  ;
            return ;
        }
        solve(root->left ,sum , k) ; 
        solve(root->right ,sum , k ) ; 
        
        return ; 


    }
    int sumNumbers(TreeNode* root) {
        int sum = 0 ;

        solve(root,sum,0) ;
        return sum ; 
    }
};