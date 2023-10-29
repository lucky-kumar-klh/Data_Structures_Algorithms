#include <bits/stdc++.h>
using namespace std;
int main() {
	int k = 2;
	vector<int> arr = {1,2,3,4};
	int ans;
    int count = 0, j = 0;
    for (int i = 1; 1; i++){
        if ( i != arr[j] )
		{
			ans = i;
			count++;
		}
		else if ( j < arr.size()-1 ) j++;
		if ( count == k ) break;
    }
	printf("%d", ans);
	return 0;
}
/*
if ( i < arr[j] ){
            if ( i != arr[j] ){
                count++;
                ans = i;
            } 
            if ( count == k ){
                break;
            }
            i++;
        }
        else  j++;
*/