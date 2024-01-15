#include <bits/stdc++.h>
using namespace std;

int main(){
  // int num = 6;
  // int cnt = __builtin_popcount(2);
  // cout << cnt << "\n";
	string s;
  cout << "Enter any string : \n";
  cin >> s;
	
  sort(s.begin(), s.end());

  do {
		cout << s << endl;
	} while (next_permutation(s.begin(), s.end()));
  return 0;
}
