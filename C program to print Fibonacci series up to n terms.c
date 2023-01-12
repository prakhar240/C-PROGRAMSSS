
#include <stdio.h>
int main()
{
 int i, n, t1 = 0, t2 = 1, nextTerm;
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 printf("Fibonacci Series: ");
 for (i = 1; i <= n; ++i)
 {
 printf("%d, ", t1);
 nextTerm = t1 + t2;
 t1 = t2;
 t2 = nextTerm;
 }
 return 0;
}
26. C program to print Armstrong numbers from 1 to n AND 
Check a given number is Armstrong numbers or not.
#include <stdio.h>
int main()
{
 int n, i, originalN, remainder, result;
 // Print Armstrong numbers from 1 to n
 printf("Enter the upper limit: ");
 scanf("%d", &n);
 printf("Armstrong numbers between 1 and %d are: ", n);
 for (i = 1; i <= n; ++i)
 {
 originalN = i;
 result = 0;
 while (originalN != 0)
 {
 remainder = originalN % 10;
 result += remainder * remainder * remainder;
 originalN /= 10;
 }
 if (result == i)
 printf("%d ", i);
 }
 // Check if a given number is an Armstrong number or not
 int num;
 printf("\nEnter a number to check if it is an Armstrong number: ");
 scanf("%d", &num);
 originalN = num;
 result = 0;
 while (originalN != 0)
 {
 remainder = originalN % 10;
 result += remainder * remainder * remainder;
 originalN /= 10;
 }
 if (result == num)
 printf("%d is an Armstrong number.", num);
 else
 printf("%d is not an Armstrong number.", num);
 return 0;
 }
 
