
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n], temp;

    // Input student data
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].id);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write to file
    fp = fopen("students.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(s, sizeof(struct Student), n, fp);
    fclose(fp);

    // Read from file
    fp = fopen("students.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nStudent Records from file:\n");
    while (fread(&temp, sizeof(struct Student), 1, fp))
    {
        printf("ID: %d, Name: %s, Marks: %.2f\n", temp.id, temp.name, temp.marks);
    }
    fclose(fp);

    return 0;
}
