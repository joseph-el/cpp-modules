# include <iostream>
# include <iostream>
# include <limits>
# include <cctype>
# include <iomanip>
#include  <errno.h>
# include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {

    const char *str = "3333333998888883993393322";
    char *endptr;
    errno = 0;

    long num = strtol(str, &endptr, 10);

    if (errno == ERANGE) {
        printf("Out of range\n");
    } else if (errno == EINVAL) {
        printf("Invalid input\n");
    } else if (*endptr != '\0') {
        printf("Invalid characters: %s\n", endptr);
    } else {
        printf("Conversion successful: %ld\n", num);
    }

    return 0;
}