#include "CPU.h"
#include "RAM.h"
#include <iostream>

void compute ()
{
    double tmp = 0;
    for (int i =0; i<8;++i)
        tmp += read(i);
    std::cout << "Sum: "<< tmp<< std::endl;
}