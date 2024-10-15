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
    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right) ;
        int maxi = max(left,right) + 1 ;
        return maxi ; 
    }
    void getsum(TreeNode* root,int level ,int maxLevel ,int&sum){
        if(root==NULL)return ;
        if(level==maxLevel){
            sum+=root->val ;
        }
        getsum(root->left,level+1,maxLevel,sum) ; 
        getsum(root->right,level+1,maxLevel,sum) ; 
        return ; 
    }
    int deepestLeavesSum(TreeNode* root) {
        // return height(root) ; 
        int h = height(root) ;
        int sum = 0 ;
        getsum(root,1,h,sum);
        return sum ;
    }
};