#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long val1 = *(long long*)a;
    long long val2 = *(long long*)b;
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long *arr = (long long*)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, n, sizeof(long long), compare);
    
    long long MOD = 1000000007;
    long long total_pairs = (long long)n * (n - 1) / 2;
    long long duplicate_pairs = 0;
    long long current_count = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            current_count++;
        } else {
            duplicate_pairs += current_count * (current_count - 1) / 2;
            current_count = 1;
        }
    }
    duplicate_pairs += current_count * (current_count - 1) / 2;
    long long result = (total_pairs - duplicate_pairs) % MOD;
    if (result < 0) result += MOD;
    
    printf("%lld\n", result);
    free(arr);
    return 0;
}