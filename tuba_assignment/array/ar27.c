//Left rotate an array.
#include <stdio.h>
//prototype
void rotate_one(int[], int, int);
void leftrotate(int[], int, int);
//mian function
int main(){
    int arr[] = { 1, 2, 3, 4, 5 };
    int r = 2;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    leftrotate(arr, r, n);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}
//defination
void rotate_one(int arr[], int n, int i)
{
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
 
    arr[n-1] = first;
}
 
void leftrotate(int arr[], int r, int n)
{
    if (r < 0 || r >= n) {
        return;
    }
 
    for (int i = 0; i < r; i++) {
        rotate_one(arr, n);
    }
}

