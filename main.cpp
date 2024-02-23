#include <iostream>

using namespace std;
int main() {
    int choice = 0;
    do {
        cout << "\n 1) Draw a horizontal line";
        cout << "\n 2) Draw a vertical line";
        cout << "\n 3) Draw a square";
        cout << "\n 4) Draw a rectangle";
        cout << "\n 5) ";
        cin  >> choice;
    } while (choice != 5);
    cout << "Hello, World!" << std::endl;
    return 0;
}
