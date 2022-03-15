#include "disk.h"
#include <fstream>
#include "RAM.h"

void save ()
{
    std::ofstream out_file("G:\\work\\Prog\\progs\\DZ25_2\\data.txt");
    for (int i =0; i<8; i++)
    {
        out_file << read(i);
    }
    out_file.close();
}

void load ()
{
    std::ifstream in_file("G:\\work\\Prog\\progs\\DZ25_2\\data.txt");
    for (int i =0; i<8; i++)
    {
        double temp;
        in_file >> temp;
        write (temp, i);
    }
    in_file.close();
}