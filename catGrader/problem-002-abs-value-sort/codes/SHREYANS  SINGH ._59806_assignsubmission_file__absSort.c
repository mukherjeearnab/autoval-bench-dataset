{
	//Write solution here
	int* return_array;
	//Uncomment the following line and replace n with size of array
	return_array = (int*)malloc(n*sizeof(int));

	for(int x=0;x<n;x++)
    {
		if(arr[x]<0)
        {
			return_array[x] *= -1;
        }

		return_array[x] = arr[x];
	}

	for(int x=0; x<n-1; x++)
    {
		for(int y=x;y<n;y++)
		{
			if(return_array[x]>return_array[y])
			{
				int temp = return_array[y];
				return_array[y] = return_array[x];
				return_array[x] = temp;
			}
		}
	}

	return return_array;
}
