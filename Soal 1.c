#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; 
    if (scanf("%d", &n) !=1) return 0;
    long long sum = 0;
    long long temp;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &temp);
        sum += temp;}
        printf("%lld\n", llabs(sum));
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
