#include <iostream>
using namespace std;

class B; // forward declaration
class A
{
private:
    int numA;

public:
    A() : numA(12) {}
    // friend function declaration
    friend int add(A, B);
};

class B
{
private:
    int numB;

public:
    B() : numB(1) {}
    // friend function declaration
    friend int add(A, B);
};

// Function add() is the friend function of Class A & B
// It helps to access the 'private' data member variables of classes to which it is friend
// In this example, the private member variables are numA & numB of the class A and class B, respectively

int add(A objectA, B objectB)
{
    return (objectA.numA + objectB.numB);
}

int main()
{
    A objectA;
    B objectB;
    cout << "Sum: " << add(objectA, objectB) << endl;
    
    return 0;
}