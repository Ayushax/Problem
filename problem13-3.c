#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    double sum = 0.0, product = 1.0, sum_harmonic = 0.0;
    int has_zero = 0, has_non_positive = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];  // For Arithmetic Mean
        
        if (arr[i] <= 0) {
            has_non_positive = 1; // Mark non-positive number
        } else {
            product *= arr[i]; // For Geometric Mean
        }

        if (arr[i] == 0) {
            has_zero = 1; // Mark zero encountered
        } else {
            sum_harmonic += 1.0 / arr[i]; // For Harmonic Mean
        }
    }

    double average = sum / (double)n;
    double geometric = has_non_positive ? 1 : pow(product, 1.0 / n);
    double harmonic = has_zero ? 1 : n / sum_harmonic;

    printf("The Arithmetic Mean of the array is: %.6lf\n", average);
    
    if (geometric == 1)
        printf("The Geometric Mean is undefined (contains non-positive numbers)\n");
    else
        printf("The Geometric Mean of the array is: %.6lf\n", geometric);
    
    if (harmonic == 1)
        printf("The Harmonic Mean is undefined (contains zero)\n");
    else
        printf("The Harmonic Mean of the array is: %.6lf\n", harmonic);

    return 0;
}
