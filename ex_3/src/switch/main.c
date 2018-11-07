#include <stdio.h>
int main(int argc, char *argv[])
{
    unsigned short int dayOfWeek = 0;
    printf("Введите номер дня недели ");
    scanf("%hu", &dayOfWeek);
    switch(dayOfWeek)
    {
        case 1: printf("понедельник\n");
        break;
        case 2: printf("вторник\n");
        break;
        case 3: printf("среда\n");
        break;
        case 4: printf("четверг\n");
        break;
        case 5: printf("пятница\n");
        break;
        case 6: printf("суббота\n");
        break;
        case 7: printf("воскресенье\n");
        break;
        default: printf("Так не бывает\n");
    }
    return 0;
}
