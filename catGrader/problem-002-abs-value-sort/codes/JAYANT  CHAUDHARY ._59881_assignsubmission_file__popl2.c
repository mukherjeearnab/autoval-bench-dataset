int* solve_student(int arr[], int n)

{
    // Write solution here

    int* return_array;

    // Uncomment the following line and replace n with size of array

    return_array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            return_array[i] = -1 * arr[i];
        } else {
            return_array[i] = arr[i];
        }
    }

    int swap = 0;
    for (int i = 0; i < n; i++) {
        swap = 0;
        for (int j = 0; j < n - 1; j++) {
            if (return_array[j] > return_array[j + 1]) {
                swap = 1;
                int temp = return_array[j];
                return_array[j] = return_array[j + 1];
                return_array[j + 1] = temp;
            }
        }
        if (swap == 0) break;
    }

    return return_array;
}

// int main(){
//     int arr[] = {-8,-5,-1,0,4,9};
//     int* p ;

//     p = solve_student(arr,6);
//     for(int i=0; i<6;i++) printf("%d \n", p[i]);
//     return 0;
// }