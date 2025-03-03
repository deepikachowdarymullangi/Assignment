Data Types
1. 
#include <stdio.h>
int main() {
    int num = 10;
    float decimal = 3.14;
    char letter = 'A';
    printf("Integer: %d Float: %f Character: %c", num,decimal,letter);
    return 0;
}
2. 
#include <stdio.h>
int main() {
    int num;
    float conv;
    printf("Enter an integer: ");
    scanf("%d", &num);
    conv = (float)num;
    printf("Original Integer: %d Converted Float: %.2f", num,conv);
    return 0;
}
3. 
#include <stdio.h>
int main() {
    printf("Size of int= %zu bytes\n", sizeof(int));
    printf("Size of float= %zu bytes\n", sizeof(float));
    printf("Size of double= %zu bytes\n", sizeof(double));
    printf("Size of char= %zu byte\n", sizeof(char));
    printf("Size of short= %zu bytes\n", sizeof(short));
    printf("Size of long= %zu bytes\n", sizeof(long));
    printf("Size of long long= %zu bytes\n", sizeof(long long));
    return 0;
}
4.
#include <stdio.h>
int main() {
    unsigned int a, b;
    printf("Enter a & b unsigned integers: ");
    scanf("%u %u", &a,&b);
    unsigned int and_result = a & b;
    unsigned int or_result = a | b;
    unsigned int xor_result = a ^ b;
    printf("Bitwise AND: %u\n", and_result);
    printf("Bitwise OR: %u\n", or_result);
    printf("Bitwise XOR: %u\n", xor_result);
    return 0;
}
5.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter num1 & num2: ");
    scanf("%d %d", &num1,&num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    if (num2 != 0)
        printf("Quotient: %.2f\n", (float)num1/num2);
    else
        printf("Division by zero is not allowed.\n");
    return 0;
}
6.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of '%c' is %d", ch, ch);
    return 0;
}
7.
#include <stdio.h>
int main() {
    float num;
    printf("Enter a float value: ");
    scanf("%f", &num);
    printf("Number rounded to 2 decimal places: %.2f", num);
    return 0;
}
8.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 -  num2;
    printf("After swapping:\n");
    printf("First integer: %d Second integer: %d", num1,num2);
    return 0;
}
9.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is an even number.", num);
    } else {
        printf("%d is an odd number.", num);
    }
    return 0;
}
Operators
1. 
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^  num2;
    printf("After swapping:\n");
    printf("First integer: %d Second integer: %d", num1,num2);
    return 0;
}
2.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }
    return 0;
}
3.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a & b integers: ");
    scanf("%d %d", &a,&b);
    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;
    printf("Bitwise AND: %d\n", and_result);
    printf("Bitwise OR: %d\n", or_result);
    printf("Bitwise XOR: %d\n", xor_result);
    return 0;
}
4.
#include <stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1; 
        num = num >> 1; 
    }
    return count;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Number of set bits in %d: %d\n", num, countSetBits(num));
    return 0;
}
5.
#include <stdio.h>
int isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPowerOfTwo(num)) {
        printf("%d is a power of two", num);
    } else {
        printf("%d is not a power of two", num);
    }
    return 0;
}
6.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num > 0) ? printf("%d is positive.", num) :(num < 0) ? printf("%d is negative.", num) :printf("The number is zero.");
    return 0;
}
7.
#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, originalNum, remainder, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num; 
    while (num > 0) {
        remainder = num % 10;     
        sum += factorial(remainder); 
        num /= 10;               
    }
    if (sum == originalNum) {
        printf("%d is a Strong Number", originalNum);
    } else {
        printf("%d is not a Strong Number", originalNum);
    }
    return 0;
}
8.
#include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num; 
    while (num > 0) {
        remainder = num % 10;             
        reversedNum = (reversedNum * 10) + remainder; 
        num /= 10;                        
    }
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome Number", originalNum);
    } else {
        printf("%d is not a Palindrome Number", originalNum);
    }
    return 0;
}
9.
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; (i * i) <= num && isPrime; i++) {
            if (num % i == 0) { 
                isPrime = 0;
            }
        }
    }
  if(isPrime) {
    printf("It is a Prime number");
  }
  else{
    printf("Not a Prime number");
  }
  return 0;
}
10.
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year", year);
    } else {
        printf("%d is not a Leap Year", year);
    }
    return 0;
}
Arrays
1.
#include <stdio.h>
int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70}; 
    int index;
    printf("Enter the index (0-6) to access an element: ");
    scanf("%d", &index);
    if (index >= 0 && index < 7) {
        printf("Element at index %d is %d\n", index, arr[index]);
    } else {
        printf("Invalid index! Please enter a value between 0 and 6.\n");
    }
    return 0;
}
2.
#include <stdio.h>
int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70}; 
    int index, newValue;
    printf("Original array: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the index (0-6) of the element you want to change: ");
    scanf("%d", &index);
    if (index >= 0 && index < 7) {
        printf("Enter the new value: ");
        scanf("%d", &newValue);
        arr[index] = newValue;
        printf("Updated array: ");
        for (int i = 0; i < 7; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index! Please enter a value between 0 and 6.\n");
    }
    return 0;
}
3.
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50, 60, 70};
    printf("Array elements: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
4.
#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size]; 
    printf("Enter %d elements:", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
5.
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size_in_bytes = sizeof(arr);
    int num_elements = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array in bytes: %d\n", size_in_bytes);
    printf("Number of elements in the array: %d\n", num_elements);
    return 0;
}
6.
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70}; 
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of the array: %d", length);
    return 0;
}
7.
#include <stdio.h>
int main() {
    int n;
    float sum = 0, average;
    printf("Enter the number of ages: ");
    scanf("%d", &n);
    int ages[n];
    printf("Enter %d ages:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
        sum += ages[i]; 
    }
    average = sum / n;
    printf("The average age is: %.2f", average);
    return 0;
}
8.
#include <stdio.h>
int main() {
    int n, min_age;
    printf("Enter the number of ages: ");
    scanf("%d", &n);
    int ages[n]; 
    printf("Enter %d ages:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
        if (i == 0) {
            min_age = ages[i];
        }
        else if (ages[i] < min_age) {
            min_age = ages[i];
        }
    }
    printf("The lowest age is: %d", min_age);
    return 0;
}
9.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
10.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("The sum of all elements in the array is: %d\n", sum);
    return 0;
}



















  













