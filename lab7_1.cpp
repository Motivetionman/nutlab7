#include <iostream>
using namespace std;

int main() 
{
    int a = 20; 
    int b = 30;
    int c = 4;
    double output;

    output = a - static_cast<double>(b) / c;
    cout << "output: " << output << endl;
    return 0;
}
