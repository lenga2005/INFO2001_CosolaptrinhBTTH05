#include <stdio.h> 

int linearSearch(int arr[],int n,int x) {
	int i; 
	for ( i = 0; i < n; i++) {
		if (arr[i]== x)
		return i;
	}
	return -1; // Tra ve -1 neu khong tim thay 
}

int BinarySearch(int arr[], int left, int right, int x) {
	while ( left <= right ) {
		int mid = left + (right- left) / 2;
		if (arr[mid] ==x){
			return mid;
		}
		if ( arr[mid] < x) {
		   left = mid + 1;
	}else {
	    right = mid - 1; 
	   	}

}
   return -1; 
}
int main () {
	int arr[5]= {1,2,3,4,5};
	int n = sizeof(arr) / sizeof (arr[0]);
	int x; 
	
	printf ("Nhap gia tri can tim:");
	scanf ("%d",&x);
	
	//Tim kiem tuyen tinh 
	int  linearResult = linearSearch(arr,n,x);
	if (linearResult == -1){
		printf ("Tim thay gia tri %d bang phuong phap tim kiem tuyen tinh.\n",x);
		
	}else{
			printf ("Khong tim thay gia tri %d bang phuong phap tim kiem tuyen tính.\n",x,linearResult);
		} 
		
	//Tim kiem nhi phan
	int binaryResult =  BinarySearch(arr,0,n-1,x);
	if (binaryResult == -1) {      
	      printf("Khong tim thay gia tri %d bang phuong phap tim kiem nhi phan.\n", x);
    } else {
        printf("Tim thay gia tri %d tai chi muc %d bang phuong phap tim kiem nhi phan.\n", x, binaryResult);
    }

    return 0;
}
	
