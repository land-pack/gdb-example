#include <stdio.h>

int add_range(int low, int hight)
{
    int i, sum;
    for(i = low; i <= hight; i ++)
        sum = sum + i;
    return sum;
}

int main(int argc, char * argv[])
{
    int result[100];
    result[0] = add_range(1, 10);
    result[1] = add_range(1, 100);
    printf("Result[0]=%d\nresult[1]=%d\n", result[0], result[1]);
    return 0;
}
