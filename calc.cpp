#include <iostream>
#include <math.h>
using namespace std;
class Calculator
{ 
    private:
    int result,mem;
    int a,b;

    public:
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrts();
    void solveEquation();
    void setMem();
    void printMem();
    void welcome();
    void Operation(const string& input);
};
void Calculator::add()
{
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = (a) + (b);
    cout << "The result is " << result;
}
void Calculator::subtract()
{
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = (a) - (b);
    cout << "The result is " << result;
}
void Calculator::multiply()
{
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = (a) * (b);
    cout << "The result is " << result;
}
void Calculator::divide()
{
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = (a) / (b);
    cout << "The result is " << result;
}
void Calculator::square()
{
    cout << "Enter a number: ";
    cin >> a;
    double parsedA = (a);
    result = parsedA * parsedA;
    cout << "The result is " << result;
}
void Calculator::sqrts()
{
    cout << "Enter a number: ";
    cin >> a;
    result = sqrt(a);
    cout << "The result is " << result;
}
void Calculator::setMem()
{
    cout << "Enter a number: ";
    cin >> a;
    mem = (a);
    cout << "The mem is " << mem;
}
void Calculator::printMem() 
{
    cout << "The mem is " << mem;
}
void Calculator::welcome() 
{
    cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
}

void Calculator::solveEquation()
{
    cout << "Enter the coefficient of the variable: ";
    cin >> a;
    cout << "Enter the constant term: ";
    cin >> b;
    cout<<"Your equation is : "<<a<<"x + "<<b<< endl;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "The equation has infinitely many solutions." << endl;
        }
        else
        {
            cout << "The equation has no solutions." << endl;
        }
    }
    else
    {
        cout << "The solution is: " << (-b) / a << endl;
    }
}

/// parse input and decide which member func to call
void Calculator::Operation(const string& input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrts();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
}

int main(){
    Calculator c;
    c.solveEquation();
}