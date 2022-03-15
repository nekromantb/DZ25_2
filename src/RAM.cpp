#include "RAM.h"


void write(double& a, int i)
{
    temp_ram[i] = a;
}

double read(int i)
{
    return temp_ram[i];
}