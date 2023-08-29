#include <iostream>
using namespace std;
int main(){
    int num ;
    cout << "Enter any number : ";
    cin >> num;
    if ( num > 0 ) cout << num << " is a Positive number"<< endl;
    else if ( num == 0 ) cout << num << " is a Nuetral number"<< endl;
    else cout << num << " is a Negative number"<< endl;
}