#include <iostream>
#include <cmath>
using namespace std;

int main()

{

int P;
int H;

cout << "Enter desire package" << endl;
cout << "Enter 1 for package A, Enter 2 for package B, Enter 3 for package C = ";
cin >> P;
cout << "Enter number hours consumed " << endl;
cin >> H;

switch ( P )

{
case 1:
if ( H <= 10 )
cout << "Your bill for this month is P" << 995;
else
cout << "Your bill for this month is P" << (995 + (H-10)*20);
break;

case 2:
if ( H <=20)
cout << "Your bill for this month is P" << 1495;
else
cout << "Your bill for this month is P" << 1495 + ( (H-20)*20);
break;

case 3:
if ( H >=0)
cout << "Your bil for this month is P" << 1995;
break;

}
}

