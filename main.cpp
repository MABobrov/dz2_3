#include <stdio.h>
//https://github.com/MABobrov/dz2_3/blob/master/main.cpp
int main()  {
    int login, pass;
    printf("login=");
    scanf("%i", &login);
    printf("pass=");
    scanf("%i", &pass);
    if ((login == 1111) && (pass == 2222))printf("welcome first_brother");
    else {
        if ((login == 3333) && (pass == 4444)) printf("welcome second_brother");
        else {
            if ((login == 0000) && (pass == 0000)) //регистрация нового пользователя
            {
                int new_user_login, new_user_pass;
                printf("new_user_login=");
                scanf("%i", &new_user_login);
                printf("new_user_pass=");
                scanf("%i", &new_user_pass);
                     //закрываем возможность использования занятых логопасов
                if (((new_user_login == 1111) || (new_user_pass == 2222)) ||
                    ((new_user_login == 3333) || (new_user_pass == 4444)) ||
                    ((new_user_login == 0000) || (new_user_pass == 0000)))
                    printf("login or pass exist");
                 else{
                    if ((new_user_login>login)||(new_user_pass > pass))
                        printf("hello, %i", new_user_login);
                    return 0;//данные уникальны завершение со статус кодом = 0
                }
            } else {

                printf("Authorization denied");
                return 1;//попытка входа с не валидными кредами - Отказ + завершение со статус кодом=1
            }

        }
    }
}