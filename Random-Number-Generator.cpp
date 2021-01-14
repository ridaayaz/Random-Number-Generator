
#include <iostream>

using namespace std; 
main() 
{ 
    int max; 
    max = 100; 
//Generate the random number under 100 
srand(time(0)); 
cout << "The random number is: "<<rand()%max; 
}