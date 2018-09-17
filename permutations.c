#include<stdio.h>
#include <stdlib.h>


/* swapping the two characters */
char * swap(int a,int b,char *str){
	char temp = str[a];
	str[a]=str[b];
	str[b]=temp;
	return str;

}

/* for permuting the string keeping constant before start index */
void permute(char *str,int start,int len){
	if(start==len){
		printf("%s\n",str );
		return;
	}
	for(int i=start;i<len;i++){
		str=swap(start,i,str);
		permute(str,start+1,len);
		str = swap(i,start,str);
	}
	return ;
}


int main(void){
	int n;
	scanf("%d",&n);
	char *str = (char *)malloc(sizeof(char)*(n+1));
	scanf("%s",str);
	permute(str,0,n);
	return 0;
}