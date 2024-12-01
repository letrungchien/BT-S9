#include<stdio.h>

int main(){
	
    int n;
	int numbers[n];
	int vitrixoa;
	printf(" moi ban nhap kich thuc mang\n");
	scanf("%d",&n);
	   for(int i=0;i<n;i++){
	   	printf("moi nhap gia tri numbers[%d]\n",i);
	   	scanf("%d",&numbers[i]);
	   }
	 for(int i=0;i<n;i++){
	 	printf("numbers[%d] = %d\n",i,numbers[i]);
	 }
	 
	 printf("moi ban nhap vi tri muon xoa 0-%d\n",n-1);
	 scanf("%d",&vitrixoa);
     if(vitrixoa >=0 && vitrixoa <n){
     	
     	for(int i = vitrixoa; i < n; i++){
        numbers[i] = numbers[i + 1];
  }
      n--;
  	 for (int i = 0; i < n; i++) {
        printf("numbers[%d] = %d \n",i, numbers[i]);
    }
  }

  else{
  	printf("vi tri khong co trong mang\n");
  }
	
	return 0;
}
