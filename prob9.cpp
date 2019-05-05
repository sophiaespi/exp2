#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int c;
int r;

cout << "Input number of columns" << endl;
cin >> c;
cout << "Input number of rows" << endl;
cin >> r;

for (int x=1; x<=r; x++)
{
cout << endl ;
for (int x=1; x <=r; x++)
{
cout << "*";
}
}


return 0;
}

