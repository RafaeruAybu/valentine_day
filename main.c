#include <stdio.h>


char get_char()
{
    char srt[4] = {'l','o','v','e'};
    static int i = 0;
    if (i == 4)
        i = 0;
    return srt[i++];
}

int main()
{
    int first_start = 10;
    int first_stop = 10;
    int second_start = 29;
    int second_stop = 29;
    int big_start = 1;
    int big_stop = 38;
    for (int y = 0; y < 30; y++)
    {
        for (int x = 0; x < 50; x++)
        {
            if (y < 10) //start smalls
            {
                if ((x >= first_start && x <= first_stop) || (x >= second_start && x <= second_stop))
                {
                    printf("%c", get_char());
                }
                else
                {
                    printf(" ");
                }
            }
            else if (y >= 10 && y < 30)
            {
                if (x >= big_start && x <= big_stop)
                {
                    printf("%c", get_char());   
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
        if (y < 10)
        {
            first_start--;
            first_stop++;
            second_start--;
            second_stop++;
        }
        else
        {
            big_start++;
            big_stop--;
        }
    }
    return 0;
}

