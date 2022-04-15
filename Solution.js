
// Function ListNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this function.
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}

/**
 * @param {TreeNode} root
 * @param {number} low
 * @param {number} high
 * @return {TreeNode}
 */
var trimBST = function (root, low, high) {
    if (root === null) {
        return null;
    }
    root.left = trimBST(root.left, low, high);
    root.right = trimBST(root.right, low, high);

    if (root.val < low) {
        let temp = root.right;
        root = null;
        return temp;
    }
    if (root.val > high) {
        let temp = root.left;
        root = null;
        return temp;
    }
    return root;
};
