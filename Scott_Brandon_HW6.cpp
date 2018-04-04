#include<iostream> //Brandon Scott HW6
#include <string> 
using namespace std;

 
int main()
{
int uv, n, s = 0;   // uv stands for the user entered value, n is number, s is sum.

string r;

 
 cout << "Please, enter a number :";  //Asks for the user's input
 cin >> uv;
 n = uv;
 
 
 
while(n <= 0){     // This while loop says if the number that the user entered is less than zero, it asks for another input.
   cout << "This is not a positive integer. Try again:";
    cin >>  n;}
    
    while (n != 0) // This while loop says if the number is not zero, the n is n/10 which strips off the last digit. The std::tostring changes the n to a string class.
    {
        s = s + n % 10;
        n = n / 10;
        r += to_string(n % 10) ; 
		
    }
    
    cout << r << " sum to " << s;   // This prints the results.
}
