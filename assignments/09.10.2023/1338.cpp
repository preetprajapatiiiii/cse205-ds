class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        int n= arr.size()/2;

        for(auto& x:arr){
            mp[x]++;
        }

        vector<pair<int,int>> v;
        for(auto& x: mp){
            v.push_back(x);
        }

        sort(v.begin(),v.end(),[&](auto& a, auto& b){return b.second<a.second;});
        int count=0;
        int sum=0;
        for(int i=0;i<mp.size();i++){
            auto& x=v[i];
            if(sum >= n){
                break;
            }
            else{
                sum += x.second;
                count++;
            }
        }
        return count;


        
    }
};