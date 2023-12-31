class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(auto x: stones){
            p.push(x);
        }

        while(p.size()>1){
            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();

            if(x-y!=0){
                p.push(x-y);
            }
        }

        if(p.size()>0){
            return p.top();
        }else return 0;
        
    }
};