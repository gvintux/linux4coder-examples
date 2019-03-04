#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <limits.h>
#include <time.h>
#include <math.h>

#define CARD_LENGTH 16

int main(void)
{
    union payment_data
    {
        char card[CARD_LENGTH + 1];
        double cash;
    } payment;
    enum payment_type
    {
        PT_UNKNOWN,
        PT_CARD,
        PT_CASH
    } paymentType;
    memset(&payment.card, '\0' , CARD_LENGTH + 1);
    srand(time(NULL));
    double total = rand() % 100 + (rand() % 100) / 100.0;
    paymentType = PT_UNKNOWN;
    printf("Сумма Вашей покупки %g\n", total);
    while(paymentType != PT_CARD  && paymentType != PT_CASH)
    {
        printf("Как предпочитаете оплатить покупку?\n1 - карта\n2 - наличными\n");
        scanf("%i", &paymentType);
    }
    if(paymentType == PT_CARD)
    {
        while(strlen(payment.card) != CARD_LENGTH)
        {
            printf("Введите 16-значный номер карты\n");
            scanf("%s", &payment.card);
        }
        printf("С Вашей карты списано %g\n", total);
    }
    else
    {
        while(payment.cash < total)
        {
            printf("Введите сумму наличными\n");
            scanf("%lf", &payment.cash);
        }
        if(payment.cash > total) printf("Ваша сдача: %g\n", payment.cash - total);
    }
    printf("Спасибо за покупку, ждём Вас снова!\n");
    return 0;
}
