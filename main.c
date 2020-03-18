#include <stdio.h>

int main() {
	float xn, xnm1 = 0.14, xnm2 = 1.47;
	float dxdn;

	int alwaysPos = 1, alwaysNeg = 1;
	int n = 0;

	printf("%d %f\n", n++, xnm2);
	printf("%d %f\n", n++, xnm1);

	while(n <= 10 && xn < 1e10) {
		xn = 0.8*xnm1 - 0.2*xnm2;
		dxdn = xn - xnm1;
		if(dxdn < 0.0)
			alwaysPos = 0;
		if(dxdn >= 0.0)
			alwaysNeg = 0;
		printf("%d %f\n", n++, xn);
		xnm2 = xnm1;
		xnm1 = xn;
	}

	if(alwaysPos == 1 && alwaysNeg == 0)
		printf("dxdn is always negative\n");
	if(alwaysPos == 0 && alwaysNeg == 1)
		printf("dxdn is always positive or zero\n");
	if(alwaysPos == 0 && alwaysNeg == 0)
		printf("dxdn varies\n");

	return 0;
}
