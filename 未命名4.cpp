#include <iostream>
using namespace std;
int main(){
	int n,i,f=0;
	scanf("%d",&n);
	int m=n;
	printf("%d=",m);
	for(i=2;i<=n;i++){
	while(m%i==0&&m){
	if(!f){
	printf("%d",i);
		f=1;
		}
	else printf("*%d",i);
		m=m/i;
		}
	}	
return 0;
}
