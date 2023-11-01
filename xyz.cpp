#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, count, sum;
	int n, k;
	//cin >> t;
	//while ( t-- )
	//{
        count = 0;
	    cin >> n >> k;
	    vector<int> arr(n);
	    vector<int> brr;
	    //int arr[n];
	    for (int i = 0; i < arr.size(); i++) cin >> arr[i];
	    // sub-array
	    for (int i = 0; i <= arr.size()-(k); i++){
            sum = 0;
	        for (int j = i; j < i+k; j++ ){
	            brr.push_back(arr[j]);
	        }
	        for (int j = 0; j < brr.size(); j++){
	            sum = sum | brr[j];
	        }
	        if ( sum & 1 == 1 ) count++;
            brr.clear();
	    }
	    cout << count << endl;
	//}
	return 0;
}
