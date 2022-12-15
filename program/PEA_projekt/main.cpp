#include "Start.hpp"
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    Start program;
    program.welcomeMessage();
    return 0;
}
