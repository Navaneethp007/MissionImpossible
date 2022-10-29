#include <iostream>
using namespace std;

int main() {
	int test_cases;
	cin >> test_cases;
    while(test_cases--){
        int x,y,z;
        cin >> x >> y >> z;
        int n;
        n = (z-y)/x;
        cout << n << endl;
    }
	return 0;
}
