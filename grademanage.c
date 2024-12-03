#include <stdio.h>

struct score{
    int scoreKOR;
    int scoreMAT;
    int scoreENG;
    int scoreSCI;
};

int main(){
    struct score a[20];
    int student_no;
    for(student_no = 0; student_no < 20; student_no++){
        printf("Input the Number %d's Score\n", student_no+1);
        printf("Kor:_");
        scanf("%d", &a[student_no].scoreKOR); getchar();
        printf("Math:_");
        scanf("%d", &a[student_no].scoreMAT); getchar();
        printf("Eng:_");
        scanf("%d", &a[student_no].scoreENG); getchar();
        printf("Sci:_");
        scanf("%d", &a[student_no].scoreSCI); getchar();
    }
    printf("Done Input. Result\n");
    for(student_no = 0; student_no < 20; student_no++){
        printf("Number %d's score\n", student_no+1);
        printf("Kor:%d\n", a[student_no].scoreKOR);
        printf("Math:%d\n", a[student_no].scoreMAT);
        printf("Eng:%d\n", a[student_no].scoreENG);
        printf("Sci:%d\n", a[student_no].scoreSCI);
    }
}