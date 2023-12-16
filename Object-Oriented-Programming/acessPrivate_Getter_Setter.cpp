// To access private members of class we can use GETTER & SETTER concept
#include <bits/stdc++.h>
using namespace std;
class hero{

  private:

  int health;
  int attack;

  // GETTER => 
  int getHealth(){
    health = 80;
    return health;
  }

  public:

  int age;
};
int main(){
  
  hero ramesh;
  ramesh.age = 18;    // public access modifier

  cout << "Ramesh age : " << ramesh.age << endl;
  // Using getter
  cout << "Ramesh health : " << ramesh.getHealth() << endl;

  return 0;
}