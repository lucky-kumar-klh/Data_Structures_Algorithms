#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >> t;
	vector<int> sort1[t/2], sort2[t/2];
	//while ( t-- ){
	//    cin >> t;
	    int a = 2*t;
	    int arr[a], s1 = 0,rev1 = 0, s2 = 0, rev2 = 0;
	    for ( int i = 0 ; i <= 2*t-1; i++ ){
	        cin >> arr[i];
			
	    }
	    for ( int i = t-1, j = 0; i >= 0; i--, j++ ){
	        rev1 = s1*10 + arr[i];
			sort1[j] = arr[i];
	    }
	    for ( int i = t, j = t/2; i < 2*t-1; i++, j++ ){
	        rev2 = s2*10 + arr[i];
			sort2[j] = arr[i];
	    } 
	    if ( rev1 > rev2 ) cout << "Alice" <<endl;
	    else if ( rev1 < rev2 ) cout << "Bob" <<endl;
	    else if ( rev1 == rev2 ) cout << "Tie" << endl;
	//}
	return 0;
}
