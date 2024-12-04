#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum = 0.0;

    // Input values for x and n
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the series sum
    for (int i = 0; i <= n; i++) {
        sum += pow(-1, i) * pow(x, i);  // (-1)^i * x^i
    }

    // Output the result
    printf("The sum of the series is: %.2f\n", sum);
    
    return 0;
}


