#include "colorPrint.h"

void setRed(){
    printf("\033[1;31m");
}

void setGreen(){
    printf("\033[1;32m");
}

void resetColor(){
    printf("\033[1;0m");
}