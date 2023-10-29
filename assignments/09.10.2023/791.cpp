class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>charMap;

        for (int i=0; i<order.size(); ++i) charMap[order[i]]=i;
        
        sort(s.begin(), s.end(), [&](const char& a, const char& b){
            return charMap[a] < charMap[b];
        });
        return s;
    }
};