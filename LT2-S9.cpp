#include<stdio.h>

int main(){
	int n;
	int numbers[n];
	int a;
	printf(" moi ban nhap kich thuc mang\n");
	scanf("%d",&n);
	   for(int i=0;i<n;i++){
	   	printf("moi nhap gia tri numbers[%d]\n",i);
	   	scanf("%d",&numbers[i]);
	   }
	 for(int i=0;i<n;i++){
	 	printf("numbers[%d] = %d\n",i,numbers[i]);
	 }
	 printf("moi ban cho vi tri muon sua chon tu 0-%d \n",n-1);
	 scanf("%d",&a);
	 if(a>0 && a<n){
	 	printf("ban mua sua tai vi tri %d \n");
	 	printf("moi ban nhap gia tri \n");
	 	scanf("%d",&numbers[a]);
	 	
	 	 for(int i=0;i<n;i++){
	 	printf("numbers[%d] = %d\n",i,numbers[i]);
	 }}
	 else{
	 	printf("khong hop le gia tri khong co trong mang \n");
	 }
	return 0;
}
