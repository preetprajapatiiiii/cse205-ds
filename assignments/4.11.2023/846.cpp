class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) {
            return false;
        }
        
        // sort(hand.begin(), hand.end());
        
        map<int, int> m;
        for (auto x : hand) {
            m[x]++;
        }
        
        while (!m.empty()) {
            int key = m.begin()->first;
            for (int i = 0; i < groupSize; i++) {
                if ( m[key + i] == 0) {
                    return false;
                }
                else {
                    m[key + i]--;
                    if (m[key + i] == 0) {
                        m.erase(key + i);
                    }
                }
            }
        }
        return true;
    }
};
