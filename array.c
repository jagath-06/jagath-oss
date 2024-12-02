#include<stdio.h>
int main(){
	int i,j,small,data[5];
	for(i=0;i<5;i++)
	printf("enter array element:%d",i);
	scanf("%d",&data[i]);
}
    for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
     if(data[i]>data[j]){
     	small=data[i];
     	data[i]=data[j];
     	data[j]=small;
     	printf("ascending order:");
	 }
	 printf("%d",data[i]);
	}
	printf("\n");
} 
return 0;
}
}
