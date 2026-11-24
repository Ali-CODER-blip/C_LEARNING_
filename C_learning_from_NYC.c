////c_learning_from_NYC
//#include<stdio.h>
//int main()
//{
//  printf("ali hasan");	
//  return 0 ;
//}
   
   
   


//#include<stdio.h>
//int main()
//{
//	int  num = 12;
//	long l = 2323;
//	char ch = 'a';
//	float f = 1.2;
//	double d = 12.455;
//	printf("num = %d\n",num);
//	printf("long = %ld\n,",l);
//	printf("char = %C\n",ch);
//	printf("float = %f\n",f);
//	printf("double = %lf\n",d);
//	return 0;
//}
  
  
  
  
  
//#include<stdio.h>
//int main()
//{
//	int num1 = 100, num2 = 50;
//	printf("addition of %d and %d = %d\n",num1,num2,num1+num2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a,b,temp;
//	printf("enter first value: ");
//	scanf("%d",&a);
//	printf("enter second value: ");
//	scanf("%d",&b);
//	printf("before swapping a=%d and b=%d\n",a,b);
//	//swap
//	temp = a;
//	a=b;
//	b=temp;
//	printf("after swapping a=%d and b=%d\n",a,b);
//	return 0;
// }


//#include<stdio.h>
//int main()
//{
//	int a,b;
//	printf("enter two numbers:");
//	scanf("%d %d",&a,&b);
//	printf("before swapping a=%d and b=%d\n",a,b);
//	
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	
//	printf("after swapping: a=%d, b=%d",a,b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n",a++); //10
//	printf("%d\n",a);   //11
//	printf("%d\n",++a); //12
//	return 0 ;
//}


//#include<stdio.h>
//int main()
//{
//	int l = 5,b = 3;
//	int area = l*b;
//	int peri = 2*(l+b);
//	printf("area = %d\n",area);
//	printf("peri = %d",peri);
//	return 0;
//}

  
  
  
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double r = 7;
//	double PI = 3.14;
//	double area = PI*pow(r,2);
//	double cir = 2*PI*r;
//	 
//	printf("area = %.2lf\n",area);
//	printf("peri = %.2lf\n",cir);
//}
 
 

 
//#include<stdio.h>
//int main()
//{
//	int marks = 20;
//	if(marks>33)
//	{
//		printf("pass\n");
//	}
//	else
//	{
//		printf("fail\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("enter the alphabet:");
//	scanf("%c",&ch);
//	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//	{
//		printf("vowel");
//	}
//	else
//	{
//		printf("consonat");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("enter the year\n");
//	scanf("%d",&year);
//	if(year%100==0)
//	{
//		if(year%400==0)
//		{
//			printf("leap year\n");
//		}
//		else
//		{
//			printf("not a leap year\n");
//		}
//	}
//	else
//	{
//		if(year%4==0)
//		{
//		   printf("leap year\n");
//		}
//		else
//		{
//			printf("not a leap year");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	double movierating = 0.0;
//	char moviename[] = "";
//	char moviestatus[] = "";
//	
//	printf("enter movie name:");
//	scanf("%s",moviename);
//	
//	printf("enetr movie rating between 0.0-5.0:");
//	scanf("%lf",&movierating);
//	
//	if(movierating>=0 && movierating<=2.0)
//	{
//		printf("flop\n");
//    }
//    else if(movierating>=2.1 && movierating<=3.4)
//    {
//    	printf("semi-hit\n");
//	}
//	else if(movierating>=3.5 && movierating<=4.5)
//	{
//		printf("hit\n");
//	}
//	else
//	{
//		printf("super hit");
//	}
//	
//	return 0;
//	
//}


////ternay opertor
//#include<stdio.h>
//int main()
//{
//	int marks = 30;
//	printf("%s\n",(marks>=33) ? "pass" : "fail");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("enter character: ");
//	scanf("%c",&ch);
//	
//	switch(ch)
//	{
//		case'a':
//		case'e':
//		case'i':
//		case'o':
//		case'u':
//			printf("vowels\n");
//			break;
//	default :
//	printf("consonant\n");		
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=10;i++)
//	{
//	printf("ali hasan!!\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=10;i++)
//	{
//		printf("%d \n",i);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	 return 0;
//}


//#include<stdio.h>
//int main()
//{
//	for(int i=10 ;i>=1 ;i--)
//	{
//		printf("%d.hello\n",i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n,sum = 0;
//	printf("enter no.");
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//	sum=sum+i;}
//	printf("sum =%d\n",sum);
//	printf("avg =%d\n",sum/n);
//	return 0;
//     
//}


////for printing factorial
//#include<stdio.h>
//int main()
//{
//	int n,fact=1;
//	printf("enter no.");
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++)
//	{
//	fact*=i;
//    }
//    printf("factorial =%d\n",fact);
//    return 0;
//}



