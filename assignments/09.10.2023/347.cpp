class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto& x:nums){
            mp[x]++;
        }
        vector<pair<int,int>> v;
        for(auto& x:mp){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),[&](auto&a, auto&b){return b.second<a.second;});

        vector<int> ans;
        for(int i=0;i<k;i++){
            auto& x = v[i];
            ans.push_back(x.first);
        }
        return ans;
        
    }
};