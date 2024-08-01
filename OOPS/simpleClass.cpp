#include <iostream>
using namespace std;
class Person{
private:    
  int age;
  string name;
public:
  Person(int age,string name){
      this->age=age;
      this->name=name;
  }
  void greet(){
      cout<<name<<endl<<age;
  }
};
int main() {
    Person p1(23,"nam1");
    p1.greet();

    return 0;
}
