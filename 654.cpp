#include <stdio.h>
void ji(long long a){
	long long b;
	long c=0;
	c=(1+(a-1))*(a-1)/2;
	b=114514+c;
	printf("%lld\n",b);
}
int main(){
	long long t,a;
	scanf("%lld",&t);
	for(int i=0;i<t;i++){
		scanf("%lld",&a);
		ji(a);
		
	}
	return 0;
}
