// #include<iostream>
//  using namespace std;
//  int main()
// {
//      int age=18;
//      char grade ='A';
//      float pi =3.14f;
//      bool issafe=true;
//      double price=100.99;
//      cout<<"rudra dubey"<<endl<<sizeof(age)<<endl<<grade<<endl<<pi<<endl<<issafe<<endl<<price;
//      return 0;
// }

//(type conversion)

// #include<iostream>
// using namespace std;
// int main()
// {
//    char age='A';

//    int year = age;
//     cout<<year<<endl;
// }

// type casting
// #include<iostream>
// using namespace std;
// int main()
// {
//     double price =100.99;

//     int newPrice =(int)price;
//     cout<<newPrice<<endl;
// }

//todo :INPUT IN C++


// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter Your age ";
//     cin>>age;
//     cout<<"Your Age is "<<age<<endl;
//     return 0;
// }

//todo : OPERATORS(arithematic)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a =5,b=10;
//     cout<<"sum is ="<<(a+b)<<endl;
//     cout<<"substraction is ="<<(a-b)<<endl;
//     cout<<"proiduct is ="<<(a*b)<<endl;
//     cout<<"division is ="<<(b/a)<<endl;
//     cout<<"modulo is ="<<(b%a)<<endl;

// }

//todo :OPERATORS(relational)


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<(3<5)<<endl;
//     cout<<(3>5)<<endl;
//     cout<<(3<=3)<<endl;
//     cout<<(3==3)<<endl;
//     cout<<(3==5)<<endl;
//     cout<<(3!=5)<<endl;
// }

//todo :OPERATOIRS(logical)

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<((3>1)&&(3>5))<<endl;
// }

// calculate sum of 2 numbers

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int A,B;
//     cout<<"Enter any number : ";
//     cin>>A;
//     cout<<"enter any number : ";
//     cin>>B;
//     cout<<"The addition is : "<<(A+B)<<endl;
// }

// todo :UNARY OPERATOR
//*>INCREMENT(++)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a= 10;
//     //int b =a++; (this runs the code and then change the value)
//     int b=++a;
//     cout<<b<<endl;
//     cout<<a<<endl;
// }


//*>DECRTEMENT(--)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     //int b = a--;
//     int b = --a;
//     cout<<"B = "<<b<<endl;
//     cout<<"A = "<<a<<endl;

// }

//todo : CONDITIONAL STATEMENT (IF ELSE)


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=-2;
//     if(a>=0){
//         cout<<"a is positive. "<<endl;
//     } else{
//         cout<<"a is negative. "<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"enter your age : ";
//     cin>>age;
//     if(age>=18){
//         cout<<"You Can vote\n";
//     } else{
//         cout<<"You can not vote\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"Enter number to check : ";
//     cin>>number;

//     if(number%2==0){
//         cout<<"The number is even..."<<endl;
//     }else{
//         cout<<"The number is odd..."<<endl;
//     }
// }

//todo :IF - ELSE IF - ELSE

// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks;
//     cout<<"Enter your marks : ";
//     cin>>marks;
//     if(marks>=90){
//         cout<<"Brade 'A' "<<endl; 
//     }else if(marks>=80 && marks<90){
//         cout<<"Grade 'B' "<<endl;
//     }else{
//         cout<<"Grade 'C' "<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter any character : ";
//     cin>>ch;

//     if('a'<=ch && 'z'>=ch){
//         cout<<"character is lowercase... "<<endl;
//     }else if('A'<= ch && 'Z'>=ch){
//         cout<<"character is uppercase... "<<endl;
//     }
// }

//* TERNARY STATEMENT(note:- Don't use for large statement as it is hard to understand)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=-45;
//     cout<<(n>=0?"positive":"negative")<<endl;
// }

//todo :LOOPS(WHILE LOOP...)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     while (a<=10)
//     {
//         int b = a++;
//         cout<<b<<" ";
//     } 
// }

// todo :FOR LOOP

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     for(int i=1;i<=a;i=i+2)
//       cout<<i<<" ";
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0,i=1;
//     cout<<"enter any number";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"Sum of all the number till the number is : "<<sum<<"...";
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     int sum=0,i=1;
//     cout<<"Enter number : ";
//     cin>>num;
//     for(int i=1;i<=num;i++){
      
//         if(i%2!=0){
//             sum=sum+i;
//         }
//     }
//     cout<<"The sum of all add numbers are : "<<sum;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int sum=0;
//     int i=1;
//     cout<<"enter number : ";
//     cin>>n;  
//     while(i<=n){
//         if(i%2!=0){
//             sum=sum+i;  
//         } 
//         i++;
//     }
//     cout<<"output is  : "<<sum;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int sum =0;
//     int i=1;
//     cout<<"enter number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//     cout<<"Sum of all even number : "<<sum;
// }

//todo :DO WHILE LOOP

// #include<iostream>
// using namespace std;
// int main()
// {
//     do{
//         cout<<"hello world";
//     }while(3>5);{
//         cout<<"wellcom";
//     }
// }


//todo NESTEDE LOOPS

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//       for(int i=1;i<=5;i++){
//         int n =10;
//         for(int i=1;i<=n;i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number to print lines of '*' : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int m=10;
//         for(int i=1;i<=m;i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
     
}