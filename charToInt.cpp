#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double floatingNumber = -1.3;
    int integerNumber = static_cast<int>(floor(floatingNumber));

    std::cout << "Floating-point number: " << floatingNumber << endl;
    std::cout << "Converted integer: " << integerNumber << endl;

    return 0;
}
