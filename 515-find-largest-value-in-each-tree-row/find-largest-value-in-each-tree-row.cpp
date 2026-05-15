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
    vector<int> largestValues(TreeNode* root) {
        if(!root)return {} ;
        queue<TreeNode*>q ;
        q.push(root) ; 
        int maxi = INT_MIN ;
        vector<int>ans ; 
        while(!q.empty()){
            int size = q.size() ; 
            // ans = q.front()->val ;
            while(size--){
                TreeNode*temp = q.front() ; q.pop() ; 
                maxi = max(maxi,temp->val) ; 
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right) ; 
                }
            }
            ans.push_back(maxi) ;
            maxi = INT_MIN ; 
        }
        return ans ; 
    }
};