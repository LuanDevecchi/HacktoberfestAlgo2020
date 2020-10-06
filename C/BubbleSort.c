// C program to implement Bubble Sort

 #include <stdio.h>
 #include <conio.h>

	//function to perform Swapping of elements using pointers

	void swap(int *rowEle, int *colEle)		
	{
		int temp;
		
		temp = *rowEle;
		*rowEle = *colEle;
		*colEle = temp;
	}
	
	//function to Bubble Sort 
	
	void bubbleSort(int ar[], int n)		
	{
		int row, col;
		
		 for(row = 0; row < n-1; row++)
		 {
		 	for(col = 0; col < n-row-1; col++)
		 	{
		 		if(ar[col] > ar[col+1])
		 		  
		 		  swap(&ar[col], &ar[col+1]);
			 }
		 }
	}
	
	//function to display elements of the Sorted Array
	
	void displayArray(int ar[], int len)		
	{
		int i;
		
		 for(i = 0; i < len; i++)
		     
		     printf("%d ", ar[i]);
		    
		  printf("\n");	 
	}
	
	//main function to control program execution by calling other functions
	
	int main()
	{
		int ar[20], len;
		 
		 //initialising the length of the array
		 
		 printf("Enter the length of the array \n");
		   scanf("%d", &len);
		   
		 printf("The elements are: \n");
		 
		 //filling array with elements
		 
		  for(int i = 0; i < len; i++)
		     scanf("%d", &ar[i]); 
		     
		     bubbleSort(ar, len);
			 
		 printf("Sorted Array: \n");
		 
		      displayArray(ar, len);
			  
		return 0;	  	  
		   
	}