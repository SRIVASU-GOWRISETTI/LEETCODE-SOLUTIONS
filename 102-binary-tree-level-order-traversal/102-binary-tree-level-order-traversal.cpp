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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==NULL){
            return ans ;
        }
         queue<TreeNode*> holder;
        holder.push(root);
        TreeNode* temp;
        int size;
        while(!holder.empty()){
            size=holder.size();
            vector<int> a;
            for(int i=0;i<size;i++){
                temp=holder.front();
                holder.pop();
                a.push_back(temp->val);
                
                if(temp->left) holder.push(temp->left);
                if(temp->right) holder.push(temp->right);
                
            }
            ans.push_back(a);
            
        }
        return ans;
        
        
        
    }
};