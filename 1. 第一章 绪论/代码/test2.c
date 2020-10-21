#include <stdio.h>
#include "main/src/type.c"
// #include "main/src/func.h"

void bubble_sort(int a [], int n){
    //将 a 中整数序列重新排列成自小至大有序的整数序列
    bool change = TRUE;
    //当 i = 2 时 --i 执行后 i = 1，此时 i > 1 不满足，所以内部的代码不再执行，导致排序不完全，出现 2,1,3,4,5 的情况，所以这里改为 i >= 1
    for (int i = n - 1, change = TRUE; i >= 1 && change; --i){
        change = FALSE;
        printf("for pre i = %d \n",i);
        for (int j = 0; j < i; ++ j){
            printf("if pre j = %d \n",j);
            printf("if pre a[j + 1]=%d\n", a[j + 1]);
            if (a[j] > a[j + 1]) {
                int temp = a[j];

                a[j] = a[j + 1];
                printf("a[j]=%d\n",a[j]);

                a[j + 1] = temp;
                printf("a[j + 1]=%d\n",a[j + 1]);

                change = TRUE; 
                printf("----------\n");
            }
        }
    }
}

//int main(void) {
int  main ( )
{
 
    int a[5] = {5,4,3,2,1}; 
    bubble_sort(a,5);
    int i;
    for (i = 0; i < 5; i++){
        printf("a[%d]=%d",i,a[i]); 
        printf("\n");
    }
    return  0;
}

// for pre i = 4 
// if pre j = 0 
// if pre a[j + 1]=4
// a[j]=4
// a[j + 1]=5
//
// 4,5,3,2,1
// ----------
// if pre j = 1 
// if pre a[j + 1]=3
// a[j]=3
// a[j + 1]=5
//
// 4,3,5,2,1
// ----------
// if pre j = 2 
// if pre a[j + 1]=2
// a[j]=2
// a[j + 1]=5
//
// 4,3,2,5,1
// ----------
// if pre j = 3 
// if pre a[j + 1]=1
// a[j]=1
// a[j + 1]=5
//
// 4,3,2,1,5
// ----------
// for pre i = 3 
// if pre j = 0 
// if pre a[j + 1]=3
// a[j]=3
// a[j + 1]=4
//
// 3,4,2,1,5
// ----------
// if pre j = 1 
// if pre a[j + 1]=2
// a[j]=2
// a[j + 1]=4
//
// 3,2,4,1,5
// ----------
// if pre j = 2 
// if pre a[j + 1]=1
// a[j]=1
// a[j + 1]=4
//
// 3,2,1,4,5
// ----------
// for pre i = 2 
// if pre j = 0 
// if pre a[j + 1]=2
// a[j]=2
// a[j + 1]=3
//
// 2,3,1,4,5
// ----------
// if pre j = 1 
// if pre a[j + 1]=1
// a[j]=1
// a[j + 1]=3
//
// 2,1,3,4,5
// ----------
// for pre i = 1 
// if pre j = 0 
// if pre a[j + 1]=1
// a[j]=1
// a[j + 1]=2
//
// 1,2,3,4,5
// ----------
// a[0]=1
// a[1]=2
// a[2]=3
// a[3]=4
// a[4]=5
//
// 共执行了: 4 + 3 + 2 + 1 = 10 次
// 这里认为该等差数列是从 0 开始的，则根据等差数列的前 n 项和公式: S_n = a_1 * n + [n * (n - 1) * d] / 2 得 a_1 = 0, n = 5
// S_{5} = 0 + [n * (n - 1) * d] / 2 = [n * (n - 1) * d] / 2

