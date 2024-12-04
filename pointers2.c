#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *i = &arr[0]; 
    int *j = &arr[4]; 
    printf("Address stored in i: %p\n", i);
    printf("Value pointed to by i: %d\n", &i);
    printf("Address stored in j: %p\n", j);
    printf("Value pointed to by j: %d\n", *j);

    return 0;
}