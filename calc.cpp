#include <iostream>
#include <math.h>
using namespace std;
class Calculator
{ 
    private:
    int result,mem;
    int a,b;
    string input;

    public:
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrts();
    void sinA();
    void cosA();
    void tanA();
    void lnA();
    void logA();
    void absA();
    void powA();
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
void Calculator::sinA()
{ 
    cout << "Enter a number: ";
    cin >> a;
    result = sin((a));
    cout << "The result is " << result;
}
void Calculator::cosA()
{ 
    cout << "Enter a number: ";
    cin >> a;
    result = cos((a));
    cout << "The result is " << result;
}
void Calculator::tanA()
{ 
    cout << "Enter a number: ";
    cin >> a;
    result = tan((a));
    cout << "The result is " << result;
}
void Calculator::lnA()
{ 
    cout << "Enter a number: ";
    cin >> a;
    result = log((a));
    cout << "The result is " << result;
}
void Calculator::logA()
{
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    result = log((b))/log((a));
    cout << "The result is " << result;
}
void Calculator::absA()
{ 
    cout << "Enter a number: ";
    cin >> a;
    result = abs((a));
    cout << "The result is " << result;
}
void Calculator::powA()
{
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the exponent: ";
    cin >> b;
    result = pow((a),(b));
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
    cout << "\n\nEnter one of:\n"
    << "add, sub, divide, multiply, sqrt, square, setmem, printmem, sin, cos, log, tan, ln, abs, pow\n"
    << "or exit\n";
    
}
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
    else if (input == "sin")
    {
        sinA();
    }
    else if (input == "cos")
    {
        cosA();
    }
    else if (input == "tan")
    {
        tanA();
    }
    else if (input == "ln")
    {
        lnA();
    }
    else if (input == "log")
    {
        logA();
    }
    else if (input == "abs")
    {
        absA();
    }
    else if (input == "pow")
    {
        powA();
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
int main()
{
    string input;
    Calculator c;
    c.welcome();
    cin>>input;
    c.Operation(input);
    return 0;
}