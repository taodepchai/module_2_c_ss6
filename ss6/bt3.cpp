#include<stdio.h>
int main() {
  int a,b,c,choice,max,min;
  do{
	printf("nhap 3 so nguyen ");
	 scanf ("%d%d%d",&a,&b,&c);
	printf("1. tong 3 so\n");
	printf("2.trung binh cong 3 so\n");
	printf("3.max min trong 3 so\n");
	printf("4.thoat\n");
	scanf("%d" ,&choice);
	switch(choice) {
		case 1:
			printf("tong 3 so la %d\n", a + b + c);
			break;
		case 2:
		    printf("trung binh cong 3 so la %.2f\n", float((a+b+c)/3));
			break;
		case 3:
		    max = a;
		    min = a;
			if (max < b) max = b;
			if (max < c) max = c;
			if (min > b) min = b;
			if (min > c) min = c;
			printf ("so lon nhat la %d, so nho nhat la %d\n" ,max ,min);
			break;
		case 4:
		    printf("thoat\n");
		    break;
		default: printf("khong hop le\n");		 
	} 
	}
	while (choice != 4);
	return 0;
}

