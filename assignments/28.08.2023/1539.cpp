class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i{0};
        int n{1};

        while(k>0){
            if(i < arr.size() && arr[i] == n){
                i++;
            }
            else{
                k--;
            }

            n++;
            
        }

        return n-1;
    }
};