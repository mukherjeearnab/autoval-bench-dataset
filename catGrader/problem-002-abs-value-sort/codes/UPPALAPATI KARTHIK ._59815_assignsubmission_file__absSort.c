// #include <stdio.h>
int* solve_student(int arr[], int n) {
    // Write solution here

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // int mid = -1;
    // for(int i=0;i<n-1;i++){
    // 	if(arr[i]<0 && arr[i+1]>=0){
    // 		mid = i+1;
    // 		break;
    // 	}
    // }

    // int ans[n];
    // int ind = 0;
    // int l=mid-1, r = mid;
    // while(l>=0 && r<n){
    // 	if(abs(arr[l]) < arr[r]){
    // 		ans[ind] = abs(arr[l]);
    // 		ind++;
    // 		l--;
    // 	} else if(abs(arr[l] > arr[r])){
    // 		ans[ind]= arr[r];
    // 		ind++;
    // 		r++;
    // 	} else {
    // 		ans[ind] = abs(arr[l]);
    // 		ind++;
    // 		ans[ind] = arr[r];
    // 		ind++;
    // 		l--;r++;
    // 	}
    // }

    // ans = arr;

    int* return_array;

    // Uncomment the following line and replace n with size of array
    return_array = (int*)malloc(n * sizeof(int));
    return return_array;
}
// int main(){
// 	return 0;
// }
