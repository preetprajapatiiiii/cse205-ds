class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> ans ;
    
    
    sort(arr.begin(),arr.end());
    int result= 100000;
    
    for(int i=0;i<arr.size()-1;i++){
         result = min(abs(arr[i]-arr[i+1]), result);

    }
    for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])==result){
            ans.push_back({arr[i],arr[i+1]});
            
        }
    }return ans;

        
    }
};