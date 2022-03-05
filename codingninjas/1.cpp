// Groot has a very limited vocabulary consisting of only three words. So Rocket thinks of a fun way to increase the vocabulary of Groot by teaching him about hamming distance and anagrams.
// So he uses the following problem and asks Groot to solve this for practice.
// Given a string S containing only lowercase letters of the English alphabet. Find a string R which is an anagram of S such that the hamming distance between R and S is maximum.
// An anagram of a string is another string that contains the exact same characters, only the order of characters can be different.
// Hamming distance between two strings of equal length is the number of positions at which the corresponding character is different.

// Input Format :
 // The first line of input contains a single integer T - the number of test cases.
 // The first and the only line of each test case contains a string S.
// Output Format :
 // Print the maximum hamming distance between S and R.



#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s;
        for(int i=0;i<s.length();i++)
            r[i]=s[i];
        for(int i=0; i<s.length();i++)
            r[s.length()+i]=s[i];
        int maxh=0;
        for(int i=1; i<s.length();i++)
        {
            int curr=0;
            for(int j=i,k=0;j<(i+s.length());j++,k++)
            {
                if(r[j]!=s[k])
                    curr++;
            }
            if(curr==s.length())
                curr=s.length();
            maxh=max(maxh,curr);
        }
        cout<<maxh<<"\n";
    }
}
