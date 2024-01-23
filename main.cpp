#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int result_add = add(5, 4);
    int result_multiply = multiply(2, 7);

    cout << "Addition result : " << result_add << endl;
    cout << "Multiplication result : " << result_multiply << endl;

    return 0;
}