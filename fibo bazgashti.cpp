#include <iostream>

using namespace std;

int fibonachi(int number);

int main()
{
    int n = 16;
    cout << "\n\n";

    for( int i = 0 ; i <= n ; i++)
    {

        cout<<fibonachi(i)<<" , ";
    }

     cout << "\n\n";
    return 0;
}

int fibonachi(int number)
{
    if( (number == 0) || (number == 1))
    {
        return number;
    }
    else
    {
        return fibonachi(number - 1) + fibonachi(number - 2);
    }
}