// Computing the integer square root with precondition and postcondition.
#include<limits.h>
#include<math.h>

/*@ requires 0<=a;
    ensures \result>=0;
    ensures \result*\result>=a;
*/
double Msqrt(double a) {
	return sqrt(a);
}

void main() {
	double x = Msqrt(64);
	double y = Msqrt(10);
}
