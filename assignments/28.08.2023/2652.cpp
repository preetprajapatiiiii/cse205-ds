class Solution {
public:
    int sumOfMultiples(int n) {
        int i = 0;
        int k = 0;
        for(int i = 0; i<n+1; i++)
        {
            if(i%3 == 0 || i%5 == 0 || i%7 == 0)
            {
                k+=i;
            }
        }return k;
    }
};