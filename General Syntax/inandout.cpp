#include <iostream>
#include <string>

int main(){

    // output = cout << (extractor operator)
    // input = cin >> (insertion operator)

    std::string name;
    std::string fullname;

    std::cout <<  "What's your name?: ";
    std::cin >> name;
    // this reading of inputs ends if it has hit a space or see's space so the firts name is only possible


    std::cout <<  "Hello! I'm " << name << "\n";

    std::cout <<  "What's your full name?: ";
    std::getline(std::cin >> std::ws, fullname);

    std::cout <<  "Hello! I'm " << fullname;
    // this reading of inputs ends if it has hit a space or see's space so the firts name is only possible
    return 0;
}