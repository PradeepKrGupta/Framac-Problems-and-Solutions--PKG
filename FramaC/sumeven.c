#include<stdio.h>
#include<math.h>
#include<limits.h>
/*@
requires 0 < n<= 1000;
requires n>0;
assigns \nothing;
ensures \result == 2*n +2;
*/

int evensum(int n){
int sum=0;
/*@
loop invariant sum == 2*(i-1)+2;
loop invariant 1<=i<=n+1;
loop assigns sum,i;
loop variant n-i;

*/

for(int i=0;i<n;i++){
if(i%2==0){
    sum = sum+i;
}
return sum;

}

int main(){
int fn = 3;
//@ assert fn==3;
int fun = evensum(fn);
//@ assert fun == 6;
printf("%d",fun);
}

