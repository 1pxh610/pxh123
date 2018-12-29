#include <iostream>
using namespace std;
int a[10];
int main(){
	int n,i,j=0,y,x;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d",&x);
		
		if(x<9&&x>=0)
			a[x]++;	
		else{
			y=x;
			while(y){
				a[y%10]++;
				y=y/10;
			}
		}
	}
	for(i=1;i<=9;++i){
		if(a[i]==0)
		    j=j+i;
	}
	printf("%d",j);
	return 0;
}
