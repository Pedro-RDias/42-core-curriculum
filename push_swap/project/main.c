#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 0;
    }

    int *nums = (int *) malloc(sizeof(int) * (argc - 1));
    int i = 1;
    while (i < argc) {
        nums[i - 1] = atoi(argv[i]);
        i++;
    }




}
