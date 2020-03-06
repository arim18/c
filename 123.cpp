#include<stdio.h>

int main(){
	
	int k=1;
printf("*********\n");

for(int i=1;i<6;i++){
	k++;
	printf("(%d)",i);
	for(int j=1;j<k;j++){
		printf("%d",j);
	}
		printf(" ");
printf("*\n");	
}
printf("*********\n");
int l=6;
for(int i=5;0<i;i--){
	l--;
	int m=0;
	printf("(%d)",i);
	for(int j=l;0<j;j--){
		m++;
		printf("%d",m);
	}
printf("*\n");
}
printf("*********\n");



return 0;
}
