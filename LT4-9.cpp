#include<stdio.h>

int main(){
	int n;
	int numbers[n];
	int chon;
	int a;
	int vitri;
	int vitrithem[vitri];
	int vitrixoa;
	do{
		printf("1 nhap vao mang\n");
		printf("2 hien thi mang\n");
		printf("3 them phan tu \n ");
		printf("4 sua phan tu\n");
		printf("5 xoa phan tu \n");
		printf("6 thoat\n");
		printf("\n");
		printf("\n");
		printf("moi ban chon chuc nang 1-6\n");
		scanf("%d",&chon);
		
		switch(chon){
			
			case 1:
				printf("moi ban nhap so phan tu mang\n");
				  scanf("%d",&n);
				  for(int i=0;i<n;i++){
				  	printf("moi nhap gia tri cua numbers[%d]\n",i);
				  	scanf("%d",&numbers[i]);
				  }
				  	break;
			case 2:
				for(int i=0;i<n;i++){
					printf("numbers[%d] = %d\n",i,numbers[i]);
				}
			    	break;  	
			case 3:
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
		}
		
	}
	else{
		printf("vi tri khong hop le\n");
	}
	break;
	case 4 :
		printf("moi ban cho vi tri muon sua chon tu 0-%d \n",n-1);
	 scanf("%d",&a);
	 if(a>0 && a<n){
	 	printf("ban mua sua tai vi tri %d \n");
	 	printf("moi ban nhap gia tri \n");
	 	scanf("%d",&numbers[a]);
	 }
	 else{
	 	printf("vi tri khong ton tai trong mang\n");
	 }
	 break;
	case 5:
	  printf("moi ban nhap vi tri muon xoa 0-%d\n",n-1);
	 scanf("%d",&vitrixoa);
     if(vitrixoa >=0 && vitrixoa <n){
     	
     	for(int i = vitrixoa; i < n; i++){
        numbers[i] = numbers[i + 1];
  }
      n--;
  	 for (int i = 0; i < n; i++){
        printf("numbers[%d] = %d \n",i, numbers[i]);
    }
  }

  else{
  	printf("vi tri khong co trong mang\n");
  }
  break;
  case 6:
  	printf("chuong trinh ket thuc\n");
  	break;
  	default:
  		printf("vi tri khong hop le\n");
  		
}
}while(chon !=6);

	return 0;
}
