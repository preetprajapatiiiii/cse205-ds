#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    long long int a; cin >> a;
    long long int s; cin >> s;
    long long int t = s - a;

    string s1 = to_string(a);
    string s2 = to_string(t);

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    
        if(s1 == s2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    
    

    
     

}