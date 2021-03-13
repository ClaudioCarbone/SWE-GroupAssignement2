#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int stud_answ[10], correct_answ[10], rand1, rand2, count=0, i;
    clock_t t;

    t = clock();
    printf("Press ENTER when you are ready to start the exam: ");
    if(getchar())
        printf("-The exam has started-\n");

    for(i=0; i<3; i++){
        rand1 = rand() % 30;
        rand2 = rand() % 30;
        printf("Question %d: %d*%d=?\nYour answer: ", i+1, rand1, rand2);
        scanf("%d", &stud_answ[i]);
        correct_answ[i] = rand1 * rand2;
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("-The Exam has finished-\nYour test lasted %f seconds.\n", time_taken);

    for(int i=0; i<3; i++){
        if(stud_answ[i]!=correct_answ[i])
            count++;
    }
    printf("You have made %d mistakes.", count);
}
