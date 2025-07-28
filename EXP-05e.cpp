//Krishna Chhabaria
//24070123149
//B3
#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout << "Enter first Number : ";//input for numbers
  cin >> a;
  cout << "Enter second Number : ";
  cin >> b;
  cout << "Enter third Number : ";
  cin >> c;
  if(a>b){
      if(a>c){//nested if
           cout << "1st digit " << a << " is largest" << endl;
      }
  }

  if(b>c){
      if(b>a){
           cout << "2nd digit " << b << " is largest" << endl;
      }
  }
    if(c>b){
      if(c>a){
           cout << "3rd digit " << c << " is largest" << endl;
      }
  }
  return 0;
}
    

/* output :
Enter first Number : 99
Enter second Number : 33
Enter third Number : 2
1st digit 55 is largest
*/ 