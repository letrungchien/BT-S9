#include<stdio.h>

  int main(){
	int n;
	int numbers[n];
	int vitri;
	int vitrithem[vitri];
	printf(" moi ban nhap kich thuc mang\n");
	scanf("%d",&n);
	   for(int i=0;i<n;i++){
	   	printf("moi nhap gia tri numbers[%d]\n",i);
	   	scanf("%d",&numbers[i]);
	   }
	 for(int i=0;i<n;i++){
	 	printf("numbers[%d] = %d\n",i,numbers[i]);
	 }
	 printf("moi ban cho vi tri muon them chon tu 0-99\n");
	 scanf("%d",&vitri);
	 
	 if(vitri>-1 && vitri<100){
	    
	     if(vitri>=n){
	     	printf("moi ban nhap gia tri muon them\n");
	     	  scanf("%d",&numbers[vitri]);
	     	  	 for(int i=0;i<n;i++){
	 	printf("numbers[%d] = %d\n",i,numbers[i]);
	 	
	 }
	 printf("numbers[%d] = %d\n",vitri,numbers[vitri]);
	     	  
	     	  
		 }
	 	else{
	 			printf("moi ban nhap gia tri muon them\n");
	     	  scanf("%d",&vitrithem[vitri]);
	     	   for(int i=0;i<vitri;i++){
	 	printf("numbers[%d] = %d\n",i,numbers[i]);
	 		
	 }
     	 printf("numbers[%d] = %d\n",vitri,vitrithem[vitri]);
     	 for(int i=vitri;i<n;i++){
	 	printf("numbers[%d] = %d\n",i+1,numbers[i]);
     	 
		 }
	 	 
}
}
	 
	 else{
	 	printf("khong hop le gia tri khong co trong mang \n");
	 }
	return 0;
}
