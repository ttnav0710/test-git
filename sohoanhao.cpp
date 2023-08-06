//In ra tat ca cac so hoan hao nho hon 10000

#include <stdio.h>
int main()
{
	int n = 10000;
	
	for(int i=1; i<n; i++)
	{
		int tong = 0;
		for(int j=1; j<i; j++){
			if(i%j==0){
				tong=tong+j;
			}
		}
		if(tong == i){
			printf("%d \n", i);
		}
	}
	
	
	return 0;	
}


