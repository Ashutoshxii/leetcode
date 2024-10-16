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
    bool solve(TreeNode*root , int v){
        if(root==NULL){
            return true ; 
        }
        // if(root->val!=v){
        //     return false ; 
        // }
        bool left = solve(root->left , v) ;
        bool right = solve(root->right , v ) ;
        return (left)&&(right)&&(root->val==v);
    }
    bool isUnivalTree(TreeNode* root) {
        int i = root->val ;

        return solve(root , i );
    }
};