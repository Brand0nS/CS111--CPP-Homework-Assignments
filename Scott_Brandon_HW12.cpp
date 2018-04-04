#include <iostream> //Scott_Brandon_HW#12 
#include <cmath>
using namespace std;

int firstDigitLoop(int x){ //This is the firstDigitLoop function. It states while x is greater than or equal to 10,
	while(x>=10){ // to divide x by 10, then return x.
		  x=x/10;
	     	}
	  return x;
		                  }

  int firstDigit(int y){ // This is the second HW function firstDigit, which is a recursive version of firstDigitLoop.
     if(y>=10){ // This does the same as function HW1, except it uses recursion.
        firstDigit(y/10);
                       }
    else return y;
                       }

      void swap3 (int &a, int &b, int &c) { // This is the third HW function swap3,which swaps 3 digits instead of 2.
     	int temp = a; // temp becomes a, a becomes b, b becomes c and c becomes temp.
	      a = b;
         	b = c;
            	c = temp;
                                          } 

              int main() {  // This is the main. It declares x and uses user input. Then it calls the firstDigitLoop on x.
                 int x;
                 cout << "Please enter your number";
                 cin >> x;
                cout << firstDigitLoop(x) << endl; 

                  int y; // This declares y and uses user input. Then it calls the firstDigit function on y.
	              cout << "Please enter your number";
                  cin >> y;
                  cout<< firstDigit(y) << endl;

                    int a = 3, b = 5, c = 2; //This defines a, b and c as 3, 5 and 2.
                	cout << "a = " << 3 << ", b = " << 5 << ",c =" << 2 << endl; // then it prints these values to the user

	                 swap3 (a, b, c);
                     cout << "swap3: a = " << a << ", b = " << b << ",c =" << c << endl;// and finally calls the swap3 function

	                 return 0;	// to swap these numbers.
	
	
	
	
                          	}