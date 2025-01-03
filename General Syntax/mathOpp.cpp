#include <iostream> // max and min
#include <cmath> // pow, sqrt, abs, round, ceil, floor

int main(){


    double x = 10;
    double y = 2;
    double f = 4;
    double g = -5;
    double q = 6.7;
    double z;
    double m;
    double a;


    //Returns the greater of x and y
    z = std::max(x,y);

    std::cout << z << "\n";

    //Returns the lesser of x and y
    m = std::min(x,y);

    std::cout << m << "\n" ;

    // x raised to the power of y
    a = pow(x,y);

    std::cout << a << "\n";

    // square root of  f
    a = sqrt(f);

    std::cout << a << "\n";

    // absolute value of g
    a = abs(g);
    std::cout << a << "\n";

    // round of q
    a = round(q);
    std::cout << a << "\n";
    
    //ceiling of q
    a = ceil(q);
    std::cout << a << "\n";

    //floor of q
    a = floor(q);
    std::cout << a << "\n";



    return 0;
}