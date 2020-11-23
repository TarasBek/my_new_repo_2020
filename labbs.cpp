#define _CRT_SECURE_NO_WARNING 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//int main()
//{

    
    /* h = 0,2
     ≥ÌÚÂ‚‡Î [2,4]*/

  /*  double a, b, h;
    double x = 0;
    printf("a="); scanf_s("%lf", &a);
    printf("b="); scanf_s("%lf", &b);
    printf("h="); scanf_s("%lf", &h);
    for (x=a; x<=b; x+=h)
     {  
        if (x <= 3)
                
            printf("x = %1.lf \nlog(pow(3, x))=%lf  \n", x, log(pow(x, 3)));
        else if (x < 4 && x > 3)
            printf("x = %1.lf \n(1 / sin(x))=%lf \n", x, (1 / sin(x)));
        else if (x >= 4)
            printf("x = %1.lf \nasin(1 / x)=%lf \n", x, asin(1 / x));
        
    }*/

   //2 Î‡·‡

    /*double t = 0;
    double sum;

    for (double x = 0.1; x <= 0.6; x += 0.05)
    {
        
        int k = 1;
        do {
            sum = (k * pow(x,  k));
            k++;
            t += sum;
        } while (fabs(sum) > 0.001);

        printf("t=%1.1f \n", t);
    }
        */
 /*   return 0;
}*/
  
     // 3lab
    
   

   /* int c, i, output = 0;
    char a[100];
    gets_s(a);
    printf("%s is ", a);

   

    if (_mbstrlen(a) == 0 )
    {
        printf("empty string");
        return 0;
    } 
    for (int i = 0; a[i]; i++) {
        a[i] = tolower(a[i]);
    }
    for (c = 0; c <_mbstrlen(a); c++) 
    { 
        for (i = c+1; i < _mbstrlen(a); i++)
        {
            if (a[c] == a[i]) 
            {
                output = 1;
                break;
            }
        }   
    }
    if (output == 1) {
        printf("falce");
    }
    else
    {
        printf("true");
    }*/



  

   //int chek_lowwer(char *arr) {
   //     
   //     for (int i = 0; _mbstrlen(arr); i++) {       // Ï≥Ìˇ∫ÏÓ Ì‡ Õ»∆Õ≤… –≈√≤—“–
   //         arr[i] = tolower(arr[i]);
   //     return 0;
   //     }
   // }
   //int mainer(char* arr) {
   //    int output = 0;

   //    for (int c = 0; c < _mbstrlen(arr); c++)
   //    {
   //        for (int i = c + 1; i < _mbstrlen(arr); i++)
   //        {

   //            if (arr[c] == arr[i])
   //            {
   //                output = 1;
   //                break;
   //            }
   //        }
   //    }

   //     return output;
   // }
   //int result(int mainer, int output, char*arr){
   // if (_mbstrlen(arr) == 0)
   //    {
   //        printf("empty string");

   //    }
   //    
   // else if (output == 1) {
   //     printf("false");
   // }

   // else
   // {
   //     printf("true");
   // }
   //
   // return 0;
   // }

   //int main()
   //{
   //    int c, i;
   //    int output = 0;
   //    char a[100];
   //    char* arr;
   //    arr = gets_s(a);
   //    result(output, mainer(arr), arr);

   //    mainer(arr);
   //    chek_lowwer(arr);
   //    
   //    return 0;
   //}
    //_____________________________________________________________________________________________________________
//c++ LABS

// 5 LABA
#include <iostream>
#include <string>

using namespace std;




