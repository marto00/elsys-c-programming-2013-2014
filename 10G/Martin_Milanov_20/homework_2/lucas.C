#include <stdio.h>

int main() {
  
        unsigned long long int m,n,r;
        int g;
        m=2;
        n=1;
	printf("%llu\n" , m);
	printf("%llu\n" , n);
	for (g=3;g<=100;g++)
{
	r=m+n;
	printf("%d - %llu\n" ,g,r);
	m=n;
	n=r;
}
	return 0;
}


