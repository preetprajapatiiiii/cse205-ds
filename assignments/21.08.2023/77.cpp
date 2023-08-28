class Solution {
public:
    void comb (int i, int n, int k, vector<int> &temp, vector<vector<int>> &ans){
        if(k == 0){
            ans.push_back(temp);
            return;
        }
        if(i>n){
            return;
        }

        temp.push_back(i);
        comb(i+1,n,k-1,temp,ans);

        temp.pop_back();
        comb(i+1,n,k,temp,ans);
    }
    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> ans;
        vector<int> temp;
        comb(1,n,k,temp,ans);
        return ans;
        
    }
};