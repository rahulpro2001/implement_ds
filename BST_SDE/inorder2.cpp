//using stack 
//in this we are taking stack and if temp is not null then push it into the stack check for the left chlid else think for right if temp is null
  vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode *temp = root;
        while(1)
        {
            if(temp!=nullptr)
            {
                st.push(temp);
                temp = temp->left;
            }
            else
            {
                if(st.empty()) break;
                temp = st.top();st.pop();
                ans.push_back(temp->val);
                temp=temp->right;
            }
        }
    return ans;
    }