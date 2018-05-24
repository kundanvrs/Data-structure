%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% Array %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%








%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%% Array Code

#define MAX 100

void load(int *p, int s)
{
	int i;
	  printf("Enter array element\n");
	    for(i=0; i<s; i++)
	        scanf("%d",&p[i]);
	
}

void display(int *p,int s)
{
	int i;
	printf("Array elememts are\n");
	   for(i=0; i<s; i++)
		printf("%d\t\n",p[i]);
	
}

void arr_insert(int *A,int *N)
{
	int i,p,ELEMENT;
	  if(*N==MAX)
       
		printf("No SPACE available...!!\n");
   
else
     {
	printf("Enter position of insertion and element to be insert\n");
	  scanf("%d%d",&p,&ELEMENT);
	    for(i=*N-1; i>=p-1; i--)
	      A[i+1]=A[i];
	         A[p-1]=ELEMENT;
	            printf("%d is inserted Succesfully\n",ELEMENT);
	               *N=*N+1;
     }
}

%%%%%%%%%%%%% DisplayMenu Function

void displaymenu()
{
	printf("\t1.LOADING\n");
	printf("\t2.DISPLAYING\n");
	printf("\t3.INSERT an ELEMENT\n");
	printf("\t4.EXIT\n");
}

%%%%%%%%%%%%% Main Function

int main()
{
 int A[100],i,n,d; 
   while(1)
    {
       printf("\tWELCOME TO ARRAY WORLD\n"); 
       displaymenu();
       printf("Enter your choice\n");
       scanf("%d",&d);
         
         switch(d)
           {
          case 1:
                printf("Enter how many number to be taken\n");
                scanf("%d",&n);
		            load(A,n);
                break; 
		      case 2:
                display(A,n);
                break;
 		      case 3:
                printf("Insert an Element\n");
                arr_insert(A,&n);
                break; 
		      case 4:
                exit (0);
	       default:
		printf("Enter a Valid choice!\n");
                break;
		
            }
    }

}
