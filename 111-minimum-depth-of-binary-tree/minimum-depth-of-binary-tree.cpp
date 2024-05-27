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

    void solve(TreeNode*root , int&mini , int level){
        if(root==NULL){
            return ; 
        }
        if(root->left==NULL &&root->right==NULL){
            mini = min(level+1,mini) ; 
        }
        if(root->left){
            // level+=1;
            solve(root->left , mini ,level+1 );
        }
        if(root->right){
            // level+=1;
            solve(root->right ,   mini ,level+1) ;
        }
        return ; 
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0 ; 
        int mini = INT_MAX ;
        solve(root , mini , 0 ) ;
        return mini ; 
    }
};