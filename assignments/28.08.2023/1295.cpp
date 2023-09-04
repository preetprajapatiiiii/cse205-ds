class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c{0};
        for(int i = 0; i < nums.size(); i++){

            int a = nums[i];

            string s = to_string(a);
            int b = s.length();

            if(b%2 == 0){
                c = c + 1;
            }

        }return c;
    }
};