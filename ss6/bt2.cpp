#include<stdio.h>
int ucln(int a,int b) {
	while (a != b) {
	 	if (a >b)
	 	 a = a - b;
	 	else
		 b = b -a; 
	 }
	return a; 
}
int bcnn(int a, int b) {
	return((a * b ) / ucln(a,b));
}
int main() {
	int a,b,choice;
	do {
	 printf("Nhap vao 2 so nguyen: ");
      scanf("%d%d", &a, &b);
     printf("CACULATOR\n");
     printf("1. Tong 2 so\n");
     printf("2. Hieu 2 so\n");
     printf("3. Tich 2 so\n");
     printf("4. Thuong 2 so\n");
     printf("5. So du trong phep chia 2 so\n");
     printf("6. Uoc chung lon nhat\n");
     printf("7. Boi chung nho nhat\n");
     printf("8. Thoat\n");
     printf("Lua chon cua ban: ");
     scanf("%d", &choice);
    switch (choice) {
        case 1:
      	    printf ("tong 2 so la %d\n", a + b);
      	    break;
  		case 2:
  			printf ("hieu 2 so la %d\n", a - b);
  			break;
  		case 3:
  			printf ("tich 2 so la %d\n", a * b);
  			break;
  		case 4:
  			printf ("thuong 2 so la %.2f\n" , float(a/b));
  			break;
  		case 5:
		    printf ("so du trong phep chia 2 so la %d\n", a % b);
		    break;
		case 6:
		    printf ("uoc chung lon nhat cua 2 so la %d\n", ucln(a,b));
		    break;
		case 7:
		    printf ("boi chung nho nhat cua 2 so la %d\n", bcnn(a,b));
			break;    
		case 8:
			printf ("thoat\n");
			break;
		default: printf("lua chon khong hop le\n");
	}	
    }  while (choice != 8 );
          return 0;		
}

		   			

