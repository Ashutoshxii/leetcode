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
    bool solve(TreeNode*L , TreeNode*R){
        if(L==NULL&&R==NULL)return true ; 
        if((L==NULL&&R!=NULL)||(R==NULL&&L!=NULL) )return false ; 
        if(L->val!=R->val)return false ; 
        return solve(L->left,R->right)&&solve(R->left,L->right) ; 
    }
    bool isSymmetric(TreeNode* root) {
        // if(root==NULL)return true ; 
        return solve(root->left , root->right) ;

    }
};