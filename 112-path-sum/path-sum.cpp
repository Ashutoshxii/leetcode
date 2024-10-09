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
    void solve(TreeNode* root, int targetSum , bool & ist , int  sum){
      
        if(root==NULL){
            return ; 
        }
        sum += root-> val ; 
        if(root->left==NULL&&root->right==NULL&&sum==targetSum){
            ist = true ; 
            return ; 
        }
         
        solve(root->left , targetSum , ist ,sum  ) ; 
        solve(root->right , targetSum , ist ,sum ) ; 
        return ; 

        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ist = false ; 
          int sum = 0 ; 
        solve(root,targetSum , ist,sum) ; 
        return ist ; 
    }
};