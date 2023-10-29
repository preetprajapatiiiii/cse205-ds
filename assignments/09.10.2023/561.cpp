class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        int i=0;
        int n= nums.size();
        sort(nums.begin(),nums.end());

        while(i<n){
            sum+=nums[i];
            i+=2;
        }
        return sum;
        
    }
};