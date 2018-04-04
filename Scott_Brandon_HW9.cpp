#include <iostream>		// Brandon Scott HW#9
#include <cstdlib>
using namespace std;

int 
main () {
  
int n;		// n is for the odd positive integer
  cout << "Enter a positive number";	// outputs "enter a positive number"
  cin >> n;			// User input for variable n.
  
while (n <= 0){				// while the user input n is less than 0 (negative number)
      cout << "This number is illegal!" << endl << "Please try again";	// print that the number is illegal and prompt the user again
      cin >> n;
}
for (int r = 1; r <= n; r++){				// nested loop for making rows
      for (int c=1 ; c <= n; c++){			// nested loop for making column
	  if  ((r%3) == 0 )  // if row size mod 3 is equal to zero, print 0 if not print X
	    cout << "O";	// outputs an O each time the if condition is true
	else (
	    cout << "X");
	}
	
cout << endl;	// spaces out each output so that it forms the proper shape.
    }
	
	cout<< endl;
	
for (int r = 1; r <= n; r++){				// nested loop for making rows
      for (int c=1 ; c <= n; c++){			// nested loop for making column
	  if  ((c % 4)== 0)
	    cout << "O";	// outputs an O each time the if condition is true
	else (
	    cout << "X");
	}
	
cout << endl;	// spaces out each output so that it forms the proper shape.
    }
 return 0;		//ends program
}


// Thanks for reading!
  
 
