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


#include <stdio.h>
//#include <stdlib.h>

int sumTwo(int a, int b) 
{
    return (a+b);             
}


int square(int n)
{
    return (n*n);
}
    

int get_max(int x, int y)
{
    if (x > y)
        return x;
    
    return y;
}

int main(void) 
{
    printf("sumTwo result : %i\n", sumTwo(2,5));
    printf("square result : %i\n", square(10));
    printf("get_max result : %i\n", get_max(2,5));

    return 0;
}
