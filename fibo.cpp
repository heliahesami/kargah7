#include <iostream>

using namespace std;

int fibonachi (int number);

int main()
{
    int n;
    cout << "\n\n";
    cout << "enter a number and get its Fibonacci resault--> ";
    cin >> n;

    cout << "Fibonacci "<<(n)<< " = "<< fibonachi(n-1);
    cout << "\n\n";
    return 0;
}

int fibonachi (int number)
{
    if( (number == 0) || (number == 1))
    {
        return number;
    }
    else
    {
         return fibonachi(number-1) + fibonachi(number-2);
    }

}