////for printing factors of a number
//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("enter no.");
//    scanf("%d",&n);
//	for(int i=1;i<n;i++)
//	{
//		if(n%i==0)
//		printf("%d\n",i);
//	}
//	return 0;
//}
  
  
////for printing prime no.(with ternary operator)
//#include<stdio.h>
//int main()
//{
//	int n, c=0;
//	printf("enter no.");
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)
//    {
//    	if(n%i==0)
//    	c++;
//    	
//	}
//	printf("%s\n", c==2 ? "prime":"not prime");
//	return 0;
//}
	      

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i<=5)
//	{
//		printf("hello\n");
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n,sum;
//	printf("enter no.");
//	scanf("%d",&n);
//	while(n!=0)
//	{
//		int last_digit = n%10;
//		sum += last_digit;
//		printf("%d\n",last_digit);
//		n/=10;
//	}
//	printf("sum %d",sum);
//	return 0;
//}

 
 
 
 
//#include<stdio.h>
//int main()
//{
//	int n, rev=0;
//	printf("enter no.");
//	scanf("%d",&n);
//	while(n!=0)
//	{
//		int last_digit = n%10;
//		n/=10;
//		rev=rev*10+last_digit;
//	}
//    printf("reverse : %d\n",rev);
//    return 0;
//}
 
 
////for palindrom no.
//#include<stdio.h>
//int main()
//{
//	int n, rev=0;
//	printf("enter no.");
//	scanf("%d",&n);
//	int original_n=n;
//	while(n!=0)
//	{
//		int last_digit = n%10;
//		n/=10;
//		rev=rev*10+last_digit;
//	}
//    printf(rev==original_n?"palindrome":"not palindrome");
//    return 0;
//}
 
 
 
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do{
//		printf("hello\n");
//		i++;
//	}while(i<=5);
//	return 0;
//}
 
//#include<stdio.h>
//int main()
//{
//	int n=5;
//	for(int i=1;i<=5;i++)
//	{
//		for(int j=1;j<=5;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
 
 
//#include<stdio.h>
//int main()
//{
//	int n=5;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
 
//#include<stdio.h>
//int main() 
//{
//	int n=5;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n-i;j++)
//		{
//			printf("  ");
//		}
//	
//		for(int k=1;k<=i;k++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
 
 
////v-ppttern
//#include<stdio.h>                       
//int main()
//{
//	int n=5;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<2*n;j++)
//		{
//		if(i==j||i+j==2*n)
//		printf("* ");
//		
//		else
//		printf("  ");
//	    }
//	    printf("\n");
//	}
//	
//	return 0;
//}
 


 
//#include<stdio.h>
////function declaration
//int sum(int a,int b);
//void printhello();
//int main(){
//	//function calling
//	printf("sum = %d\n",sum(8,3));
//	printf("sum = %d\n",sum(8,9));
//	printf("sum = %d\n",sum(78,3));	
//	printhello();
//	return 0;
//}
//	//function implementation
//	int sum(int a,int b){
//	
//	return a+b;
//}
//void printhello(){
//	for(int i=1;i<=5;i++){
//	
//	printf("hello\n");
//}
//}

 
 
//#include<stdio.h>
//void printhello();
//int main(){
//	printhello();
//	return 0;
//}
//void printhello()
//{
//	for(int i=1;i<=10;i++){
//	printf("hello\n");
//}
//}
 
 
//#include<stdio.h>
//int max(int a, int b);
//int min(int a, int b);
//int main()
//{
//	printf("max=%d\n",max(5,2));
//	printf("min=%d\n",min(5,2));
//	return 0;
//}
//	int max(int a,int b)
//	{
//		return a>=b ? a: b;
//	}
//	int min(int a, int b)
//	{
//		return a<b ? a: b;
//    }


//#include<stdio.h>
//void swap(int a, int b);
//int main()
//{
//   int a=10,b=20;
//   printf("before swap a= %d and b=%d\n",a,b);
//   swap(a,b);
//   printf("after swap a= %d and b=%d\n",a,b);
//   return 0;	
//}
// 
// void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
// } 
////we will solve this problem at pinters topic  
 
 
 
// CLI utility tool kit bnaio after exams
 
 
 
//#include <stdio.h>
//
//void fibonacci(int n)
//{
//    int a = 0, b = 1, c, i;
//
//    for(i = 1; i <= n; i++)
//    {
//        printf("%d ", a);
//
//        c = a + b;
//        a = b;
//        b = c;
//    }
//}
//
//int main()
//{
//    int n;
//
//    printf("Enter number of terms: ");
//    scanf("%d", &n);
//
//    fibonacci(n);
//
//    return 0;
//} 
  
 
 
//#include <stdio.h>
//
//int main() {
//    int rows = 4; // Total number of rows in the pattern
//    int i, j, k;
//
//    // Outer loop for each row
//    for (i = 1; i <= rows; i++) {
//        
//        // Inner loop 1: Print leading spaces
//        for (j = 1; j <= rows - i; j++) {
//            printf("  "); // Print two spaces for alignment
//        }
//
//        // Inner loop 2: Print stars with a space between them
//        for (k = 1; k <= i; k++) {
//            printf("* ");
//        }
//
//        // Move to the next line after printing each row
//        printf("\n");
//    }
//
//    return 0;
//}
 
 
 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,i,count = 0,isprime;
//	n=2;
//	while(count<100)
//	{
//		isprime = 1;
//		for(i=2;i<n;i++)
//		{
//			if(n%i==0)
//			{
//				isprime=0;
//				break;
//			}
//		}
//		if(isprime==1)
//		{
//			printf("%d\n",n);
//			count++;
//		}
//		n++;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c, i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
