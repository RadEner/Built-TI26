#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort3(long long *a, long long *b, long long *c) {
    long long temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    long long a, b, c;

    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) return 0;
    if (a == b || a == c || b == c) {
        printf("0\n");
     return 0;
    }
    sort3(&a, &b, &c);
    long long diff_left = b - a;
    long long diff_right = c - b;
    
    long long result = (diff_left < diff_right) ? diff_left : diff_right;
    
    printf("%lld\n", result);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
