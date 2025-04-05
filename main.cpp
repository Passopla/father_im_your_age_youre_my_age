#include <iostream>
#include "Swap.h"

void swap(int fatherAge, int sonAge);

int main()
{
    int fatherAge = 48, sonAge = 12;
    std::cout << "Main. Before swap, Father's Age: " << fatherAge << " Son's Age: " << sonAge << "\n";
    swap(fatherAge, sonAge);
    //std::cout << "Main. After swap, Father's Age: " << fatherAge << " Son's Age: " << sonAge << "\n";
    return 0;
}
