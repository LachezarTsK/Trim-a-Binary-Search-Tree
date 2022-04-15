
public class Solution {

    public TreeNode trimBST(TreeNode root, int low, int high) {
        if (root == null) {
            return null;
        }
        root.left = trimBST(root.left, low, high);
        root.right = trimBST(root.right, low, high);

        if (root.val < low) {
            TreeNode temp = root.right;
            root = null;
            return temp;
        }
        if (root.val > high) {
            TreeNode temp = root.left;
            root = null;
            return temp;
        }
        return root;
    }
}

// Class TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this class.
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
