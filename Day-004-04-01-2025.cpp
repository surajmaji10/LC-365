struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        help(root, ans);
        return ans;
    }

    void help(TreeNode* root, vector<int>& ans){
        if(root==nullptr){
            return;
        }
        help(root->left, ans);
        ans.push_back(root->val);
        help(root->right, ans);
    }
};