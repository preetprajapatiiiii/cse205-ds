class Solution {
public:
    void sub(int i, vector<int>& nums, vector <int>& temp, vector<vector<int>>& ans){
        if(i == nums.size()){
            ans.push_back(temp);
        }
        else{

            temp.push_back(nums[i]);
            sub(i+1,nums,temp,ans);

            temp.pop_back();
            sub(i+1,nums,temp,ans);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector <int> temp;
        sub(0,nums,temp,ans);
        return ans;
    }
};