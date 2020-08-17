vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v;
    stack<TreeNode*> s;
    s.push(A);
    while(!s.empty())
    {
        TreeNode* temp2 = s.top();
        v.push_back(temp2->val);
        s.pop();
        if(temp2->right!=NULL)
            s.push(temp2->right);
        if(temp2->left!=NULL)
            s.push(temp2->left);
    }
    return v;
}
