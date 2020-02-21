#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::vector<int> vect = {1,5,3,8,6,7,10,2,4,9,11};
    BST mytree(vect);
    
    std::cout << mytree.find_height();

    return EXIT_SUCCESS;
}