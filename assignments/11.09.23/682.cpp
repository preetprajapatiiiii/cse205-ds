class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> s;
        int sum = 0;

        for(int i = 0; i < o.size(); i++){
            if(o[i] == "D"){
                int x= s.top();
                s.push(2*x);
                sum += s.top();

            }
            else if(o[i] == "C"){
               
                sum -= s.top();
                s.pop();
                
            }
            else if(o[i] == "+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                int c = a + b;
                s.push(a);
                s.push(c);

                sum += s.top();
            }
            else{
                s.push(stoi(o[i]));
                sum += s.top();
            }


        }

        return sum;


    }
};