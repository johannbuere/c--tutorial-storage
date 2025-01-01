#include <iostream>
#include <vector>



/*

                                            data type name
                                                    |
                                                    v
*/
//typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;

int main(){

    text_t firstName = "Johann";

    std::cout << firstName;

    return 0;
}