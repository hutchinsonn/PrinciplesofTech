#include <stdio.h>
#include <cs50.h>

int TOTALPOINTSEARNED;
int TOTALPOINTSPOSSIBLE;

int main(void){
    int assignments = get_int("How many different assignments?\n");  //ask the user how many different assignments
    int gradesEarned[assignments];
    int pointsPossible[assignments];
    for(int i=0;i<assignments;i++){
        gradesEarned[i] = get_int("How many points did you earn on assignment #%i:    ",i+1);
        pointsPossible[i] = get_int("How many points was the assignment worth?:   ");
        TOTALPOINTSEARNED += gradesEarned[i];
        TOTALPOINTSPOSSIBLE += pointsPossible[i];
    }
    float percent = ((float)TOTALPOINTSEARNED/TOTALPOINTSPOSSIBLE)*100;
    printf("Your current grade is : %0.2f %% \n",percent);

    for(int i=0;i<assignments;i++){
        int bars =(((float)gradesEarned[i]/pointsPossible[i])*100);
        printf("Grade %i :",i+1);
        for (int x=0;x<bars;x++){
            printf("#");
        }
        printf("\n");
    }
  return 0;
}
