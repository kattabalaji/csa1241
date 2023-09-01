DECIMAL TO BINARY CONVERSION
EXP NO: 21

AIM: To write a C program to implement decimal to binary conversion.


ALGORITHM:
1)	Check if your number is odd or even.
2)	If it's even, write 0 (proceeding backwards, adding binary digits to the left of the result).
3)	Otherwise, if it's odd, write 1 (in the same way).
4)	Divide your number by 2 (dropping any fraction) and go back to step 1. Repeat until your original number is 0.

PROGRAM:
#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
int a[10],n,i;    
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}





INPUT:



OUTPUT:





































RESULT: Thus the program was executed successfully using DevC++.




HEXADECIMAL TO DECIMAL CONVERSION

EXP NO: 22

AIM: To write a C program to implement hexadecimal to decimal conversion.

ALGORITHM:
1)	Start from the right-most digit. Its weight (or coefficient) is 1.
2)	Multiply the weight of the position by its digit. Add the product to the result.
(0=0, 1=1, 2=2, … 9=9, A=10, B=11, C=12, D=13, E=14,F=15)
3)	Move one digit to the left. Its weight is 16 times the previous weight.
4)	Repeat 2 and 3 until you go through all hexadecimal digits.


PROGRAM:
#include<stdio.h>
int main()
{
	int n;
	printf("enter the hex decimal number");
	scanf("%x",&n);
	printf("the decimal value is:%d",n);
	return 0;
}
INPUT:




OUTPUT:








RESULT: Thus the program was executed successfully using DevC++.


DECIMAL TO OCTAL CONVERSION
EXP NO: 23

AIM: To write a C program to implement decimal to octal conversion.

ALGORITHM:
1)	Store the remainder when the number is divided by 8 in an array.
2)	Divide the number by 8 now
3)	Repeat the above two steps until the number is not equal to 0.
4)	Print the array in reverse order now.

PROGRAM:
#include <stdio.h>
int main()
{
    long decimal, remainder, quotient,octal=0;
    int octalnum[100], i = 1, j;
    printf("Enter the decimal number: ");
    scanf("%ld", &decimal);
    quotient = decimal;
    while (quotient != 0)
    {
        octalnum[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    for (j = i - 1; j > 0; j--)
        octal= octal*10 + octalnum[j];
    printf("Equivalent octal value of decimal no %d is: %d  ", decimal,octalnum);
    return 0;
}

INPUT:


OUTPUT:

RESULT: Thus the program was executed successfully using DevC++.


BINARY TO DECIMAL CONVERSION
EXP NO: 24

AIM: To write a C program to implement binary to decimal conversion.

ALGORITHM:
1)	Start
2)	Read the binary number from the user, say ‘n’
3)	Initialize the decimal number, d=0
4)	Initialize i=0
5)	Repeat while n != 0:
i.	Extract the last digit by: remainder = n % 10
ii.	n = n/10
iii.	d = d + (remainder * 2<sup>i</sup>)
iv.	Increment i by 1
6)	Display the decimal number, d
7)	Stop

PROGRAM:
#include <stdio.h>
void main()  
{  
    int num, binary_num, decimal_num = 0, base = 1, rem;  
    printf (" Enter a binary number with the combination of 0s and 1s \n");  
    scanf (" %d", &num); 
    binary_num = num; 
    while ( num > 0)  
    {  
        rem = num % 10; 
        decimal_num = decimal_num + rem * base;  
        num = num / 10;  
        base = base * 2;  
    }  
  
    printf ( " The binary number is %d \t", binary_num); 
    printf (" \n The decimal number is %d \t", decimal_num);    
}
INPUT:
OUTPUT:
RESULT: Thus the program was executed successfully using DevC++.
TWO STAGE PIPELINE
EXP NO: 25

AIM: To write a C program to implement two stage pipelining.


PROCEDURE:
Step1:Start
Step 2: Initialize the counter variable to 1.
Step 3:.Prompt the user to enter the first number (a).
Step 4:.Read the first number (a) from the user.
Step 5:Increment the counter by 1.
Step 6:Prompt the user to enter the second number (b).
Step 7:Read the second number (b) from the user.
Step 8:.Increment the counter by 1.
Step 9:Display the menu of operations: Addition, Subtraction, Multiplication, and Division.
Step 10:Prompt the user to select an operation (choice).
Step 11:Read the choice from the user.
Step 12:Use a switch statement to perform the operation based on the selected choice:
        12.1For choice 1: Perform addition (res = a + b). Increment the counter by 1.
        12.2For choice 2: Perform subtraction (res = a - b). Increment the counter by 1.
        12.3. For choice 3: Perform multiplication (res = a * b). Increment the counter by 1.
        12.4 For choice 4: Perform division (res = a / b). Increment the counter by 1.
        12.5. For any other choice: Display "Wrong input".
Step 13: Display the value of the counter (the number of cycles taken).
Step 14:Prompt the user to enter the number of instructions (ins).
Step 15:Read the number of instructions (ins) from the user.
Step 16:Calculate the performance measure by dividing the number of instructions (ins) by the counter and store it in the performance measure variable.
Step 17:Display the performance measure
Step 18:End


PROGRAM:

