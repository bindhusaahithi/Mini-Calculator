#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./hello <number>\n");
        return 1;
    }

    // Read input string and convert to double
    double x = atof(argv[1]);

    // Print the input
    printf("You entered: %f\n", x);

    // Example: categorize CPU usage
    if (x < 2) {
        printf("Low CPU usage!\n");
    } else if (x > 10) {
        printf("High CPU usage!\n");
    } else {
        printf("Moderate CPU usage!\n");
    }

    return 0;
}
