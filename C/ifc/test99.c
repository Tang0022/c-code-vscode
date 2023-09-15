#include <stdio.h>

int main()
{
    int input = 0;
    printf("加入bite\n");
    printf("好好学习?(1/0)>: ");
    scanf("%d", &input);
    if(input == 1)
        printf("offer\n");
    else
        printf("卖红薯\n");

    return 0;
}

git remote add origin git@github.com:Tang0022/c-code-vscode.git
git branch -M main
git push -u origin main