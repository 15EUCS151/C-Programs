#include<stdio.h>
#include<string.h>
int main(){	
char a[20],b[20];
int l,n,i;
int sum1=0,sum2=0;	
scanf("%s",a);	
scanf("%s",b);	 
l=strlen(a);    
n=strlen(b);     
for(i=0;i<l;i++){     	
sum1=sum1+a[i];	 
}	  
for(i=0;i<n;i++){     	
sum2=sum2+b[i];	 
}	 
if(sum1>sum2){	 	
printf("%s",a);	
}	 
else if(sum1<sum2){	 	
printf("%s",b);	 
}
else{
printf("%s",a);
}
return 0;
}
