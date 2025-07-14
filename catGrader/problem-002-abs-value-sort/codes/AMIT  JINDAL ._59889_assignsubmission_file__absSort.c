
void swap2number(int a, int b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int* solve_student(int arr[], int n) {
    // Write solution here

    int return_array[n];

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) arr[i] *= -1;
    }

    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[k]) swap2number(&arr[j], &arr[k]);
        }
    }

    for (int i = 0; i < n; i++) {
        return_array[i] = arr[i];
    }

    return return_array;
}