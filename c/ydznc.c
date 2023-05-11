#include <stdio.h>
#define INF 9999 
int num_of_cows, movies; //奶牛数就是结点数
int matrix[310][310] = {0}, prev[310][310] = {0}; //邻接矩阵和前驱矩阵
void floyd();
void floyd()
{
    for (int i = 0; i < num_of_cows; i++) //用i去试探顶点
    {
        for (int j = 0; j < num_of_cows; j++) //j、k表示矩阵内的每一个点
        {
            for (int k = 0; k < num_of_cows; k++)
            {
                if (matrix[j][k] > matrix[j][i] + matrix[i][k])
                {
                    matrix[j][k] = matrix[j][i] + matrix[i][k];
                    prev[j][k] = prev[i][k]; //i为中转，即前驱为i
                }
            }
        }
    }
}
int main()
{
    int min = INF, cmp_min = 0;
    scanf("%d %d", &num_of_cows, &movies);
    for (int i = 0; i < num_of_cows; i++) //初始化矩阵
    {
        for (int j = 0; j < num_of_cows; j++)
        {
            prev[i][j] = 0;
            matrix[i][j] = INF;
            if (i == j)
            {
                matrix[i][j] = 0;
            }
        }
    }
    while (movies--) //创建邻接矩阵
    {
        int actors;
        scanf("%d", &actors);
        int input[actors];
        for (int i = 0; i < actors; i++)
        {
            scanf("%d", &input[i]);
        }
        for (int i = 0; i < actors; i++)
        {
            for (int j = 0; j < actors; j++)
            {
                if (i != j)
                {
                    matrix[input[i] - 1][input[j] - 1] = 1;
                }
            }
        }
        for (int i = 0; i < actors; i++)
        {
            input[i] = 0;
        }
    }
    for (int i = 0; i < num_of_cows; i++) //创建前驱矩阵
    {
        for (int j = 0; j < num_of_cows; j++)
        {
            if (matrix[i][j] > 0 && matrix[i][j] != INF)
            {
                prev[i][j] = i;
            }
            else prev[i][j] = -1;
        }
    }
    floyd(); //求出每点到其他点的最短路径
    for (int i = 0; i < num_of_cows; i++) //找出最小值
    {
        for (int j = 0; j < num_of_cows; j++)
        {
            cmp_min += matrix[i][j];
        }
        if (cmp_min < min)
        {
            min = cmp_min;
        }
        cmp_min = 0;
    }
    printf("%d", min*100/(num_of_cows-1));
    return 0;
}
