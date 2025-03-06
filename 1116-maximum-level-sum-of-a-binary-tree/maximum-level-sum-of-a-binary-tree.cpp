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
    int maxLevelSum(TreeNode* root) {
        int level = 0 ; 
        int ans = INT_MIN  ;
        queue<TreeNode*> q ; 
        int count = 1 ; 
        q.push(root) ;

        while(!q.empty()){
            int size = q.size() ;
            int sum = 0 ;  
            for(int i = 0 ; i < size ; i++){
                TreeNode* first = q.front();
                q.pop() ; 
                sum += first->val ; 

                if(first->left){
                    q.push(first->left) ; 
                } 
                if(first->right){
                    q.push(first->right) ; 
                } 
            }
            if(sum>ans){
                ans = sum ; 
                level = count ; 
            }
            count ++ ; 
        }
        return level ;
    }
};