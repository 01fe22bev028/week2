#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("rand.txt", "r");

    //read file into array
    int rand[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        fscanf(myFile, "%d", &rand[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Number is: %d\n\n", rand[i]);
    }
}

