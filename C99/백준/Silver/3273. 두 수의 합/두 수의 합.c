#include <stdio.h>
#include <stdlib.h>

int comp(void* a, void* b) {
    return (*(int *)a - *(int *)b);
}
int main(void) {

    int n, x;
    int* arr;
    int i, cnt = 0;
    
    (void)scanf("%d", &n);

    arr = (int*)malloc(sizeof(int) * n);

    for (i = 0;i < n;++i) {
        (void)scanf("%d", arr+i);
    }

    (void)scanf("%d", &x);

    qsort(arr, n, sizeof(arr[0]), comp);

    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == x) {
            ++cnt;
            ++left;
            --right;
        }
        else if (sum < x) {
            ++left;
        }
        else {
            --right;
        }
    }

    printf("%d", cnt);
    free(arr);

    return 0;
}