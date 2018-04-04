#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

int cmonth;
cout << "What is the current month?";
cin >> cmonth;

int month,day,year;
cout << "Enter your birthday (MM DD YY):";
cin >> month >>day>> year;

if(month > 12){
	cout << "This month is not valid." << endl << "Please enter a valid month.";
	exit(1);
}
if(day > 31){
	cout << "This month is not valid." << endl << "Please enter a valid month.";
	exit(1);
}
if(year > 2017){
	cout << "This month is not valid." << endl << "Please enter a valid month.";
	exit(1);
}



if(month< cmonth) {
    cout <<  "User is " <<  2017 - year  <<  "years old" << endl;
    exit(1);
}

if(month > cmonth){
cout <<  "User is " << 2016 - year << " years old";
exit(1);
}
	
return 0;
	

}







