#include "flags.h"


int checkFlags(int argc, char *argv[], int flagsSize, const flag* flags){
    while (--argc) {
        if (strcmp(argv[argc], flags[0].fullName) == 0 || strcmp(argv[argc], flags[0].shortName) == 0) {
            for (int i = 0; i < flagsSize; ++i) {
                printf("%s %s: %s\n", flags[i].shortName, flags[i].fullName, flags[i].description);
            }
            return -1;
        }
        for (int i = 1; i < flagsSize; ++i) {
            if (strcmp(argv[argc], flags[i].fullName) == 0 || strcmp(argv[argc], flags[i].shortName) == 0) return i;
        }
        printfRed("Error: unknown flag: %s\n", argv[argc]);
        return -1;
    }
    return 0;
}