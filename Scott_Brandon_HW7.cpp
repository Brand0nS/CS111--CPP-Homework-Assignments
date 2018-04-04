#include <iostream> // Brandon Scott HW#7
#include <cstdlib>
using namespace std;

int main () {

int c = 1;
while(c <=30){    // The amount of times the asterisk is to be repeated. c <= 30 represents the limit the amount of the asterisks could be added on the line    
cout << "*";
c++;  //shorthand for c+1....adds one asterisk 

}

cout << endl;  //This skips a line (end of the upper asterisk thingy)

int n; // n is for number. Cool right?
cout << " Please enter a number: ";  // User prompt for number.
cin >> n; // User input for number.


while(n<0 || n >= 10){  //when n is less than 0 or greater than or equal to 10 (since it has to be a single-digit number) it terminates the program.
    cout<< "This number is illegal!";
    exit(1);
}

for(int count=1; count <= n;count++){ // for loop. initialize count to equal 1 (since counting begins at one, count less than or equal to n, and count++ is for adding 1 (count is a counter)
    cout << count;
}


 for(int count =n; count >= 1;count--){ // This reverses the order. Changed the sign from less than to greater than, and used count -- for shorthand count - 1
    cout << count;
}


cout << endl; // skips a line
 
for(int c=1;c <= 30; c++){ //Ending row of stars/asterisks
cout << "*";



}

cout<< endl;

return 0; //ends program
}
// Thanks for reading!

