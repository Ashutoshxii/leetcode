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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans ; 
        if(root==NULL)return ans ; 
        queue<TreeNode*> q ;
        q.push(root); 
        bool ist = true ; 
        while(!q.empty()){
            vector<int> vec ; 
            int n = q.size() ; 
            for(int i = 0 ; i < n ; i++){
                TreeNode*temp = q.front() ; 
                q.pop() ; 
                vec.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left) ;
                }
                if(temp->right){
                    q.push(temp->right) ; 
                }
            }
            if(!ist){
                reverse(vec.begin(),vec.end()) ;
            }
            ist=!ist ; 
            ans.push_back(vec) ;
        }
        return ans ; 
    }
};