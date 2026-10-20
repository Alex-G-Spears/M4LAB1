// CSC 134
// M4LAB1
// Alexander
// 10/20/2026

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double height;
    double width;
    cout << "What is the Width?" << endl;
    cin >> width;
    cout << "What is the Height?" << endl;
    cin >> height;

    for (int h=0; h < height; h++){
    cout << endl;
        for (int w=0; w < width; w++) {
        cout << "*" << " ";
        }
    }
    cout << endl;

}