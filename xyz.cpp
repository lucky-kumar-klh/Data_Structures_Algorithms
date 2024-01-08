#include <bits/stdc++.h>
using namespace std;

int main(){
	//int t;
	//cin >> t;
	//while (t--){
	  string str;
	  cin >> str;
	  int count = str.size();
	  vector<char> left, right; 
	  for (int i = 0; str[i] != '\0'; i++){
	    if (str[i] == '('){
	      //left[i]=str[i+j];
	      left.push_back(str[i]);
				//i++;
	    }
	    else {
	      //right[j] = str[i+j]; 
				right.push_back(str[i]);
	      //j++;
	    }
	  }
	  // for(int i = 0; i < count/2; i++)
	  //   cout << left[i];
	  // for (int i = 0; i < count/2; i++)
	  //   cout << right[i];
		for (auto i : left)
			cout << i;
		for (auto i : right)
			cout << i;
	  cout << endl;
	//}
	return 0;
}