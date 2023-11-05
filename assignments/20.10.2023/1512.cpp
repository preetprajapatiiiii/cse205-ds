class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        for(auto& x:nums){
            mp[x]++;
        }
        int ans =0;
        for(auto&x : mp){
            int n = x.second;
            ans+= (n*(n-1))/2;
        }
        return ans;

        
    }
};