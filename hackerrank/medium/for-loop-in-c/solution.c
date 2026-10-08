#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    void calculate_the_maximum(int n, int k) {
    int x = (n < k) ? n : k;
    int max = 0;
    while (x > 0) {
        max = (max << 1) | 1;
        x >>= 1;
    }
    printf("%d\n", max);
}   
    char* words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i = a; i <= b; i++) {
        if (i <= 9)
            printf("%s\n", words[i]);
        else if (i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }   
    return 0;
}

