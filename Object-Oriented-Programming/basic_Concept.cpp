/*
Access Modifiers: To determine which class members are accessible to other classes and functions, and which are not.
There are of 3 types:
1. Public --> members/attributes can be acessed by anywhere
2. Private (By Default) --> Can be acessed by only within that class
3. Protected 
*/
#include <bits/stdc++.h>
using namespace std;
class student{

  // members

  public:     // acessed from anywhere
  char name;
  int height;

  private:       // can't be acessed outside this class
  float weight;

  void display(){   
    cout << weight << endl;   // weight is an private class
  }                         

};
int main(){

  student s1;
  s1.name = 'A';
  s1.height = 176;

  return 0;
}