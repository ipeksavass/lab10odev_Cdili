#include <stdio.h>
int main(){
	int i;
	float x[8],sum,ort;
	for (i=0;i<9;i++)
	{
		printf("%d. sayiyi giriniz :",i);
		scanf("%f",&x[8]);
		sum+=x[i];
	}
	ort=sum/8;
	printf("ortalama =%.2f",ort);
	return 0;
	
}
