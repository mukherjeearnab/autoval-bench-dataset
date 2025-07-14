
int* solve_student(int arr[], int n)

{
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        a[i] = 100001;
        b[i] = 100001;
    }

    int j = 0;
    int k = 0;
    // Write solution here
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            a[j] = -arr[i];
            j++;
        } else {
            a[k] = arr[i];
            k++;
        }
    }

    int c[n];

    j = 0;
    k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[j] < arr[k]) {
            c[i] = arr[j];
            j++;
        } else {
            c[i] = arr[k];
            k++;
        }
    }

    // to return c

    int* return_array;

    // Uncomment the following line and replace n with size of array

    // return_array = (int*)malloc(c.size()*sizeof(int));

    return c;
}