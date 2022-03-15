#include <iostream>
#include "KBD.h"
#include "GPU.h"
#include "disk.h"
#include "CPU.h"

#define forever while(true)

int main() {
    std::cout << "Hello, World!" << std::endl;
    forever {
        std::string command;
        std::cout << "Ready for command:" << std::endl;
        std::cin >> command;
        if (command == "sum")
            compute();
        else if (command == "save")
            save();
        else if (command == "load")
            load();
        else if (command == "input")
            input();
        else if (command == "display")
            output();
        else if (command == "exit")
        {
            std::cout << "Shutdown in 1 sec."<<std::endl;
            return 0;
        }
    }
}
