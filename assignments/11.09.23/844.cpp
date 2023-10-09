class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#'){
                s1.push(s[i]);
            }
            else{
                if(!s1.empty())
                    s1.pop();
            }
           

        }

        for(int i = 0; i < t.length(); i++){
            if(t[i] != '#'){
                s2.push(t[i]);
            }
            else{
                if(!s2.empty())
                    s2.pop();
            }
           
        }


         
        

        return s1==s2;
    }
};