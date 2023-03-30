#include<stdio.h>
#include<math.h>
#include<limits.h>
/*@
requires 0 < n<= 1000;
requires n>0;
assigns \nothing;
ensures \result == n*n;
*/

int oddsum(int n){
int i=1;
int sum=0;
/*@
loop invariant sum == (i-1)*(i-1);
loop invariant 1<=i<=n+1;
loop assigns sum,i;
loop variant n-i;

*/

while(i<=n){
sum = sum + (2*i-1);
i++;
}
return sum;
}

int main(){
int fn = 3;
//@ assert fn==3;
int fun = oddsum(fn);
//@ assert fun == 9;
//printf("%d",fun);

}

