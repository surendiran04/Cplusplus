// C++ program to demonstrate
// function overloading or Compile-time Polymorphism
#include <bits/stdc++.h>
using namespace std;
class Geeks {
public:
    // Function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

    // Function with same name but
    // 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

    // Function with same name and
    // 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};

// Driver code
int main()
{
    Geeks obj1;

    // Function being called depends
    // on the parameters passed
    // func() is called with int value
    obj1.func(7);

    // func() is called with double value
    obj1.func(9.132);

    // func() is called with 2 int values
    obj1.func(85, 64);
    return 0;
}

/*--------------------------------------------------------------------------------*/
// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

//  base class declaration.
class Animal {
public:
    string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
    string color = "Grey";
};

// Driver code
int main(void)
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color;
}

/*--------------------------------------------------------------------------------*/
// C++ Program to demonstrate
// the Virtual Function
#include <iostream>
using namespace std;

// Declaring a Base class
class GFG_Base {

public:
    // virtual function
    virtual void display()
    {
        cout << "Called virtual Base Class function"
             << "\n\n";
    }

    void print()
    {
        cout << "Called GFG_Base print function"
             << "\n\n";
    }
};

// Declaring a Child Class
class GFG_Child : public GFG_Base {

public:
    void display()
    {
        cout << "Called GFG_Child Display Function"
             << "\n\n";
    }

    void print()
    {
        cout << "Called GFG_Child print Function"
             << "\n\n";
    }
};

int main()
{
    // Create a reference of class GFG_Base
    GFG_Base* base;
    GFG_Child child;
    base = &child;
    // This will call the virtual function
    base->display();

    // This will call the non-virtual function
    base->print();
}
// output:
// Called GFG_Child Display Function
// Called GFG_Base print function



