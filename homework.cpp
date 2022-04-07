#include<stdio.h>
#include<stdlib.h>

int main()
{
   int i,j,n,v,Iseq,IseqMax;
   int T[100];

for(i=0;i<100;i++){
	printf("Donner les éléments du tableau");
	scanf("%d",T[i]);
}

IseqMax=0;
i=1;
while(i<n){

while((i<n)&&(T[i]>=T[i+1])){
	i=i+1;
}
if(i<n){
	j=i+1;
	while((j<n)&&(T[j]<=T[j+1])){
		j=j+1;
	}
	if(j-i+1>IseqMax){
		Iseq=i;
		IseqMax=j-i+1;
	}
	i=j+1;
}	
}
if(IseqMax==0){
	printf("Il n y a pas de sequence croissante dans T");
}
else{
	printf("La plus longue sequence croissante du T est:");
	for(i=Iseq;i<Iseq+IseqMax;i++){
		printf("%d",T[i]);
	}
}
while(Iseq<IseqMax+Iseq){
	v=T[Iseq];
	T[Iseq]=T[Iseq+IseqMax];
	T[Iseq+IseqMax]=v;
	Iseq=Iseq+1;
	IseqMax=IseqMax-1;
}
for(i=Iseq;i<Iseq+IseqMax;i++){
		printf("%d",T[i]);
	}
}
