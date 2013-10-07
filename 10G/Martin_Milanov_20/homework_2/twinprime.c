#include <stdio.h>

int main() {
	int m, h, myresult;  
	for(m=3; m<100; m++) {
		myresult = 0;
		for(h=2; h<m; h++) {
			if(!(m%h)) {
				myresult++;
				break;
			}
		}
		if(!myresult) {
			printf("%d\n", m);
		}
	}
	return 0;
}
