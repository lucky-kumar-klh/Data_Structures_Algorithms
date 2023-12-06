#include <bits/stdc++.h>
using namespace std;

void printNum(int n){
  
  if (n == 1){
    cout << 1 << " ";
    return;
  }
  printNum(n-1);
  cout << n << " ";

}

int main(){
  int n;
  cin >> n;
  printNum(n);
  cout << endl;
  return 0;
}