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

 #include<bits/stdc++.h>
 using namespace std;

class Solution {
public:

    void preorder(TreeNode*root,vector<int>&ans){
        if(root==nullptr){
            ans.push_back(INT_MIN);
            return;
        }

        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }

    void pre(TreeNode*root,vector<int>&arr){
        if(root==nullptr){
            arr.push_back(INT_MIN);
            return;
        }
        arr.push_back(root->val);
        pre(root->right,arr);
        pre(root->left,arr);
    }
    
    bool isSymmetric(TreeNode* root) {
        vector<int>ans;
        vector<int>arr;

        preorder(root->left,ans);
        pre(root->right,arr);

        if(ans.size()!=arr.size()){
            return false;
        }

        for(int i=0;i<ans.size();i++){
            if(ans[i]!=arr[i]){
                return false;
            }
        }
        return true;

    }
};