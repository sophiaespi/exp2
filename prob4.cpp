#include <iostream>
using namespace std;

int main()
{
int x, y, z;

cout << "Determine the largest of the 3 numbers"<<endl;

cout << "Enter the 3 numbers: "<<endl;
cin >> x >> y >> z;

if ( x>y )
{

if ( x>z )
{
cout << x << " is the largest number among the three" << endl;
}
else
{
cout << z << " is the largest number among the three" << endl;
}
}

else if ( x<y )
{
if ( y>z )
{
cout << y << " is the largest number among the three" << endl;
}
else 
{
cout << z << " is the largest number among the three: << endl;
}
}

return 0;
}

