

#include <iomanip>
#include <iostream>
using namespace std;
void getinput(int n1, int n2,int n3);
void swap (int num1, int num2, int num3);



void getinput(int n1, int n2,int n3) {
    cout << "enter number 1: ";
    cin >> n1;
    cout << "enter number 2: ";
    cin >> n2;
    cout << "enter number 3: ";
    cin >> n3;
}
void swap (int num1, int num2, int num3){
    cout << num3 << " " << num2 << " " << num1 << " ";
}
// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
 