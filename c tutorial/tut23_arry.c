// Example for One-dimensional Array :

#include <stdio.h>
int main()
{
    // One dimensional array
    int marks[3], sum = 0, n;
    printf("Enter the number of student : \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Marks of %d student : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    int average = sum / n;
    printf("The average marks of %d students are %d", n, average);
    return 0;
}

// Example for Two-Dimensional Array :

#include <stdio.h>

int main()
{

    // Two dimensional array
    int Matrice[3][3]; 
	printf("This Program will print no. from 1-9 in matrice form : \n\n");
	for (int i=0;i<3,i++)
	{
        for (int j = 0; j < 3; j++)
        {
            printf("Enter no. (1-9) : ");
            scanf("%d", &Matrice[i][j]);
        }
	}
	printf("\n\n\n");
	for (int i=0;i<3;i++)
	{
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrice[i][j]);
        }
        printf("\n");
	}

	printf("\n\n\n So that's the matrice form of no from 1-9");
	return 0;
}

// Code as described

#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 3, 3}};

    // for(int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */

            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 44;
    // printf("Marks of student 1 is %d\n", marks[0]);
    return 0;
}
