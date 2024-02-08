#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand((unsigned)time(0));
    int lower, upper;
    cout << "Enter the lower range of the number:";
    cin >> lower;
    cout << "Enter the upper range of the number: ";
    cin >> upper;

    int randomNumber;
    randomNumber = lower + (rand() % (upper - lower + 1));

        cout << randomNumber << endl;
    
}