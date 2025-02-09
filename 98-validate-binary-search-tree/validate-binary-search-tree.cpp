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
     
    bool check(TreeNode* root,long long  s ,long long e) {
        if(root==NULL)return true ; 
        if(root->val >= e || root->val <= s){
            return false ; 
             
        }
        
        return (check(root->left , s , root->val )&&check(root->right , root->val , e)) ; 
          
          
        
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LLONG_MIN,LLONG_MAX) ;
    }
};