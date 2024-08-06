
class Solution {

public:
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        InOrder(root, arr);
        return arrToBbst(arr,0,arr.size()-1);
    }
    void InOrder(TreeNode* root, vector<int>& arr) {
        if (root == NULL) {
            return;
        }
        InOrder(root->left,arr);
        arr.push_back(root->val);
        InOrder(root->right,arr);
    }
    TreeNode* arrToBbst(vector<int>&arr,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=arrToBbst(arr,start,mid-1);
        root->right=arrToBbst(arr,mid+1,end);
        return root;
    }
};