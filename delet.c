#include<stdio.h>
#define size 50
main()
{
	
	int arr[]={1,2,3,4,5,6};  
	int len=sizeof(arr)/sizeof(int);
	int i,pos;
	
printf("len %d",len);
	scanf("%d",&pos);  
	if(pos>=0&&pos<len)
	{
		for(i=pos;i<len-1;i++)
			arr[i]=arr[i+1];
		len--;
		
		for(i=0;i<len;i++)
			printf("%d ",arr[i]);
	}
	else
		printf("\nInput outof bounds..!!");
}


