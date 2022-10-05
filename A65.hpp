

#include <iomanip>
#include <iostream>
using namespace std;

void getinput(int n1, int n2,int n3) {
    cout << "enter number 1: ";
    cin >> n1;
    cout << "enter number 2: ";
    cin >> n2;
    cout << "enter number 3: ";
    cin >> n3;
}
void swap (int n1, int n2, int n3){
    int tn1,tn2,tn3;
    tn1 = n1;
    tn2 = n2;
    tn3 = n3;
    n1 = tn3;
    n2 = tn1;
    n3 = tn2;
    cout << n1 << n2 << n3; 
}

void swaptwo (int n1, int n2){
     int tn1,tn2;
    tn1 = n1;
    tn2 = n2;
    n1 = tn2;
    n2 = tn1; 
    cout << n1 << n2; 
}
// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two value (a, b) to (b, a)
 