#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, k = 0, i, a[101], j, aux;
	printf("n=");
	scanf("%d", &n);
	while (n != 0)
	{
		a[k] = n % 2;
		k++;
		n = n / 2;
	}
	for (i = k - 1; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
	for(i=0;i<k;i++)
		for(j=i+1;j<=k;j++)
			if (a[i] < a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
	for (i = 0; i < k; i++)
		printf("%d", a[i]);
	printf("\n");

	system("pause");
	return 0;
}