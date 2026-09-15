/*


***   Simple Calculator  ***


#include<stdio.h>


int calculator(int num1, int num2, int choice){
   switch(choice){
       case 1:
           return(num1 + num2);
       case 2:
           return(num1 - num2);
       case 3:
           return(num1 * num2);
       case 4:
           return(num1 / num2);
       case 5:
           return(num1 % num2);
       default:
           printf("Enter valid choice\n");
           return -1;
   }
}


void main() {
   int num1, num2, choice;
   char decide;
   do {
       printf("Enter two integer values: ");
       scanf("%d %d",  &num1, &num2);

       printf("1.Add\t2.Subtract\t3.Multiply\t4.Divide\t5.Modulus\n");

       printf("Enter your choice\n");
       scanf("%d", &choice);
       printf("Output = %d\n", calculator(num1, num2, choice));

       printf("Do you want to continue (Y/N): ");
       scanf(" %c", &decide);
   }while(decide == 'Y');
  
}





*** largest among three number by using function


#include<stdio.h>


int largest(int a,int b,int c){
 
    
    if(a>b && a>c){
        return 1;
    }
    else if(b>a && b>c){
        return 2;
    }
    else{
        return 0;
    }
}

int main(){
    
       int a,b,c;

       printf("Enter three number: ");
       scanf("%d %d %d",  &a,&b,&c);

       int result = largest(a,b,c);
 
        if(result==1)
        {
            printf("%d is largest number ",a);
        }
        else if(result==2)
        {
            printf("%d is largest number ",b);
        }
        else{
           printf("%d is a largest number",c);
        }
}





*** factorial by using function ***






#include<stdio.h>
int fact(int f,int n){
    
  for(int i=1;i<=n;i++){
       f=f*i;
  }
    return f; 
    
}

int main(){
    
       int f=1,n;
       printf("Enter a number = ");
       scanf("%d",&n);

       int result = fact(f,n);
       printf("factorial is = %d", fact(f,n));
}



*** prime number **


#include<stdio.h>

int main(){
      int i,n,count=0;
      printf("Enter a number = ");
      scanf("%d",&n);

      for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
      }

if(count==2){
     printf("%d is prime number",n);
}
else{
    printf("%d is not prime number",n);
}

}



*** prime number by usng function **


#include<stdio.h>

int prime(int n,int count){
     
     for(int i=1;i<=n;i++){
         if(n%i==0){
            count++;
         }
      }
     return count;
}


int main(){
      int n,count=0;
      printf("Enter a number = ");
      scanf("%d",&n);
      int result = prime(n,count);
      if(result==2){
            printf("%d is prime number",n);
      }
      else{
          printf("%d is not prime number",n);
     }
return 0;
}
















                           //   FUNCTION TYPES EXAMPLE **




// 1. WITHOUT ARGUMENT AND WITHOUT RETURN VALUE..

#include<stdio.h>

void check(){
     int n;
     printf("Enter a number= ");
     scanf("%d",&n);
     if(n%2==0){
         printf("even num");
     }
     else{
        printf("odd num");
     }
}


int main(){
    check();
    return 0;
}




// 2. WITHOUT ARGUMENT AND WITH RETURN VALUE..


#include<stdio.h>

int check(){
     int n;
     printf("Enter a number= ");
     scanf("%d",&n);
    if(n%2==0){
         return 1;
     }
     else{
         return 0;
     }
}


int main(){
    int result=check();
     if(result == 1){
         printf("even num");
     }
     else{
        printf("odd num");
     }
     return 0;
}




// 3. WITH ARGUMENT AND WITHOUT RETURN VALUE..

#include<stdio.h>

void even(int n){
         if(n%2==0)
            printf("even num");
         else      
           printf("odd num");
}

int main(){

    int n;
    printf("Enter a number= ");
    scanf("%d",&n);
    even(n);
    return 0;
}





// 4. WITH ARGUMENT AND WITH RETURN VALUE


#include<stdio.h>

int even(int n){
      if(n%2==0)
           return 1;
         else      
           return 0;
}

int main(){
    int n;
    printf("Enter a number= ");
    scanf("%d",&n);
    
    int result = even(n);

     if(result == 1){
         printf("even num");
     }
     else{
        printf("odd num");
     }
     return 0;
  
}

*/




