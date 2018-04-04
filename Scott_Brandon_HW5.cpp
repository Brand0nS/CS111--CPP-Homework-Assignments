#include <iostream> //Brandon Scott, HW 5
#include <cstdlib>
using namespace std;

int main()
{
double f;    
cout << "Enter the temperature (in Fahrenheit)";
cin >> f;

if  (f <= 0 || f >= 100) {
    cout << " Out of range ";
    exit(1);}
    else  {
    cout << "Celcius: ";    
    cout << (5.0/9)*(f-32);}
    return 0;

}
