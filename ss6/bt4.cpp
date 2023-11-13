#include<stdio.h>
#include<stdbool.h>
bool divisor(int n , int b) {
	if ( n%b == 0) 
	 return true ;
	  else return false; 
}
bool even(int n) {
	if (n%2 == 0) 
	 return true;
	  else return false; 
} 
bool odd(int n) {
	if (n%2 != 0) 
	 return true;
	  else return false; 
} 
int main() {
	int n,choice,i;
	int sum = 0;
	int count = 0;
	printf("nhap n ");
	 scanf("%d" , &n);
	do {
	printf("CACULATOR\n");
    printf("1. day so chan giam dan\n");
    printf("2. so nho hon n va tinh tong\n");
    printf("3. uoc so chan\n");
    printf("4. uoc so le va so uoc so le\n");
    printf("6. uoc so le lon nhat\n");
    printf("7. thoat\n");
    printf("nhap lua chon cua ban ");
     scanf("%d", &choice);
	switch (choice) {
	  	case 1:
	  		for (i=n;i--;i>0){
	  		  if (even(i)) printf("%d ", i);
	  	    }
	  	    printf ("\n");
	  	    break;
		case 2:
		    for (i=1;i<n;i++) {
		    	printf("%d ", i);
		    	sum +=i;
			}  	
			printf ("\n");
			printf ("tong cac so nho hon %d la %d\n", n , sum);
			break;
		case 3:
			for (i=1;i<n;i++) { 
			    if (divisor(n,i) && even(i)) printf ("%d ", i);
			}
			printf ("\n");
		    break;
		case 4:
		    for (i=1;i<n;i++) {
				if (divisor(n,i) && odd(i)) {
				printf ("%d ", i);
				count +=1;
			    }
			}
			printf("\n");
			printf ("so cac uoc le la %d\n",count);
		    break;
		case 5:
		    for (i=n;i>0;i--){
		    	if (divisor(n,i) && odd(i)) {
		    		printf("%d\n");
		    		break;
				}
			}
			break;
		case 6: 
		   printf("thoat\n");
		   break;
		default: printf ("khong hop le\n");	
	  }
	} while (choice != 6);
return 0;
}
