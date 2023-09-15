#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "abc";
    char arr2[] ={'a','b','d','f'};
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%d\n",sizeof(arr1));
    printf("%d\n",sizeof(arr2));
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int line = 0;
//     printf("加入bite\n");

//     while (line<2)
//     {
//         printf("桥遗憾美国\n");
//         line++;
//     }
//     printf("好offer\n");
    
//     return 0;
// }

// int Add(int x,int y)
// {
//     int z = x+y;
//     return z;
// }


// int main()
// {
//     int a;
//     int b;
//     int c;
//     int sum = 0;
//     scanf("%d%d%d",&a,&b,&c);
//     sum = Add(a,b,c);
//     printf("sum = %d\n",sum);

//     return 0;
// }
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     while(i<10)
//     {
//     printf("%d ",arr[i]);
//     i++;
//     }
//     return 0;
// }
// {
//     int a = 3;
//     int b = 5;
//     int arr[10] = {0};
//     b += 13;
//     printf("%d\n",b);
//     printf("%d",sizeof(arr)/sizeof(arr[0]));
//     return 0;
// }