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
    void solve(TreeNode*root , vector<vector<int>>&ans){
        if(root==NULL){
            return ;
        }
        queue<TreeNode*> q; 
        
        q.push(root);
        while(!q.empty()){
            vector<int>vec ; 
            int levelsize = q.size() ; 
            for(int i = 0 ; i < levelsize ; i++){
                TreeNode*temp = q.front() ; 
                vec.push_back(temp->val) ;
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(vec);
        }
        return; 
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans ;
        solve(root,ans);
        return ans;
    }
};