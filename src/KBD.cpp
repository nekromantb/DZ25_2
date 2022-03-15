#include "KBD.h"
#include <iostream>
#include "RAM.h"

void input ()
{
    for (int i =0; i<8; i++) {
        std::cout << "Input " << i << " waiting:" << std::endl;
        double a;
        std::cin >> a;
        write (a,i);
    }

}