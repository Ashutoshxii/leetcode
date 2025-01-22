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
    void solve(TreeNode*root , vector<vector<int>> & ans ,vector<int> prev ){
        if(!root)return ; 
        prev.push_back(root->val) ; 
        if(root->left){
            vector<int> lef = prev  ; 
            
            solve(root->left , ans , lef) ; 
        }
        if(root->right){
            vector<int> righ = prev ; 
            solve(root->right , ans , righ) ; 
        }
        if(!root->left&&!root->right){
            ans.push_back(prev ) ; 
            return ; 
        }
    }
     
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> ans ;
        vector<int> prev ; 
        solve(root,ans ,prev) ;
        vector<string> vec ; 
        for(int i = 0 ; i < ans.size() ; i++){
            string st =""; 
            for(int j = 0 ; j<ans[i].size() ; j++){
                st+=to_string(ans[i][j]) ; 
                if(j!=ans[i].size()-1){
                    st+="->" ; 
                }
            }
            vec.push_back(st) ; 
        }
        return vec ; 
    }
};