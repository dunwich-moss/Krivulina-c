#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef enum {
    FIRST = 1,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
} Course;

typedef struct {
    char name[50];
    int age;
    Course course;
    double avg_mark;
} Student;


Student students[MAX_STUDENTS];
int student_count = 0;


void add_student(Student* arr, int* count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students! Maximum limit reached.\n\n");
        return;
    }

    Student* s = &arr[*count];  

    printf("Enter name: ");
    scanf("%49s", s->name);

    printf("Enter age: ");
    scanf("%d", &s->age);

    printf("Enter course (1-5): ");
    int c;
    scanf("%d", &c);
    s->course = (Course)c;

    printf("Enter average mark: ");
    scanf("%lf", &s->avg_mark);

    (*count)++;
    printf("Student added successfully.\n\n");
}


void print_students(const Student* arr, int count) {
    if (count == 0) {
        printf("Student list is empty.\n\n");
        return;
    }

    printf("\n=== Student List ===\n");
    for (int i = 0; i < count; i++) {
        const Student* s = &arr[i];
        printf("%d) %s, age %d, course %d, average mark %.2lf\n",
               i + 1, s->name, s->age, s->course, s->avg_mark);
    }
    printf("====================\n\n");
}


void find_student_by_name(const Student* arr, int count, const char* name) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        const Student* s = &arr[i];
        if (strcmp(s->name, name) == 0) {
            printf("Found: %s, age %d, course %d, average mark %.2lf\n",
                   s->name, s->age, s->course, s->avg_mark);
            found = 1;
        }
    }
    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
    printf("\n");
}


void sort_by_avg_mark(Student* arr, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            Student* s1 = &arr[j];
            Student* s2 = &arr[j + 1];
            if (s1->avg_mark < s2->avg_mark) {
                
                Student temp = *s1;
                *s1 = *s2;
                *s2 = temp;
            }
        }
    }
    printf("Students sorted by average mark (descending).\n\n");
}

// Main menu function
void show_menu() {
    printf("=== Student Management System ===\n");
    printf("1) Add student\n");
    printf("2) Print all students\n");
    printf("3) Find student by name\n");
    printf("4) Sort by average mark\n");
    printf("0) Exit\n");
    printf("Your choice: ");
}

int main() {
    int choice;
    
    while (1) {
        show_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student(students, &student_count);
                break;
            case 2:
                print_students(students, student_count);
                break;
            case 3: {
                char name[50];
                printf("Enter name to search: ");
                scanf("%49s", name);
                find_student_by_name(students, student_count, name);
                break;
            }
            case 4:
                if (student_count > 1) {
                    sort_by_avg_mark(students, student_count);
                } else {
                    printf("Need at least 2 students to sort.\n\n");
                }
                break;
            case 0:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n\n");
        }
    }

    return 0;
}