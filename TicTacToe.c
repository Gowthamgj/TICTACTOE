#include<stdio.h>
int check(char a[][3]);
void main(){
	char arr[3][3],i,j;
	int pla1,pla2,count=1,f,s;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr[i][j]='.';	
		}
	}
	printf("0->Wrong->player 1\n");
	printf("1->right->player 2 \n");
	printf("initialy the grade looks like\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Letzz begin the game");	       
	while(count!=10){
		printf("where u want to place  \n");
		if((count%2)!=0){
			printf("player one\n");
			scanf("%d%d",&f,&s);
			if((f||s)>1){
				printf("invalid position restart the game");
			}
			arr[f-1][s-1]='0';
			if(count>=5){
			if(check(arr)){
				printf("player one u won \n");
				break;
			}
		}
		}
		else{
			printf("player two\n");
			scanf("%d%d",&f,&s);
			if((f||s)>1){
				printf("invalid position restart the game\n");
			}
			arr[f-1][s-1]='1';
			if(count>=5){
			if(check(arr)){
				printf("player two u won\n");
				break;
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c\t",arr[i][j]);
		}
		printf("\n");
	}	
	count++;
}
if(count==10){
	printf("Match Draw");
}
}
int check(char a[][3]){
	int i=0,j=0;
	if(((a[0][0]=='0')&&(a[1][0]=='0')&&(a[2][0]=='0'))||((a[0][0]=='0')&&(a[0][1]=='0')&&(a[0][2]=='0'))||((a[0][0]=='0')&&(a[1][1]=='0')&&(a[2][2]=='0'))){
		return 1;
	}
	else if(((a[0][0]=='1')&&(a[1][0]=='1')&&(a[2][0]=='1'))||((a[0][0]=='1')&&(a[0][1]=='1')&&(a[0][2]=='1'))||((a[0][0]=='1')&&(a[1][1]=='1')&&(a[2][2]=='1'))){
		return 1;
	}
	else if(((a[0][1]=='0')&&(a[1][1]=='0')&&(a[2][1]=='0'))||((a[0][2]=='0')&&(a[1][2]=='0')&&(a[2][2]=='0'))||((a[2][0]=='0')&&(a[2][1]=='0')&&(a[2][2]=='0'))){
		return 1;
	}
	else if(((a[0][1]=='1')&&(a[1][1]=='1')&&(a[2][1]=='1'))||((a[0][2]=='1')&&(a[1][2]=='1')&&(a[2][2]=='1'))||((a[2][0]=='1')&&(a[2][1]=='1')&&(a[2][2]=='1'))){
		return 1;
	}
	else if(((a[1][0]=='0')&&(a[1][1]=='0')&&(a[1][2]=='0'))||((a[0][2]=='0')&&(a[1][1]=='0')&&(a[2][0]=='0'))){
		return 1;
	}
	else if(((a[1][0]=='1')&&(a[1][1]=='1')&&(a[1][2]=='1'))||((a[0][2]=='1')&&(a[1][1]=='1')&&(a[2][0]=='1'))){
		return 1;
	}
	return 0;
}

