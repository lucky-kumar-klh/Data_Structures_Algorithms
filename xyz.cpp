#include <iostream>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int n, count = 0;       
	while ( t-- ){
	    cin >> n;
	    int arr[n];
		int sum = 0;
		int min = INT_MAX;
	    for ( int i = 0; i < n; i++ ) cin >> arr[i];
	    for ( int j = 0; j < n; j++ ){
	        if ( min > arr[j] )   {
				min = arr[j];  // get the least number possible
				count = j;
			}
	    }
	    for ( int i = 0; i < n; i++ ){
	        if ( min == arr[count] ){
	            sum = sum + arr[i];
	        }
	    }
	    cout << sum-arr[count] << endl;
	    
	return 0;
        }
}
