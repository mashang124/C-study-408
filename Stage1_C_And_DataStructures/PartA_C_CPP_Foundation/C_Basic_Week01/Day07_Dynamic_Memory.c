#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
int main()
{
    int* arr = (int*)malloc(sizeof(int) * 5);
    if (arr == NULL)
    {
        return -1;
    }

    else
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = i;//*(arr+i)=i
            printf("%d ", arr[i]);
        }
        free(arr);
    }
    char* a = (char*)malloc(sizeof(char) * 10);
    if (a == NULL)
    {
        return -1;
    }
    else
    {
        strcpy(a, "hello");
        printf("%s", a);
        free(a);
    }
    return 0;
}
*/

//调用一个函数的时候传入一个指针，想改变这个指针所指向的内存空间的值
void fun(int** temp)
{
    *temp = (int*)malloc(sizeof(int));
    **temp = 100;
}
int main()
{
    int* p = NULL;
    fun(&p);
    printf("%d", *p);
    return 0;
}

















