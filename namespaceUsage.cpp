#include <iostream>


namespace una{
    int x = 1;
}

namespace dalawa{
    int x = 2;
}

namespace gagamitin{
    int x = 3;
}


int main(){
    using namespace gagamitin;


    std::cout << x;
    std::cout << una::x;
    std::cout << dalawa::x;

    return 0;
}

/* we may also do "using namespace std;" so that we wont need to use the prefix for outputs and string declaration

    A best alternative and safer option would be to declare  it like below:
    using std::count;
    using std::strings;

*/