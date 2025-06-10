/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

/*
class Solution {
    public:
        vector<int> rightSideView(TreeNode* root) {
            if (root == NULL) {
                return {};
            }
    
            vector<int> result;
    
            queue<TreeNode*> que;
            que.push(root);
    
            while (!que.empty()) {
                int n = que.size();
                TreeNode* node = NULL;
    
                while (n--) {
                    node = que.front();
                    que.pop();
    
                    if (node->left != NULL) {
                        que.push(node->left);
                    }
                    if (node->right != NULL) {
                        que.push(node->right);
                    }
                }
                result.push_back(node->val);
            }
            return result;
        }
    };
*/


// Complete implementation of the code 

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(){
        val= 0;
        left=nullptr;
        right=nullptr;
    }

    TreeNode(int x){
        val = x;
        this->left=nullptr;
        this->right=nullptr;
    }

    TreeNode(int x,TreeNode *left,TreeNode *right){
        val = x;
        this->left=left;
        this->right=right;
    }
};

class Solution {
    public :
    vector<int> rightSideView(TreeNode* root){

        if (root == NULL) {
            return {};
        }

        vector<int> result;
        queue<TreeNode*> que;
        que.push(root);

        while (!que.empty()) {
            int n = que.size();
            TreeNode* node = NULL;

            for (int i = 0; i < n; ++i) {
                node = que.front();
                que.pop();

                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }

            // The last node processed at this level is the rightmost one
            result.push_back(node->val);
        }

        return result;
    }
};

TreeNode* buildSampleTree(){
    TreeNode*node5  = new TreeNode(5);
    TreeNode*node4  = new TreeNode(4);
    TreeNode*node2  = new TreeNode(2,nullptr,node5);
    TreeNode*node3  = new TreeNode(3,nullptr,node4);
    TreeNode*root  = new TreeNode(1,node2,node3);

    return root;

}


int main(){
    TreeNode* root = buildSampleTree();

    Solution sol;
    vector<int> rightView = sol.rightSideView(root);

    cout<<"Right Side View :"<<endl;
    // cout << rightView;

    for(int val : rightView){
        cout<<val<<" ";
    }

    cout<<endl;

    return 0;

}