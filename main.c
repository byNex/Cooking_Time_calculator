#include <stdio.h>

#define SEC_HOUR 3600   // 1hour = 3600sec
#define SEC_MIN 60      // 1min = 60sec

typedef struct H_M_S{
    int hour;
    int min;
    int sec;
} TIME;

int main(void)
{
    TIME current_time;
    TIME cooking_time;
    int cur_time = 0;
    int input_sec = 0;

    printf("insert Time like this 'Hour Min Sec': ");
    scanf("%d %d %d",&current_time.hour, &current_time.min, &current_time.sec);
    printf("insert Cooking Time (sec): ");
    scanf("%d", &input_sec);
    cur_time += current_time.hour * SEC_HOUR;
    cur_time += current_time.min * SEC_MIN;
    cur_time += current_time.sec;           // Currnet time insert

    cur_time += input_sec;                  // Cooking Time adding

    cooking_time.hour = cur_time / SEC_HOUR;
    cur_time -= cooking_time.hour * SEC_HOUR;
    cooking_time.min = cur_time / SEC_MIN;
    cur_time -= cooking_time.min * SEC_MIN;
    cooking_time.sec = cur_time;            // Cooking Fin Time insert

    
    printf("Cooking Time %d %d %d \n",cooking_time.hour,cooking_time.min,cooking_time.sec);
    return 0;
}

