#include <iostream>
#include <cmath>
using namespace std;

int main()

{
double x;
double y;
double z;

cout << "Enter x, y, and z value" << endl;
cin >> x >> y >> z;

if (x==1 && y>1 && y<5)
cout << "The value of V is " << x*y*z << endl;

if (x==1 && y>=5)
cout << "The value of V is " << x + (y/z) << endl;

if (x==2 && y<=5)
cout << "The value of V is " << abs((x-y)/z) << endl;

if (x==2 && y>5)
cout << "The value of V is " << x - sqrt(y+z)  <<endl;

else if (x>2)
cout << "The value of V is " << x+y+z << endl;

return 0;
}

