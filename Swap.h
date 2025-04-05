#pragma once

void swap(int fatherAge, int sonAge)
{
    int temp;
    //std::cout << "Swap. Before swap, Father's Age: " << fatherAge << " Son's Age: " << sonAge << "\n";
    temp = fatherAge;
    fatherAge = sonAge;
    sonAge = temp;
    std::cout << "Swap. After swap, Father's Age: " << fatherAge << " Son's Age: " << sonAge << "\n";
}
