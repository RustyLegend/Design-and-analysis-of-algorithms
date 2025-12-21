#include<stdio.h>
void playTowerOfHanoi(int discs , char A , char C , char B)
{
	if(discs==1)
	{
		printf("%c -> %c\n", A,C);
		return;
	}
	else
	{
		playTowerOfHanoi(discs-1,A,B,C);
		printf("%c -> %c\n", A,C);
		playTowerOfHanoi(discs-1,B,C,A);
	}
}

int main()
{
	int discs;
	printf("Enter number of discs: ");
	scanf("%d" , &discs);
	
	playTowerOfHanoi(discs , 'A' , 'C' , 'B');
}
