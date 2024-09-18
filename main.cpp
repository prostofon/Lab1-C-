#include <iostream>
#include <cmath>

int main()
{
    float r, l, t, fi, angle, speedup, gamma, omega;
    float v1, v2;
	r = 0.037;
	l = 0.164;
	t = 1.6;
	fi = 335;
	angle = M_PI*fi/180;
	gamma = asin((r*sin(angle))/l);
	v1 = -(r*angle / t)*(sin(angle + gamma)/cos(gamma));
	omega = - (r * pow(angle,2)  / pow(t,2))*(cos(angle) + (r*cos(2*angle))/l);
	v2 = -((r * angle)/t) * (sin(angle) + ((r * (sin(angle)) * (cos(angle))) / l));
	std::cout<< "" <<v1<<", "<<v2<<", "<<omega;
	return 0;
}
