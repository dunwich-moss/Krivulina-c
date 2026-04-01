#include <stdio.h>

typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Day;

const char* day_to_str(Day d) {
    switch (d) {
        case MONDAY:    return "Monday";
        case TUESDAY:   return "Tuesday";
        case WEDNESDAY: return "Wednesday";
        case THURSDAY:  return "Thursday";
        case FRIDAY:    return "Friday";
        case SATURDAY:  return "Saturday";
        case SUNDAY:    return "Sunday";
        default:        return "Unknown";
    }
}

typedef struct {
    char name[32];
    int age;
    Day day;
} Person;

int main(void) {
    Day today = FRIDAY;

    printf("Today is: %s\n", day_to_str(today));

    Person student = {
        .name = "Ivan",
        .age  = 20,
        .day  = MONDAY
    };

    printf("Student: %s, age %d, working on %s\n",
           student.name, student.age, day_to_str(student.day));

    return 0;
}