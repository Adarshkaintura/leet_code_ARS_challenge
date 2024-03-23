 stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> ans;
        int n=st.size();
        for(int i=0;i<n;i++){
           int a = st.top();
           ans.push(a);
           st.pop();
        }
        st.push(x);
        for(int i=0;i<n;i++){
           int a = ans.top();
           st.push(a);
           ans.pop();
        }
        return st;
    }
