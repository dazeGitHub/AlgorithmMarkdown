
#include <stdio.h>

//int main(void) {
int  main ( )
{
    printf("HelloWorld\n");//输出语句
    int n = 6;
    int x = 0;
    for (int i=2; i <= n; ++i){
        int second_count = 0;
        for (int j=2; j <= i-1; ++j) { 
            ++x; 
            ++second_count;
            printf("back x = %d \n",x);
        }
        printf("第二步执行了 second_count = %d 次 \n",second_count);
    }

    printf("result x = %d \n",x);
    return  0;
}
// 0 + 1 + 2 + 3 + 4 = 10
// 如果是从 1 + ... 5 则公式为 n x (n - 1)/2，n 变为 n - 1，则公式变为 (n - 1) x (n - 1 - 1)/2 = (n - 1) x (n - 2)/2
// (n-1)(n-2)/2 = (6-1)(6-2)/2 = 5 x 4 / 2 = 10