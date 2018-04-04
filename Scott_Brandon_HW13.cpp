#include <iostream> // Scott_Brandon_HW#13
#include <ctime>
#include <cstdlib>
using namespace std; 

int main() {
 srand( time(0) ); //don't ask, just do



int array[100]; // Array size of 100
int n; //User input variable
cout << "How many numbers should be generated? "; //ask the user how many #'s should be generated
cin >> n; //input of the character that the user inputs
while(n>100||n<0){ // if n is more than 100 and less than 0, reinput n
    cout << "Invalid number, Please try again.";
    cin >> n;
}
int sum; // declaring different variables
int average; 
int temp;
int min, max;
int count=n;



 
for(int i=0; i<n; i++){
 array[i]= rand() % 100 + -100;
 
 
}
 
 
cout << "Generate numbers: " ; 

for(int h=0; h<n; h++){
 cout <<  array[h];
 sum+=array[h];
 average=sum/count;
}





cout << "Count: " << count ;
cout << "Sum: " << sum;
cout << "Average: "<< average;
cout << "Min: " << min;
cout << "Max: " << max;
 

return 0;

}