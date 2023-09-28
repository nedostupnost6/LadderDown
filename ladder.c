#include <stdio.h>

int main()
{
        int height;
        printf("Введите значение высоты: \n");
        scanf("%d", &height);
        for (int i = 0; i < height; i++)
        {
                for (int k = 0; k < height; k++)
                {
                        if (i < (height - k - 1))
                        {
                                printf(" ");
                        }
                        else
                        {
                                printf("#");
                        }
                        
                        
                }
                printf("\n");
                
        }
        return 0;
        
}