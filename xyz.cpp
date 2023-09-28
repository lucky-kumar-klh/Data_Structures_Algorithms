#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = n; i < 8; i++)
	{
		cout << pow(i,3)+1 << " ";
	}
	
	return 0;
}

