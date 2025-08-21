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
    // int average(TreeNode*&root){
    //     int sum = 0 ; 
    //     queue<TreeNode*> q ; 
    //     int leaf = 0 ; 
    //     q.push(root) ; 
    //     while(!q.empty()){
    //         TreeNode* node = q.front() ; 
    //         sum+= node->val  ;
    //         q.pop() ; 
    //         leaf++ ; 
    //         if(node->left)q.push(node->left);
    //         if(node->right)q.push(node->right);
             
    //     }
    //     return sum/leaf ; 
    // }
    // no of ans ,{ no of leaf , sum }
    pair<int,pair<int,int>> dfs(TreeNode*&root ){
        if(root==NULL){
            pair<int,pair<int,int>> p  = {0,{0,0}}; 
            return p ;         
        } 
        pair<int,pair<int,int>> p ; 

        pair<int,pair<int,int>> lefty = dfs(root->left);
        pair<int,pair<int,int>> righty = dfs(root->right) ; 

        int ans = lefty.first + righty.first ; 
        int total = lefty.second.second + righty.second.second + root->val ; 
        int leaf = lefty.second.first + righty.second.first +1  ; 
        int avg = total/leaf ; 
        if(avg==root->val)ans++ ; 

        p.first = ans ; 
        p.second.first = leaf ; 
        p.second.second = total ; 
        return p ; 
        


        

        
    }
    int averageOfSubtree(TreeNode*& root) {
        int ans = 0 ; 
        return dfs(root).first;
        // return dfs.first; 
        
    }
};