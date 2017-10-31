#include<stdio.h>
#include<math.h>

int main(void){
//bugcal program

int cases, j = 0;
scanf("%d", &cases);

int numberd[cases];

while (j < cases){
	int num1, num2=0;
	int number= 0;
	int final1=0;
	scanf("%d %d", &num1, &num2);
	if(length(num1) > length(num2)){
		int y = 0;
		for (y=0;y<length(num2);y++){
			int x = digit(num1, y)+ digit(num2, y);
			int first = digit(x, 0);
			number = number + multiply(first, y);
		}
		int u = length(num2);
		for (u=length(num2);u<length(num1);u++){
			number = number + multiply(digit(num1, u), u);
		} 
	}
	
	if(length(num2) > length(num1)){
		int y = 0;
		for (y=0;y<length(num1);y++){
			int x = digit(num2, y)+ digit(num1, y);
			int first = digit(x, 0);
			number = number + multiply(first, y);
		}
		int u = length(num1);
		for (u=length(num1);u<length(num2);u++){
			number = number + multiply(digit(num2, u), u);
		} 
	}
	
	if(length(num2) == length(num1)){
		int y = 0;
		for (y=0;y<length(num1);y++){	
			int x = digit(num2, y)+ digit(num1, y);
			int first = digit(x, 0);
			number = number + multiply(first, y);
		}
	}
	    numberd[j] = number;
	j++;
}
    int g=0;
	for(g=0;g<cases;g++){
	printf("\n%d", numberd[g]);
    }
	return 0;
}
//fetch a digit
int digit(int a, int position){
    int x =0;
	for(x=0;x<position;x++){
	a = a / 10;
}
	int digit = (int)a%10;
	return digit;
}
int b = 0;
//length of a number
int length(int a){
	return floor(log10(abs(a))) + 1;
}
//multiply num by 10
int multiply(int a, int b){
	int x =0;
	if(b==0){
		return a;
	}
	else{
	for (x=0;x<b;x++){
		a=a*10;
	}
		return a;
    }
}

