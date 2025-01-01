#include <iostream>


namespace una{
    int x = 1;
}

namespace dalawa{
    int x = 2;
}

int main(){

    int x = 0;


    std::cout << x;
    std::cout << una::x;
    std::cout << dalawa::x;

    return 0;
}