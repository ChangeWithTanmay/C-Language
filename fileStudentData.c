#include <stdio.h>

int main()
{

    FILE *fb;
    fb = fopen("student.txt", "w");
    if (fb == NULL)
    {
        printf("File error");
        return 1;
    }

    char name[50], course[50], registerNumber[50];

    
    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Enter course: ");
    scanf("%s", course);
  
    printf("Enter Register Number: ");
    scanf("%s", registerNumber);

    printf("Name=%s, Course=%s, Register Number=%s", name, course, registerNumber);

    fprintf(fb, "Name=%s, Course=%s, Register Number=%s", name, course, registerNumber);

    fclose(fb); // This saves and closes the file completely

    // --- STEP 2: READ FROM FILE ---
    fb = fopen("student.txt", "r"); // Reopen in READ mode
    if (fb == NULL)
    {
        printf("File read error\n");
        return 1;
    }

    // to get
    char getName[50], getCourse[50], getRoll[50];
    fscanf(fb, "Name=%s\n", getName);
    fscanf(fb, "Course=%s\n", getCourse);
    fscanf(fb, "Register Number=%s\n", getRoll);
    

    printf("\nGet all data: %s %s %s \n", getName, getCourse, getRoll);

    fclose(fb);

    printf("successfull close file.");

    return 0;
}