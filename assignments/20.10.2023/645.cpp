class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(auto& x:nums){
            mp[x]++;
        }

        vector<int> ans;

        for(auto& x:mp){
            if(x.second==2)
                ans.push_back(x.first);
        }

        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0)
                ans.push_back(i);
        }
        return ans;
        
    }
};