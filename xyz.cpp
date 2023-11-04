#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[8] = {1,2,3,4,5,6,7,8};
	int n = 8;
	for (int i = 1; i < 10; i++){
		int count = 0;
		for (int j = 0; j < 8; j++){
			if ( i == arr[j] ) count++;
		}
		cout << i << " : " << count << " , ";
	}
	
	return 0;
}