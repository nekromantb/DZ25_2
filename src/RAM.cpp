#include "RAM.h"

double temp_ram[8]= {0,0,0,0,0,0,0,0};
void write(double& a, int i)
{
    temp_ram[i] = a;
}

double read(int i)
{
    return temp_ram[i];
}