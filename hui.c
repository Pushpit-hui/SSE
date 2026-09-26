


#include <stdio.h>


int main() {

int i, j, k;
for (i=1; i <= 3; i++){

for (j= 1; j <= 3; j++){

for ( k = 1 ; k <= 3 ; k++ ){

if ( i == 3 && j == 3 && k == 3 ){
goto out ;}
else{
printf ("%d %d %d\n", i, j, k) ;}
}

}
}
out :

printf ( "Out of the loop at last!" ) ;

return 0 ;
}

/*int main(){
    int n ;
    printf("enter number :");
    scanf("%d",&n);

    int sum = 0 ;
    


    while(n>=10){
        int sum = 0 ;
        while(n!=0){
        int digit=n%10;
        sum+=digit;


        n=n/10;
        }

        n=sum;

 

}

printf("%d",n);

return 0;


    }

*/

/*int main (){

int r=0;
int n ;

printf("Enter number: ");
scanf("%d", &n);

while (n>0){
int digit=n%10;
r=r*10 + digit;


n=n/10;


}

while(r>0){
    int newdigit=r%10;
    switch (newdigit){
    case 0 :
    printf("zero ");
    break;
    case 1 :
    printf("one ");
    break;
    case 2 :
    printf("two ");
    break;
    case 3:
    printf("three ");
    break;
    case 4 :
    printf("four ");
    break;
    case 5 :
    printf("five ");
    break;
    case 6 :
    printf("six ");
    break;
    case 7 :
    printf("seven ");
    break;
    case 8 :
    printf("eight ");
    break;
    case 9 :
    printf("nine ");
    break;
    
}

    r=r/10;
}
return 0 ;
}




/*
int fib(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int fib1 = fib(n - 1);
    int fib2 = fib(n - 2);

    int fibN = fib1 + fib2;

    return fibN;
}

int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    int ans = fib(a);

    printf("Fibonacci of %d = %d\n", a, ans);

    return 0;
}
/*
/*

int main() {

    int n ;
    int sum = 0 ;
    int f=0;
    int r=0;
    printf("enter the number");
    scanf("%d",&n);

    while(n>0){
        int digit = n%10;
        sum=sum+digit;
        f+=(digit)*(digit)*(digit);
        r=r*10 + digit;




//123456 % 10 = 6 , 12345 % 10 = 5 , 

        n=n/10;

}

printf("armstrong number is : %d \n",f);
printf("reverse of the number is : %d \n",r);
printf("sum of the digits is :%d \n",sum);







return 0;
}
*/
/*
void input(int arr[], int i, int n) {

    if (i == n) {
        return;
    }

    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);

    input(arr, i + 1, n);
}

int main() {

    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    int arr[n];

    input(arr, 0, n);


    return 0;
}
*/




   /* int n ;


    printf("enter number 1 : ");
    scanf("%d",&n);



    for ( int i = 2 ; i <=n ; i++ ){

        int f = 0;
        for ( int j = 2 ; j < i ; j++ ){
            if ((i%j)==0){
                f=1;
                break;
            }
            }
        if (f==0){
        printf("%d \n",i);

        }


        }*/



    // int a,b,c;
    // printf("enter number 1 : ");
    // scanf("%d",&a);

    // printf("enter number 2 : ");
    // scanf("%d",&b);

    // printf("enter number 3 : ");
    // scanf("%d",&c);

    // int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // printf("maximum number : %d",max);

    

    // char grade ;
    // printf("enter your grade : ");
    // scanf("%c",&grade);

    // grade = toupper(grade);

    // switch(grade){
    //     case 'A' :
    //     printf("Excellent");
    //     break;
    //     case 'B' :
    //     printf("Good");
    //     break;
    //     case 'C' :
    //     printf("Average");
    //     break;
    //     case 'D' :
    //     printf("Poor");
    //     break;
    //     case 'E' :
    //     printf("Fail");
    //     break;
    //     default :
    //     printf("kripya aukaat ke bahar ka grade choose na kren");
    //     break;




    // }


