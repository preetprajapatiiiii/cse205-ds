class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {

        int n=a.size();
        int m= a[0].size();
        int ans=0;

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=a[i][j];

            }ans=max(ans,sum);
        }return ans;
        
    }
};