#include<stdio.h>
int main()
{
	int counter =1,a,b,choice,res,ins;
	printf("Enter number 1:");
	scanf("%d",&a);
	counter = counter+1;
	printf("Enter number 2:");
	scanf("%d",&b);
	counter = counter +1;
	printf("1-Addition:\n2-Subtraction:\n3-Multiplication:\n4-Division:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Performing addition\n");
				res = a+b;
				counter = counter+1;
				break;
		case 2: printf("Performing subtraction\n");
				res = a-b;
				counter = counter+1;
				break;
		case 3: printf("Performing Multiplication\n");
				res = a*b;
				counter = counter+1;
				break;
		case 4: printf("Performing Division\n");
				res = a/b;
				counter = counter+1;
				break;
		default: printf("Wrong input");
				 break;
	}
	printf("The cycle value is:%d\n",counter);
	printf("Enter the number of instructions:");
	scanf("%d",&ins);
	int performance_measure = ins/counter;
	printf("The performance measure is:%d\n",performance_measure);
	return 0;
	
}

INPUT:
OUTPUT
RESULT: Thus the program was executed successfully using DevC++.

CPU PERFORMANCE
EXP NO: 26

AIM: To write a C program to implement CPU performance measures.

ALGORITHM:
Step 1: start
Step 2:Declare the necessary variables: cr (clock rate), p (number of processors), p1 (a copy of the number of processors), i (loop variable), and cpu (array to store CPU times).
Step 3: Initialize the cpu array elements to 0.
Step 4: Prompt the user to enter the number of processors (p).
Step 5: Store the value of p in p1.
Step 6: Start a loop from 0 to p-1:
      a. Prompt the user to enter the cycles per instruction (cpi) for the current processor.
      b. Prompt the user to enter the clock rate (cr) in GHz for the current processor.
      c. Calculate the CPU time (ct) using the formula: ct = 1000 * cpi / cr.
      d. Display the CPU time for the current processor.
      e. Store the CPU time in the cpu array at index i.
Step 7: Set max as the first element of the cpu array.
Step 8:Start a loop from 0 to p1-1:
      a. If the CPU time at index i is less than or equal to max, update max to the current CPU time.
Step 9: Display the processor with the lowest execution time (max).
Step 10: Exit the program.


PROGRAM:

  #include <stdio.h>

int main() 
{
  float cr;
  int p,p1,i;
  float cpu[5];
  float cpi,ct,max;
  int n=1000;
  for(i=0;i<=4;i++)
  {
      cpu[5]=0;
  }
  printf("\n Enter the number of processors:");
  scanf("%d",&p);
  p1=p;
  for(i=0;i<p;i++)
{
    printf("\n Enter the Cycles per Instrcution of processor:");
  scanf("%f",&cpi);
  printf("\n Enter the clockrate in GHz:");
  scanf("%f",&cr);
  ct=1000*cpi/cr;
  printf("The CPU time is: %f",ct);
  cpu[i]=ct;
}
max=cpu[0];
for(i=0;i<p1;i++)
{
    if(cpu[i]<=max)
    max=cpu[i];
}
printf("\n The processor has lowest Execution time is: %f ", max);
    return 0;
}

INPUT:
OUTPUT:
RESULT: Thus the program was executed successfully using DevC++.
HALF ADDER


EXP.NO: 27

AIM:
To design and implement the two bit half adder using Logisim simulator.
PROCEDURE:
1)	Pick and place the necessary gates.
2)	Insert 2 inputs into the canvas. 
3)	Connect the inputs to the XOR gate and AND gate.
4)	Insert 2 outputs into the canvas.
5)	  Make the connections using the connecting wires.
6)	Verify the truth table.


TRUTH TABLE:


A	B	S	C
0	0	0	0
0	1	1	0
1	0	1	0
1	1	0	1
S = A XOR B        C = A AND B 


OUTPUT
RESULT: Thus 2-bit half adder has been designed and implemented successfully using logisim simulator.
TWO BIT HALF SUBTRACTOR


EXP.NO: 28

AIM:
To design and implement the two bit half subtractor using Logisim simulator.

PROCEDURE:
1)	Pick and place the necessary gates.
2)	Insert 2 inputs into the canvas. 
3)	Connect the inputs to the OR gate, AND gate and NOT gate.
4)	Insert 2 outputs into the canvas.
5)	  Make the connections using the connecting wires.
6)	Verify the truth table.


TRUTH TABLE:

 
Diff=A'B+AB'
Borrow = A'B

OUTPUT
RESULT: Thus 2-bit half subtractor has been designed and implemented successfully using logisim simulator.	

         TWO BIT HALF ADDER USING LOGISIM SIMULATOR
FULL ADDER

EXP.NO: 29

AIM:
To design and implement the full adder using Logisim simulator.

PROCEDURE:
1)	Pick and place the necessary gates.
2)	Insert 3 inputs into the canvas. 
3)	Connect the inputs to the XOR gate, AND gate and OR gate.
4)	Insert 2 outputs into the canvas.
5)	Make the connections using the connecting wires.
6)	Verify the truth table.

TRUTH TABLE:

 

Sum=(A ⊕ B) ⊕ Cin
Carry=A.B + (A ⊕ B)
OUTPUT
 
RESULT: Thus full adder has been designed and implemented successfully using logisim simulator.
	
FULL SUBTRACTOR

EXP.NO: 30

AIM:
To design and implement the full subtractor using Logisim simulator.
PROCEDURE:
1)	Pick and place the necessary gates.
2)	Insert 3 inputs into the canvas. 
3)	Connect the inputs to the XOR gate, AND gate and OR gate.
4)	Insert 2 outputs into the canvas.
5)	Make the connections using the connecting wires.
6)	Verify the truth table.
TRUTH TABLE:
Diff=(A ⊕ B) ⊕ 'Borrowin'
Borrow=A'.B + (A ⊕ B)'
OUTPUT
RESULT: Thus full subtractor has been designed and implemented successfully using logisim simulator.
