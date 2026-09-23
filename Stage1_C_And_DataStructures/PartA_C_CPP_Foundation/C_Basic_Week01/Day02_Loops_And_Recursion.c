#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
    char sex;
    char sports;
    char diet;
    double faHeight;
    double moHeight;
    double height;

    printf("请输入性别(M/F): ");
    scanf(" %c", &sex);
    getchar(); 
    printf("请输入父亲身高(cm): ");
    scanf("%lf", &faHeight);
    getchar();
    printf("请输入母亲身高(cm): ");
    scanf("%lf", &moHeight);
    getchar();
    printf("是否喜爱体育锻炼(Y/N): ");
    scanf(" %c", &sports);
    getchar();
    printf("是否有良好饮食习惯(Y/N): ");
    scanf(" %c", &diet);

    if (sex == 'M')
    {
        height = (faHeight + moHeight) * 0.54;
    }
    else
    {
        height = (faHeight * 0.923 + moHeight) / 2;
    }

    if (sports == 'Y')
    {
        height = height * 1.02;
    }
    if (diet == 'Y')
    {
        height = height * 1.015;
    }

    printf("预测的成年身高为：%.2f cm\n", height);

    return 0;
}
*/

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d ", i, j);
        }
        printf("\n");
    }
}