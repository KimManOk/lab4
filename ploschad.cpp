#include <stdio.h>

	float plowad(float x, float y, float z) {
		float plo, p2;				//p2 - полупериметр
		p2 = (x+y+z)/2;
		plo=sqrt(p2*(p2-x)*(p2-y)*(p2-z));
	return(plo);
}
