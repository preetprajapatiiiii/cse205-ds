class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        st.push(-1);
        int sz=nums.size();
        vector<int>ans(sz);
        
        for(int i=2*sz-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%sz]){
                st.pop();
            }
            if(st.empty()) st.push(-1);
            ans[i%sz]=st.top();
            st.push(nums[i%sz]);
        }
        return ans;
    }
};