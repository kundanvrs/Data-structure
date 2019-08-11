%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% BUBBLE SORT %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%








%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%% Sorting Code

void bubble_sort(int* A,int n)
{
	int i,j,t;
	  for(i=1; i<=n-1; i++)
	{
	   for(j=0; j<=n-1-i; j++)
	 {
	   if(A[j]<A[j+1])
	   {
	     t=A[j];
	     A[j]=A[j+1];
	     A[j+1]=t;
	   }
	 }
	}    
}


%%%%%%%%%%%% Main Function

int main()
{
 int d,A[100],i,n,p,r;
 int arr_size = sizeof(A)/sizeof(A[0]);

	printf("Enter how many elements to be taken\n");
		scanf("%d",&n);
			printf(" Enter Array elements\n");
			for(i=0; i<n; i++)
			scanf("%d",&A[i]);
	   			printf("Before sorting array elements are\n");
				for(i=0; i<n; i++)
		   		printf("%d\t",A[i]);
					bubble_sort(A,n);
		   				printf("After sorting array elements are\n");
		  				for(i=0; i<n; i++)
		  				printf("%d\t",A[i]);
						
}
