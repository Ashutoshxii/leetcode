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
    void solve(TreeNode*root , int&count , int maxi ){
            if(!root)return ; 

            solve(root->left, count , max(maxi ,root->val  ) ) ; 
            if(root->val >= maxi){
                count++ ; 
                cout<<root->val ; 
            }
            solve(root->right , count , max(maxi , root->val) ) ; 
            return ; 


    }
    int goodNodes(TreeNode* root) {
        int count = 0 ; 
        solve(root , count , INT_MIN ) ; 

        return count ; 
    }
};