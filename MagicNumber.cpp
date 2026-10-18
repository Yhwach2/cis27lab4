#include <iostream>
using namespace std;

int main() {
    int favNum;
    
    cout << "Please enter any number: ";
    cin >> favNum;
    int step1 = favNum * 2;
    int step2 = step1 + 10;
    int step3 = step2 / 2;
    int finalResult = step3 - favNum;

    cout << "Your magic number is... " << finalResult << "!\n";

    return 0;
}