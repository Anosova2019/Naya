#include <roots.h>

int roots(int a, int b, int c){
    double d,x1,x2;
    d = b*b- 4*a*c;
    if (d<0) {
	prinf( "Корней нет");
	return -1;
    }
    x1 = (sqrt(d) - b)/(2*a);
    x2 = ( -sqrt(d) - b)/(2*a);
    printf ("x1 = %lf, x2= %lf", x1, x2);
    return 0;
}
