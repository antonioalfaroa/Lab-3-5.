#include <iostream>
using namespace std;

class Sample{
  private:
    int x;
    double y;
  public :
    Sample(){

      x = 0;
      y = 0;
    } //Constructor 1
    Sample(int xx){
      x = xx;
      y = 0;
    } //Constructor 2
    Sample(int xxx, int yyy){
      x = xxx;
      y = yyy;
    } //Constructor 3
    Sample(int xxxx, double yyyy){
      x = xxxx;
      y = yyyy;
    } //Constructor 4

   
};



int main(){

Sample();
 
Sample(34);
 
Sample(24,45);

Sample(87, 45.6);
 
  
}


//a. Write the definition of the constructor 1 so that the private member variables are initialized to 0
//b. Write the definition of the constructor 2 so that the private member variable x is initialized according to the value of the parameter, and the private member variable y is initialized to 0
//c. Write the definition of the constructors 3 and 4 so that the privatemember variables are initialized according to the values of the parameters.