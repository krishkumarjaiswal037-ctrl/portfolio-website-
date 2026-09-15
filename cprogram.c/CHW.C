/*


##$$%%^^&&**   BY KRISH KUMAR JAISWAL ##$$%%^^&&**


 
## SWAPPING WITH THIRD VARIABLE ##

#include<stdio.h>
int main(){
     
   int x=10,y=20;
   int w;
   
   printf("Before swapping x = %d\n ",x);
   printf("Before swapping y = %d\n ",y);
   
   w=x;
   x=y;
   y=w;

   printf("After swapping x = %d\n ",x);
   printf("After swapping y = %d ",y);
   
    return 0;
}





## SWAPPING WITHOUT THIRD VARIABLE ##

#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b;  
    a = a - b;  

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}





## ODD OR EVEN ##

#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}






##  POSITIVE AND NEGATIVE OR ZERO CHECK ##

#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is Positive\n", num);
    } else if (num < 0) {
        printf("%d is Negative\n", num);
    } else {
        printf("%d is Zero\n", num);
    }

    return 0;
}






## VOWEL OR CONSONANT ##

#include <stdio.h>
int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch); 
    
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a Vowel\n", ch);
    }else {
            printf("%c is a Consonant\n", ch);
        }
        
    return 0;
}






 ## LEAP YEAR CHECKING ##

#include <stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is NOT a Leap Year\n", year);
    }

    return 0;
}





## ALPHABET OR DIGIT OR SYMBOL ##

#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        printf("%c is an Alphabet\n", ch);
    } else if (ch >= 48 && ch <= 57) {
        printf("%c is a Digit\n", ch);
    } else {
        printf("%c is a Symbol\n", ch);
    }

    return 0;
}





## LOAN ELIGIBILITY CHECK ##

#include <stdio.h>
int main() {
    int age, creditScore;
    float monthlyIncome, existingEMI;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income : ");
    scanf("%f", &monthlyIncome);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    printf("Enter existing loan EMI (₹): ");
    scanf("%f", &existingEMI);


    if (age >= 18 && age <= 60 &&
        monthlyIncome >= 25000 &&
        creditScore >= 700 &&
        existingEMI < 40) {
        
        printf("\nEligible for loan\n");
    } else {
        printf("\nNot eligible for loan\n");
    }

    return 0;
}






## SCHOLARSHIP ELIGIBILITY CHECK ####

#include <stdio.h>
int main() {
    float percentage;
    float annualIncome;
    int disciplinaryRecord; 
    int regularStudent;     

    printf("Enter student's percentage: ");
    scanf("%f", &percentage);

    printf("Enter annual family income (₹): ");
    scanf("%f", &annualIncome);

    printf("Does the student have a disciplinary record? (0 = No, 1 = Yes): ");
    scanf("%d", &disciplinaryRecord);

    printf("Is the student a regular student? (1 = Yes, 0 = No): ");
    scanf("%d", &regularStudent);

    if (percentage >= 80 &&
        annualIncome <= 300000 &&
        disciplinaryRecord == 0 &&
        regularStudent == 1) {
        
        printf("\nEligible for Scholarship\n");
    } else {
        printf("\nNot Eligible for Scholarship\n");
    }

    return 0;
}







## MENU DRIVEN PROGRAM FOR BANKING APPLICATION ##



#include <stdio.h>

int main()
{
    int choice;
    float balance = 1000.0, amount;

    do
    {
        printf("\n===== BANKING APPLICATION =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance += amount;
                    printf("Deposit Successful!\n");
                    printf("Updated Balance: %.2f\n", balance);
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid Amount!\n");
                }
                else if(amount > balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using our banking system!\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}





## DETERMINE THE TYPE OF TRAINGLE ##

#include <stdio.h>
int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
        
    return 0;
}



#include <stdio.h>
int main() {
    float a, b, c;
    int type;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

        if (a == b && b == c) {
           type = 1;
        }
        else if (a == b || b == c || a == c) {
           type = 2;
        }
        else {
           type = 3;
        }
        
        switch(type)
        {
        case 1:
          printf("The triangle is Equilateral.\n");
            break;
        case 2:
         printf("The triangle is Isosceles.\n");
         break;
         case 3:
           printf("The triangle is Scalene.\n");
         break;  
        default:
          printf("wrong entry:");
        }
    return 0;
}






**** sum of first even number by pass by value ***


#include<stdio.h>

int sumeven(int n){
    int sum=0;
    for(int i=2;i<=n;i++){
        if(i%2==0)
        sum += i;
    }
    return sum;
}

int main(){

  int n;
  printf("Enter a number = ");
  scanf("%d",&n);
   int sum = sumeven(n);
 printf("sum = %d",sum);
}





**** sum of first even number by pass by REFERENCE ***



#include<stdio.h>

int sumeven(int *n){
    int sum=0;
    for(int i=2;i<=*n;i++){
        if(i%2==0)
        sum += i;
    }
    return sum;
}

int main(){

  int n;
  printf("Enter a number = ");
  scanf("%d",&n);
   int sum = sumeven(&n);   
 printf("sum = %d",sum);
 
}



*** grade , marks finding by different function usinng  ***




#include<stdio.h>

int calculateTotal(int marks[], int n){
        int total = 0;
        for(int i=1;i<=n;i++){
             total += marks[i];
        }
        return total;
}


float calculateAverage(int total,int n){
       return (float)total/n;   
}


char findgrade(float average){
      if(average >= 90)
         return 'A';
      else if(average >= 80)
         return 'B';
      else if(average >= 70)
         return 'C';
      else if(average >= 60)
         return 'D';
      else if(average >= 50)
         return 'E';   
      else
         return 'F' ;
}

int main(){

    int marks[7],total;
    float average;
    char grade;
    printf("Enter the marks of 1.ENGLISH 2.MATHEMATICS  3.COMPUTER 4.NEPALI 5.BIOLOGY 6.PHYSICS 7.CHEMISTRY = ");

    for(int i=1;i<=7;i++){
             scanf("%d",&marks[i]);
    }
   
    total = calculateTotal(marks, 7);
    average = calculateAverage(total, 7);
    grade = findgrade(average);


    printf("Total marks is %d\n",total);
    printf("Average marks is %f\n",average);
    printf("Grade marks is %c\n\n",grade);

    return 0;
}







*****   celcius into fahrenheit convertion  ********






#include<stdio.h>

float ctof(float celsius){
     return (celsius * 9 / 5) + 32;
}

float ftoc(float fahrenheit){
     return (fahrenheit -32) * 5 / 9;
}

float ctok(float celsius){
     return celsius + 273.15;
}

int main(){
     float temp , result;
     int choice;
     
     do{

     printf("\n*** Choose anyone for conversion : *** \n");
     printf("1.Celsius to Fahrenheit\n");
     printf("2.Fahrenheit to Celsius \n");
     printf("3.Celsius to Kelvin\n");
     printf("4.Exit\n\n");

     printf("Enter the choice= ");
     scanf("%d",&choice);
     
     printf("Enter the temperature = ");
     scanf("%f",&temp);

     switch(choice){

        case 1:
             result = ctof(temp);
             printf("%.2f celsius = %.2f fahrenheit \n\n",temp,result);
        break;
       
        case 2:
             result = ftoc(temp);
             printf("%.2f fahrenheit = %.2f celsius \n\n",temp,result);
        break;
        
        case 3:
             result = ctok(temp);
             printf("%.2f celsius = %.2f kelvin\n\n",temp,result);
        break;
        
        case 4:
             printf("Thanks for using Temperature convertion ! \n");
        break;

        default:
           printf("Wrong Chooice !");
     } 
 } while(choice != 4); 
}


























































































































































































































































































































































































































  


*/

#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00; // Starting balance set to $1000.00
    float amount;

    do {
        // Display the Menu Options
        printf("\n=================================");
        printf("\n       BANKING SYSTEM MENU       ");
        printf("\n=================================");
        printf("\n1. Deposit Money");
        printf("\n2. Withdraw Money");
        printf("\n3. Check Balance");
        printf("\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        // Perform action based on user's choice
        switch (choice) {
            case 1:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance = balance + amount;
                    printf("Success! Deposited $%.2f. New balance: $%.2f\n", amount, balance);
                } else {
                    printf("Invalid amount! Deposit must be greater than zero.\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Error! Insufficient balance. You have $%.2f\n", balance);
                } else if (amount <= 0) {
                    printf("Invalid amount! Withdrawal must be greater than zero.\n");
                } else {
                    balance = balance - amount;
                    printf("Success! Withdrew $%.2f. Remaining balance: $%.2f\n", amount, balance);
                }
                break;

            case 3:
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using our bank system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please choose a option from 1 to 4.\n");
        }

    } while (choice != 4); // Repeat until user selects 4 (Exit)

    return 0;
}




