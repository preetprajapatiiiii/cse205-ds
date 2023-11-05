class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> p;
        int n = score.size();

        for(int i=0;i<n;i++){
            p.push({score[i],i});
        }

        vector<string> res(n);

        for(int i=0;i<n;i++){
            pair<int,int>t = p.top();
            p.pop();
            
            int b = t.second;
            if(i==0){
                res[b]="Gold Medal";
            }
            else if(i == 1) {
                res[b] = "Silver Medal";
            }
            else if(i == 2) {
                res[b] = "Bronze Medal";
            }else{
                string temp=to_string(i+1);
                res[b]=temp;
            }
        }

        return res;

        


    
    }
};