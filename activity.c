#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int start;
    int finish;
} Activity;

int compare(const void *a, const void *b) {
    Activity *activityA = (Activity *)a;
    Activity *activityB = (Activity *)b;
    return activityA->finish - activityB->finish;
}

void activitySelection(Activity activities[], int n) {
  
    qsort(activities, n, sizeof(Activity), compare);

    printf("The selected activities are:\n");

   
    int i = 0;
    printf("Activity %d: Start = %d, Finish = %d\n", i + 1, activities[i].start, activities[i].finish);

    
    for (int j = 1; j < n; j++) {
        
        if (activities[j].start >= activities[i].finish) {
            printf("Activity %d: Start = %d, Finish = %d\n", j + 1, activities[j].start, activities[j].finish);
            i = j; 
        }
    }
}

int main() {
    int n;

    printf("Enter the number of activities: ");
    scanf("%d", &n);

    Activity activities[n];

    printf("Enter the start and finish times of the activities:\n");
    for (int i = 0; i < n; i++) {
        printf("Activity %d:\n", i + 1);
        printf("Start time: ");
        scanf("%d", &activities[i].start);
        printf("Finish time: ");
        scanf("%d", &activities[i].finish);
    }

    activitySelection(activities, n);

    return 0;
}
