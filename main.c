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

#include <stdio.h>
void func(void) {
    int x;
    printf("func x is at %p\n", &x);
}

int main(void) {
    int x;
    printf("main x is at %p\n", &x);
    func();
    
    return 0;
}

