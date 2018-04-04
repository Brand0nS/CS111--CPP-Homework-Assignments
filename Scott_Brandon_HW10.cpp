#include <iostream> // Scott_Brandon_HW#10
#include <cmath> // for square root
using namespace std;


double dist(int x1, int y1, int x2, int y2) {   //Starting the function. The variables are x1, y1, x2 and y2 taken from the distance formula 


    double ans=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); //the distance formula written out in code.
     return ans; // return the function
    

}

int main() {
    
    int x1, y1; // declaring the ints inside the int main()
     int x2, y2;
      cout << "Please enter a value for (x1, y1): "; //asking user for inputs. 
       cin >> x1 >> y1;
        cout << "Please enter a value for (x2, y2): ";
         cin >>  x2 >> y2;
    

          cout<< "The distance between " << "(" << x1 << "," << y1<< ")" << "and"<< "("<< x2<<","<< y2<<")" << " is " <<   dist (x1, y1, x2, y2);  //Calling the function and printing it.                  


}	