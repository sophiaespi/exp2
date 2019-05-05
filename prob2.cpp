#include <iostream>
#include <cmath>
using namespace std;

int main()

{
double gallon;
double ConsumptionCharge;
double WaterDemandCharge;
double UnpaidBalance;
int LateCharge;

ConsumptionCharge = 1.10;
WaterDemandCharge = 35;
LateCharge = 20;

cout << "Enter gallon used" << endl;
cin >>gallon;
cout << "Enter unpaid balance" << endl;
cin >> UnpaidBalance;

if ( UnpaidBalance == 0 )
cout << "Your water bill for this month is P " <<(gallon*ConsumptionCharge) + WaterDemandCharge;
else
cout << "Your water bill for this month is P " << (gallon*ConsumptionCharge) + WaterDemandCharge + UnpaidBalance + LateCharge;

return 0;
}

