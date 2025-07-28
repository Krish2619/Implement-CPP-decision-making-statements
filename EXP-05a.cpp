// Krishna Chhabaria
//24070123149
// B3
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a the number:  ";
    cin >> a; //input for variable
    if (a > 0) {//if condition fo +ve number
    if (a % 2 == 0) {
        cout << "The number is even." ; //output
    }
    else  {
        cout << "The number is odd." ;
    }}
    else{
        cout << "The number is negative." ;
    }
    return 0;
}

/* output:
Enter a the number:  4
The number is even.
*/