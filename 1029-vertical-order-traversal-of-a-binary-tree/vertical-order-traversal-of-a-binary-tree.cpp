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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans ; 
        if(!root){
            return ans ; 
        }

         // Map: horizontal distance -> level -> nodes (sorted automatically in multiset)
        map<int, map<int, multiset<int>>> nodes;

        // Queue: stores TreeNode*, horizontal distance, and level
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while(!q.empty()){
            auto topPair = q.front() ;
            q.pop() ;


            TreeNode*topNode = topPair.first ; 
            int hd = topPair.second.first ;
            int lvl = topPair.second.second ;  

            nodes[hd][lvl].insert(topNode->val ) ; 

            if(topNode->left){
                q.push({topNode->left, {hd - 1, lvl + 1}}) ; 
            }
            if(topNode->right){
                q.push({topNode->right, {hd + 1, lvl + 1}}) ; 

            }
        }
        for (auto& [hd, levels] : nodes) {
            vector<int> col;
            for (auto& [lvl, vals] : levels) {
                col.insert(col.end(), vals.begin(), vals.end());
            }
            ans.push_back(col);
        }
        return ans ; 

    }
};