#include <iostream>
#include <cmath>

int main(){

    //Legs
    double a;
    double b;

    //Hypotenouse
    double c;

    std::cout << "Give me the legs of the triangle(add a space between each input): ";
    std::cin >> a >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenouse is " << c;

}