/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  PSI_Debugging.hpp

********************************************* */

#ifndef PSI_DEBBUGING
#define PSI_DEBBUGING

#include "../PSI_ProgrammingUtilities.hpp"

void PSI_SPACEPARSER(char *code);

#define PSI_STARTUPMARKER(x) \
    {                        \
    }

#define PSI_ADDWATCHLIST(x) \
    {                       \
    }

#define PSI_DYNAMICDEBUG(x) \
    {                       \
    }

#define SPI_STATICDEBUG(x) \
    {                      \
    }

#define PSI_SPACE(x)         \
    {                        \
        PSI_SPACEPARSER(#x); \
        x                    \
    }

#define PSI_TIME(x, SECTION)                                               \
    {                                                                      \
        clock_t start, end;                                                \
        start = clock();                                                   \
        x                                                                  \
            end = clock() - start;                                         \
        printf("%s time: %.27f", section, ((double)end / CLOCKS_PER_SEC)); \
    }

#define PSI_SPACETIME(x, SECTION)                                          \
    {                                                                      \
        clock_t start, end;                                                \
        start = clock();                                                   \
        PSI_SPACE(x)                                                       \
        end = clock() - start;                                             \
        char *section = #SECTION;                                          \
        printf("%s time: %.27f", section, ((double)end / CLOCKS_PER_SEC)); \
    }

#endif