#include <iostream>		// Brandon Scott HW#8
#include <cstdlib>
using namespace std;

int 
main () {
  
int n;		// n is for the odd positive integer
  cout << "Enter an odd positive number";	// outputs "enter a odd positive number"
  cin >> n;			// User input for variable n.
  
while (n % 2 != 1 || n <= 0){				// while the user input n is not equal to 1 (number is even) or n is less than 0 (negative number)
      cout << "This number is illegal!" << endl << "Please try again";	// print that the number is illegal and prompt the user again
      cin >> n;
}
for (int r = 1; r <= n; r++){				// nested loop for making rows
      for (int c = 1; c <= n; c++){			// nested loop for making column
	  if (c == (n / 2) + 1 || r == 1)
	    cout << "*";	// outputs a star each time the if condition is true
	  else (cout << " ");	// if the if condition is not true, output a space 
	}
cout << endl;	// spaces out each output so that it forms the proper shape.
    }
 return 0;		//ends program
}
// Thanks for reading!
  
 
