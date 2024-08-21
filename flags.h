#ifndef FLAGS_H
#define FLAGS_H

#include <string.h>
#include <stdio.h>

#include "colorPrint.h"

struct flag {
    const char* shortName;
    const char* fullName;
    const char* description;
};
int checkFlags(int argc, char *argv[], int flagsSize, const flag* flags);

#endif