#include <stdio.h>

// void test()
// {
//     static int a = 1;
//     a++;
//     printf("a=%d\n",a);
// }

// int main( )
// {
//     int i = 0;
//     while (i<5)
//     {
//         test();
//         i++;
//     }
    
//     return 0;
// }
int main()
{
    int a = 10;
    int* p = &a;
    *p = 20;
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",a);
    printf("%d",sizeof(p));
    return 0;
}