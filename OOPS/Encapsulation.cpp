// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming,
// Encapsulation is defined as binding together the data and the functions that manipulate them.
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string name, int age) {  //hides the data from setting and getting
	this->name = name;
	this->age = age;
	}
	void setName(string name) {
	this->name = name;
	}
	string getName() {
	return name;
	}
	void setAge(int age) {
	this->age = age;
	}
	int getAge() {
	return age;
	}
};

int main() {
Person person("John Doe", 30);  

cout << "Name: " << person.getName() << endl; //we cannot set or get the members without knowing the set or get method
cout << "Age: " << person.getAge() << endl;

person.setName("Jane Doe");
person.setAge(32);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

return 0;
}
