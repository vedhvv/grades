#include<stdio.h>
int main()
{printf("enter your mark: ");
int i;
scanf("%d",&i);
if(i>=85&&i<=100)
{printf("Grade A\n");
}
else if(i>=70&&i<=84)
{printf("Grade B\n");
}
else if(i>=55&&i<=69)
{printf("Grade C\n");
}
else if(i>=40&&i<=54)
{printf("Grade D\n");
}
else if(i<40)
{printf("Grade F\n");
}
}