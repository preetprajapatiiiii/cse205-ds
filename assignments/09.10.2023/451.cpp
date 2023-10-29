class Solution {
public:
    string frequencySort(string s) {

        map<char,int> mp;
        string temp="";
        for(auto x:s){
            mp[x]++;
        }

        vector<pair<char,int>> ans;
        for(auto x:mp){
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end(),[&]( auto &a, auto &b){return b.second<a.second;});
        
        for(int i=0;i<ans.size();i++){
            auto&pair = ans[i];
            int count=pair.second;
            while(count--){
                temp+=pair.first;
            }

        }return temp;


        
    }
};