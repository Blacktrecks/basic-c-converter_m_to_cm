#include <iostream>

using namespace std;

int main()
{
   const double cm_to_meters{100};
   const double cm_to_milimeters{10};

   cout << "-------Welcome to Meters to Centimeters Digital Converter!-----------\n" << endl;
   cout << "------# Please enter the value in meters and the value in cm #-----------" << endl;

   double meters{0};
   double centimeters{0};
   double milimeters{0};

   cin >> meters;
   centimeters =  meters * cm_to_meters;

   cin >> centimeters;
   milimeters = centimeters * cm_to_milimeters;

   cout << meters  << " meters are equal to : " << centimeters << " centimeters" << endl;

   cout << centimeters << " centimeters are equal to : " << milimeters << " milimeters" << endl;



   return 0;
}
