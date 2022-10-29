#include <iostream>
using namespace std;

int main() {
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    int count = 0;
	    for (int i : arr){
	    if(i >= 10 && i <= 60)
	    count ++;
	    }
	    cout << count << endl;
	}
	return 0;
}
