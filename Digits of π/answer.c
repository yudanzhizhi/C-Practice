#include<stdio.h>
#define Max 40
int main()
{
    int counter = 0, t;
    scanf("%d", &t);
    getchar();
    char pi[30] = {'3','1','4','1','5','9','2','6','5','3','5','8','9','7','9','3','2','3','8','4','6','2','6','4','3','3','8','3','2','7'}, input[Max];
    for (int j = 0; j < t; j++)
    {
        int i = 0;
        fgets(input, Max, stdin);
        while (i < 30 && input[i] - pi[i] == 0)
        {
            i++;
            counter++;
        }
        printf("%d\n", counter); 
        counter = 0; 
    }
    return 0;
}
