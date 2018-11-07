#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned short int dayOfWeek = 0;
    printf("Введите номер дня недели ");
    scanf("%hu", &dayOfWeek);
    if(dayOfWeek == 1) printf("понедельник\n");
    else if(dayOfWeek == 2) printf("вторник\n");
    else if(dayOfWeek == 3) printf("среда\n");
    else if(dayOfWeek == 4) printf("четверг\n");
    else if(dayOfWeek == 5) printf("пятница\n");
    else if(dayOfWeek == 6) printf("суббота\n");
    else if(dayOfWeek == 7) printf("воскресенье\n");
    else printf("Так не бывает\n");
    return 0;
}
