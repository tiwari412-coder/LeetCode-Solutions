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

    void preorder(TreeNode*p,vector<int>&ans){
        if(p==nullptr){
            ans.push_back(INT_MIN);
            return;
        }

        ans.push_back(p->val);
        preorder(p->left,ans);
        preorder(p->right,ans);
    }

    void pre(TreeNode*q,vector<int>&arr){
        if(q==nullptr){
            arr.push_back(INT_MIN);
            return;
        }

        arr.push_back(q->val);
        pre(q->left,arr);
        pre(q->right,arr);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>ans;
        vector<int>arr;
        preorder(p,ans);
        pre(q,arr);

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






