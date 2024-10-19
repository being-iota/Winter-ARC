/ User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

int nodeCount(struct Node* root) {
    if(!root) return 0;
    int left = nodeCount(root->left);
    int right = nodeCount(root->right);
    return left + right + 1;
}

bool isCBT(struct Node* root, int i, int &n) {
    if(!root) return true;
    if(i>n) return false;
    int l = isCBT(root->left, 2*i, n);
    int r = isCBT(root->right, 2*i+1, n);
    return l && r;
}

bool isMaxOrder(struct Node* root) {
    if(!root) return true;
    int l = isMaxOrder(root->left);
    int r = isMaxOrder(root->right);
    int ans = false;
    if(!root->left && !root->right) {
        ans = true;
    }
    else if(root->left && !root->right) {
        ans = root->data > root->left->data;
    }
    else {
        ans = root->data > root->left->data && root->data > root->right->data;
    }
    return ans && l && r;
}

class Solution {
  public:
    bool isHeap(struct Node* tree) {
     int n = nodeCount(tree);
     int i = 1;
    
    return isCBT(tree, i, n) && isMaxOrder(tree);
    }
};