class Solution {
public:
    void reverseString(vector<char>& s) {
   
    int len = s.size();
    int n = len-1;
    int i = 0;
    while(i<=n){
        
        swap(s[i],s[n]);
        n = n-1;
        i = i+1;  
    }
    
    }

};