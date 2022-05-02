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
class Solution1 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        auto left=inorderTraversal(root->left);
        ans=left;
        ans.push_back(root->val);
        
        auto right=inorderTraversal(root->right);
        ans.insert(ans.end(),right.begin(),right.end());
        return ans;
        
    }

};
class Solution {
    public:
    vector<int> inorderTraversal(TreeNode* root){
        
        //this time i will make sure nothing to make a duplicate and use insert function which in previous method was taking o(n^2) time complexity
        vector<int> res;
        fun(root,res);
        return res;
        
    }
    private:
        void fun(TreeNode* root,vector<int> &res){
            if(root==NULL){
                return;
            }
        fun(root->left,res);
        res.push_back(root->val);
        fun(root->right,res);
    }
    
};
