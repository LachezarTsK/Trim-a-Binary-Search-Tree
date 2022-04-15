
using namespace std;

// Struct ListNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this struct.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    
public:

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root == nullptr) {
            return nullptr;
        }
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);

        if (root->val < low) {
            TreeNode* temp = root->right;
            root = nullptr;
            return temp;
        }
        if (root->val > high) {
            TreeNode* temp = root->left;
            root = nullptr;
            return temp;
        }
        return root;
    }
};
