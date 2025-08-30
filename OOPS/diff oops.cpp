#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Father{
    public:
    string name;
    int age;
    Father(string s,int a){
        this->name=s;
        this->age=a;
    }
    void print(){
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};
class Child:public Father{
    public:
    string c_name;
    Child(string c,string f,int a):Father(f,a){ //Calling parent constructor
        this->c_name=c;
    }
    void printc(){
        print();
    }
};

class Base {
private:
    int x = 1;
protected:
    int y = 2;
public:
    int z = 3;

    void show() {
        cout << x << " " << y << " " << z << endl;
    }
};

class Derived : public Base {
public:
    void access() {
        // cout << x; // ❌ not accessible
        cout << y << endl; // ✅ protected accessible
        cout << z << endl; // ✅ public accessible
    }
};
class D2:public Derived{
    public:
    void access(){
        cout<<y<<endl;
        cout<<z<<endl;
    }
};

class Test {
public:
    static int count; // static variable
    Test() { 
        cout<<count++<<endl; 
        
    }
    static void showCount() { // static function
        cout << "Objects created: " << count << endl;
    }
};
int Test::count = 0; // initialize static member

class Complex {  //Operator overloading
public:
    int r, i;
    Complex(int real, int imag) : r(real), i(imag) {}
    Complex operator + (Complex const &c) {
        return Complex(r + c.r, i + c.i);
    }
};

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    Child c("Ram","Maddy",40);
    c.printc();
    
    D2 d;
    d.access();
    
    Test t1, t2;
    Test::showCount();
    
    Complex c1(10, 5); // Creates a Complex object c1 representing 10 + 5i
    Complex c2(2, 4);  // Creates a Complex object c2 representing 2 + 4i

    // Use the overloaded + operator to add c1 and c2
    Complex sum = c1 + c2;

    std::cout << "Sum of complex numbers: " << sum.r << " + " << sum.i << "i" << std::endl;
 
    return 0;
}
