
#include<stdio.h>
int check(int,int);
int getNumDigits(int);
int main()
{
  int num=0,temp=0, digit=0,count=0;
  printf("enter the number\n");
  scanf("%d",&num);
  temp=num;
  int flag = 1;
  int numDigit = getNumDigits(temp);
  while(temp>0)
  {
    digit=temp%10;
    int count=check(num,numDigit);
    if(count!= digit)
    {
      printf("\tNumber is not a self descriptive");
      flag = 0;
      break;
    }
    temp=temp/10;
    numDigit--;
  }
  if(flag)
  {
    printf("\tNumber is a self descriptive");
  }
}

/* check number of times the digit appear in number */
int check(int num,int digit)
{
  int count=0;
  while(num>0)
  {
    if(num%10 == digit)
    {
       count++;
    }
    num=num/10;
  }
  return count;
}

/* to check number of digits in number */
int getNumDigits(int num)
{
  printf("%d",num);
  int digits = 0;
  while(num>0)
  {
    digits++;
    num=num/10;
  }
  return digits-1;
}
