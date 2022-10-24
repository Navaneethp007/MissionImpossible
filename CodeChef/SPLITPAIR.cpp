//codechef username: itshrishi_t
// solution for the problem code: SPLITPAIR

#include <iostream>
using namespace std;

int main() {
	int test_cases;
	cin >> test_cases;
	while (test_cases--){
	 int num;
	 cin >> num;
         int last = num % 10;
	 int des = 0;
	 if(last%2 == 0) des = 1;
         num /= 10;
         int t = num;
	 int ans = 0;
	 while (t != 0){
          int rem = t % 10;
          if (des == 1){
	   if(rem%2 == 0){
	    ans = 1;
	    break;
	  }
	}
        else{
	 if(rem%2 != 0){
	   ans = 1;
	   break;
	 }
	}
        t /= 10;
      }
      if(ans == 1) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    return 0;
}
