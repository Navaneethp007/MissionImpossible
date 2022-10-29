#include <bits/stdc++.h>
using namespace std;

int main() {
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
	    int n;
	    cin >> n;
	    float sol = pow((n*0.143), n);
	    if(sol-floor(sol) < 0.5)
	    cout << floor(sol) << endl;
	    else
	    cout << floor(sol) + 1 << endl;
	}
	return 0;
}
