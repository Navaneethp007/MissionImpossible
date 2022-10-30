#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    /*
    *   Used to take input from input.txt
    *   and write output to output.txt
    */
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // * Initializing the variables
    int numberOfTestCases, freq[150] = {0}, i, length;
    string s;
    bool isLapindrome;
    // * Accepting the number of test cases
    cin>>numberOfTestCases;
    // * Executing each test case one by one
    while(numberOfTestCases--) {
        // * Accepting the string for the current test case
        cin>>s;
        // * Calculating the length of the string
        length = s.length();
        // * Assuming that the current string is lapindrome
        isLapindrome = true;
        /*
        *   Incrementing the frequency array for the left half
        *   of the current string
        */
        for(i=0; i<length/2; i++) {
            freq[s[i]-'a']++;
        }
        /*
        *   Decrementing the frequency array for the right half
        *   of the current string
        */
        for(i=(length+1)/2; i<length; i++) {
            freq[s[i]-'a']--;
        }
        // * Iterating the frequency array
        for(i=0; i<26; i++) {
            /*
            *   If the frequency at any index is greater than 0,
            *   the current string is not a lapindrome
            */
            if(freq[i]>0) {
                isLapindrome = false;
            }
            // * Resetting the frequency array for next test case
            freq[i] = 0;
        }
        // * If the current string is a lapindrome, print "YES"
        if(isLapindrome) {
            cout<<"YES"<<endl;
        }
        // * Otherwise print "NO"
        else {
            cout<<"NO"<<endl;
        }
    }
}
