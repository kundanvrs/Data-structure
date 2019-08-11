%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% BINARY SEARCH %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%








%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%% Searching Code

int binary_search(int*A,int n)
{
	int beg,end,mid,item;
	beg=0;
	end=n-1;
printf("enter the item\n");
scanf("%d",&item);
	while(beg<=end) {
		mid=(int)((beg+end)/2);
		if(item==A[mid])
		return mid;
		else
		if(item>A[mid])
		beg=mid+1;
		else
		end=mid-1;
		}
		return -1;//item not found
}


%%%%%%%%%%%% Main Function

int main()
{
	int A[]={2,3,443,46,463235,999,32,421,4,1234,312};
	int position;
	position=binary_search(A,10);
	if(position==-1)
		printf("item not found\n");
	else
		printf("item1 found at index %d\n",position);
		return 0;
}
