void sol(TreeNode* root, map<int, vector<int>>& mp, int slope){
    if(!root)
        return;
        
    mp[slope].push_back(root->val);
    sol(root->left, mp, slope+1);   //slope of left is +1
    sol(root->right, mp, slope);    //slope of right is unchanged
}
vector<int> Solution::solve(TreeNode* root) {
    if(!root)
        return {};
        
    vector<int> v;
    map<int, vector<int>> mp;
    sol(root, mp, 0);
    for(auto i : mp){
        for(auto x : i.second)
            v.push_back(x);
    }
    return v;
}
