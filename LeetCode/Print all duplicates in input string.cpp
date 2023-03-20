#include<bits/stdc++.h>
using namespace std;
void dup(string s)
{
    map<char, int> count;
    for (int i = 0; i < s.length(); i++){
    count[s[i]]++;
    }
    for (auto it : count){
        if (it.second > 1)
            cout << it.first << ", count = "<< it.second
            << "\n";
    }
}
    int main()
    {
        string s = "test case";
        dup(s);
        return 0;

    }
