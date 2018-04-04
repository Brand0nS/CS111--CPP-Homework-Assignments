#include <iostream> //Brandon Scott
using namespace std;

int main(){


string i; // i stands for the item you are ordering
cout << "What item would you like to order? ";
cin	>> i;

int q;  // q stands for quantity 
cout << "How much do you want?: ";
cin >> q;


double p; // p stands for price
cout << "Price: ";
cin >> p;



cout << "Final cost of " << i << " " 
 <<(double) q*p*(0.08875)+q*p;



        
return 0;
}