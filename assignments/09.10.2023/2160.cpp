class Solution {
public:
    int minimumSum(int num) {
        string a = to_string(num);
        sort(a.begin(),a.end());

        int x = a[2]-'0'+ 10*(a[0]-'0');
        int y = a[3]-'0'+ 10*(a[1]-'0');

        return x+y;

        
    }
};