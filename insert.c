#include<stdio.h>
#define SIZE 50
main()
{
int arr[SIZE];  
	int i,pos,len,ele;
	scanf("%d",&len);// len is 5
	for(i=0;i<len;i++)
		scanf("%d",&arr[i]);    

	scanf("%d%d",&pos,&ele);  
	
	if(pos>=0&&pos<SIZE)
	{
		for(i=len;i>pos;i--) 
			arr[i]=arr[i-1];
		
		arr[pos]=ele;  
		len++;  
		
		for(i=0;i<len;i++)
			printf("%d ",arr[i]);
	}
	else 
	printf("it is not");
}

