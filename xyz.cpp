#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> &arr){
	
}
void print(vector<int> &arr){
	for (int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	
}
int main(){

	vector<int> arr = {10,8,2,3,1,4};

    // original array
    print(arr);

	cout << endl;

	sort(arr);

	// sorted array
	print(arr);	

	return 0;
}