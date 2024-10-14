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
    void solve(TreeNode*root , vector<int>& vec){
        if(root==NULL)return ;
        solve(root->left,vec);
        vec.push_back(root->val) ;
        solve(root->right , vec) ;
        return ; 
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1 ;
        // vector<int> v2 ; 
        solve(root1,v1);
        solve(root2,v1);
        sort(v1.begin(),v1.end());
        return v1; 

    }
};