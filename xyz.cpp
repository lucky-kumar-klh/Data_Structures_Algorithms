#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> &arr){
	for (int i = 0; i < arr.size(); i++){ // loop will run n-1 times
		bool swapping = 0;
		for (int j = 0; j < arr.size()-1; j++){
			if ( arr[j] > arr[j+1] ){
				swap(arr[j], arr[j+1]);
				swapping = 1;  // check if swapping occured or not
			}
		}
		if ( swapping == 0 ) break;
	}
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