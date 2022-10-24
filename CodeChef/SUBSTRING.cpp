//codechef username: itshrishi_t
//codechef solution for the problem code: SUBSTRING

#include <bits/stdc++.h>
using namespace std;

int main() {
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
	    string str;
	    cin >> str;
	    int len = 0;
	    int max = 0;
	    for(int i = 1;i<str.length()-1;i++){
	        if(str[i] != str[0] && str[i] != str[str.length()-1]) max += 1;
	        else{
	        if(len < max) len = max;
	        max = 0;
	        }
	    }
	    if(max == 0 && len == 0){
	        len = -1;
	        cout << len << endl;
	    }
	    else if(len < max) cout << max << endl;
	    else cout << len << endl;
	}
	return 0;
}
