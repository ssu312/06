// #include <stdio.h>

// void print_star()
// {
//     int i;
//     for (i=0;i<10;i++)
//         printf("*");
// }

// int main(void)
// {

//     print_star();
//     print_star();
//     print_star();

//     return 0;
// }


// #include <stdio.h>
// void func(void) {
//     int x;
//     printf("func x is at %p\n", &x);
// }

// int main(void) {
//     int x;
//     printf("main x is at %p\n", &x);
//     func();

//     return 0;
// }


// #include <stdio.h>
// //#include <stdlib.h>

// int sumTwo(int a, int b) 
// {
//     return (a+b);             
// }


// int square(int n)
// {
//     return (n*n);
// }
    

// int get_max(int x, int y)
// {
//     if (x > y)
//         return x;
    
//     return y;
// }

// int main(void) 
// {
//     printf("sumTwo result : %i\n", sumTwo(2,5));
//     printf("square result : %i\n", square(10));
//     printf("get_max result : %i\n", get_max(2,5));

//     return 0;
// }

// #include <stdio.h>
// void square(int a)
// {
//     a = a*a;
// }

// int main() 
// {
//     int a = 2;
//     square(a);
//     printf("a= %i\n", a);
// }
//결과값 a=2,, why?->Call By Value,, a의 복사본이 들어감

// int square(int a)
// {
//     return (a*a);
// }

// int main(void) 
// {
//     int a = 2;
//     a = square(a);
//     printf("a = %i\n", a);
// }
//결과값 a=4




#include <stdio.h>

int factorial (int a)
{
    int res = 1;
    for (int i=1;i<=a;i++)
        res = res * i;
    return res;
}
//동일한 매커니즘
// int factorial (int a)
// {
//     int i;
//     int res = 1; //누적으로 곱하니깐 1로 초기화함
//     for (i=0;i<a;i++)
//         res = res * (i+1);
//     return res;
// }

int combination(int n, int r) 
{
    int up, down;
    //분자 계산: up에 저장
    up = factorial(n);

    //분모 계산: down에 저장
    down = factorial(n-r) * factorial(r);

    return (up/down);
}


int main()
{
    //변수 선언
    int result;
    int n,r;

    //입력 받기
        //n 입력 문구 찍기
    printf("Input n :");
        //scanf n
    scanf("%i", &n);
        //r 입력 문구 찍기
    printf("Input r :");
        //scanf r
    scanf("%i", &r);


    //combination 계산
    result = combination(n,r);

    //결과 출력
    printf("The combination result is %i\n", result);

    return 0;
}
