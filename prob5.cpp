#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int x;
for (x=1; x <=10; x++)
{
cout << x << "," ;
if ( x==10)
{
for ( x=12 ; x<=30; x+=2)
{
cout << x << ",";
}

}
}

return 0;
}

