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
    // void getSum(TreeNode* root , int&sum){
    //     if(root==NULL){
    //         return  ;
    //     }
    //     getSum(root->left,sum) ;
    //     sum+=root->val; 
    //     getSum(root->right,sum) ;
    //     return ; 
    // }
    void made(TreeNode*root , int&sum){
        if(root==NULL){
            return  ;
        }
        made(root->right,sum) ;
        // cout<<sum ; 
        sum+=root->val ;
        root->val = sum ; 
        made(root->left,sum) ;
         
        
        return ; 
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0  ; 
        // getSum(root,sum) ;
        made(root,sum) ; 
        return root ; 
    }
};