#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	float L, V1, V2;    // v1 -> hair, v2 -> tortoise
	// to win t1 < t2
	// if t1 >= t2 --> print -1
	//cin >> T;
	//while ( T-- ){
	    int t1, t2, diff;     // t1 -> hair, t2 -> tortoise
	    cin >> L >> V1 >> V2;
	    t1 = (ceil)(L/V1);
	    t2 = (ceil)(L/V2);
	    diff = t1-(t2+1);
	    if ( diff >= 0 ) cout << diff << endl;
	    else cout << "-1" << endl;
	//}
	return 0;
}
