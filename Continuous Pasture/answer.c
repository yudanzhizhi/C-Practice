#include <stdio.h>
int W = 0, H = 0, mirror[1100][100] = {0}, direction[2][4] = {{1, 0, -1, 0}, {0, 1, 0,  -1}};
 //direction[0]表示x，direction[1]表示y，顺序为右下左上
char farm[1100][100] = {'\0'};
int dfs(int row, int column);
int dfs(int row, int column)
{
    int x = 0, y = 0, counter = 1; //记录这一片的大小
    mirror[row][column] = 0;
    for (int i = 0; i < 4; i++)
    {
        x = row + direction[0][i];
        y = column + direction[1][i];
        if (x >= 0 && x < H && y >= 0 && y < W && mirror[x][y]) 
        {
            counter += dfs(x, y);
        }
    }
    return counter;
}
int main()
{
    int counter = 0, cmpcounter = 0; //两个计数器，比较下一片和这一片的大小
    scanf("%d %d", &W, &H);
    for (int i = 0; i < H; i++)
    {
        scanf("%s", farm[i]);
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (farm[i][j] == '*')
            {
                mirror[i][j] = 1; //使用镜子记录农场信息
            }
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (mirror[i][j])
            {
                cmpcounter = dfs(i, j);
            }
            if (counter < cmpcounter)
            {
                counter = cmpcounter;
            }
        }
    }
    printf("%d", counter);
    return 0;
}
