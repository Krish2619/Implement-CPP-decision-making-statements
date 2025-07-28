// Krishna Chhabaria
// 24070123149
// B3
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout<<"enter month 1-12 of the year \n" ;//menu
    cout<<"Enter your choice: ";
    cin >> choice;
    switch(choice) { //switch case
        case 1:
        cout<<"The month is january ";
        break;
        case 2:
        cout<<"The month is february ";
        break;
        case 3:
        cout<<"The month is march";
        break;
        case 4:
        cout<<"The month is april";
        break;
        case 5:
        cout<<"The month is may";
        break;
        case 6:
        cout<<"The month is june ";
        break;
        case 7:
        cout<<"The month is july";
        break;
         case 8:
        cout<<"The month is August";
        break;
        case 9:
        cout<<"The month is september";
        break;
         case 10:
        cout<<"The month is october";
        break;
         case 11:
        cout<<"The month is november";
        break;
         case 12:
        cout<<"The month is december";
        break;
        default:
        cout<<"INVALID CHOICE!!!!";//default statement
    }
}



/* output :
enter month 1-12 of the year 
Enter your choice: 6
The month is june
*/