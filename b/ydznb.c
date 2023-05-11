#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned)time(NULL));
    int t = 0;
    scanf("%d", &t);
    getchar();
    int nsr[t][3];
    for (int i = 0; i < t; i++)//储存每组数据
    {
        scanf("%d %d %d", &nsr[i][0], &nsr[i][1], &nsr[i][2]);
    }
    for (int i = 0; i < t; i++)
    {
        int isfull = 0;
        int dice[nsr[i][0]];
        for (int j = 0; j < nsr[i][0]; j++)//将所有骰子初始化为1
        {
            dice[j] = 1;
        }
        dice[0] = nsr[i][1] - nsr[i][2];//将第一颗作为点数最大的骰子
        for (int j = 0; j < nsr[i][0]; j++)//点数总和
        {
            isfull += dice[j];
        }
        while (isfull < nsr[i][1])
        {
            int random = (rand() % (nsr[i][0] - 1)) + 1;
            if (dice[random] < dice[0])//利用随机数，对第一颗以外的骰子随机+1
            {
                dice[random]++;
                isfull++;
            }
        }
        for (int j = 0; j < nsr[i][0]; j++)
        {
            printf("%d ",dice[j]);
        }
        printf("\n");
    }
    return 0;
}
