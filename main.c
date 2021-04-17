#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}

int main(int argc, char *argv[]) {
	setlocale(0,"rus");
	printf("СКОЛЬКО ПРЕДМЕТОВ ЛЕЖИТ В РЮКЗАКЕ?: ");
	int n;
	scanf("%d",&n);
	printf("\n\nВЕС ПРЕДМЕТОВ (КГ): \n\n");
	int i;int a[n];
	for(i=0;i<n;i++)
	printf("a[%d]= ",i), scanf("%d",&a[i]);
	printf("\n\nВВЕДИТЕ ЧИСЛО S: ");int s,ss; scanf("%d",&s);int p;int z;printf("\n\n");int g=0,gc,sum,summax=1000,pos=0,post,shag;
	for(i=0;i<n;i++) printf("a[%d]    ",i);
	printf("\n");
	
	int b[n];int j;int k=pow(2,n);
	for(i=0;i<k;i++){
		for (j=0;j<n;j++) b[j]=0;//занулл эл-тов Б
		p=bin(i);//p в двоичн
		z=0;ss=0;
		
		while (p!=0){ // размещение цифр двоичного числа по массиву
			b[z]=p%10;
			p=p/10;
			z++;
			
		}
		for(z=0;z<n;z++) ss+=a[z]*b[z];//складываем вес всех предметов в сумму ss
		if (ss==s){
			sum=0;pos++;
			for(shag=0;shag<n;shag++) sum+=b[i];
			if (sum<summax) summax=sum,post=pos;
			
			printf("\n");
			for(z=0;z<n;z++) printf("%d *%d    ",b[z],a[z]);
			g++;
		}
		
		
	}
	post++;
	printf("\n\nПОЗИЦИЯ САМОГО ОПТИМАЛЬНОГО СПОСОБА: %d",post);
	

	
	
	return 0;
}
