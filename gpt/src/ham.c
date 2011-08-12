#include "thuvien.h"
#include <math.h>

void GiaiPT(double a, double b, double c)
{
	double delta=(b*b)-4*a*c;
	if(delta<0) printf("Vo nghiem");
	if(delta==0) printf("Nghiem kep la: %f",-b/(2*a));
	if(delta>0) printf("hai nghiem x1=%f va x2=%f\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
}

