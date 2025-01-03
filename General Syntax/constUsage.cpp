#include <iostream>

int main(){

    const double pi = 3.14159;

    /*
        Even if u addded the snippet below:
        pi = 69;
        it wil not be modified as "const" makes that variable to be read only
    */

   std::cout << pi;
   return 0;
}