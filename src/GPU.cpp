#include "GPU.h"
#include <iostream>
#include "RAM.h"

void output ()
{
    for (int i =0; i<8; i++) {
        std::cout << " " << read(i) << " " ;
    }

}
