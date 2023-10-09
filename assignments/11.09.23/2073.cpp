class Solution {
public:
    int timeRequiredToBuy(vector<int>& ts, int k) {
        
        int res = 0;
        
        while (ts[k]) {
            
            for (int i = 0, lmt = ts.size(); i < lmt && ts[k]; i++) {
               
                if (ts[i]) {
                    ts[i]--;
                    res++;
                }
            } 
        }
        return res;
    }
};