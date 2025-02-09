#include <cstdio>
#include <iostream>
#define PROJECT_NAME "rvtrans"

int main(int argc, char **argv) {
    if(argc != 1) {
        printf("%s takes no arguments.\n", argv[0]);
        return 1;
    }
    std::cout <<"This is project " << PROJECT_NAME << std::endl;
    return 0;
}
