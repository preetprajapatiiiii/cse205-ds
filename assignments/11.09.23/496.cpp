class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        map<int,int> mp;
        stack <int> s;
        s.push(-1);

        for(int i = nums2.size() - 1; i >= 0; i--){
            while(s.top() != -1 && s.top() <= nums2[i]){
                s.pop();
            }
            mp[nums2[i]] = s.top();
            s.push(nums2[i]);

        }

        vector<int> ans;

        for(auto &x: nums1){
            ans.push_back(mp[x]);
        }

        return ans;
        
    }
};