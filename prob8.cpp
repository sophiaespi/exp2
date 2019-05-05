#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int n;
int i;

cout << "This program prints multiplication table of: " << "\n";
cout << "Enter the number:  ";
cin >> n;
for (i=1; i<=12; i++)
{
cout << n;
cout<< " * ";
cout<< i;
cout<< " = ";
cout<< n*i;
cout<< "\n";

}

return 0;
}

