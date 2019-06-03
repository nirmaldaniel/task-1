#include<stdio.h>
#include<math.h>
int tobin(int );
int todec(int );
int main()
{
	int n,b;
		printf("enter the length of string and the binary no.");
	scanf("%d%d",&n,&b);
	if((todec(b)==(pow(2,n)-1))||(todec(b)==pow(2,n-1)))
	printf("-1");
	else
	printf("%d\t%d",tobin(todec(b)-1),tobin(todec(b)+1));

}

int todec(int n)
{
	int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int tobin(int n)
{
	int binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
