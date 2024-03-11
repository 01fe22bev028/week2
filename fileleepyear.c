#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50
int main() {
  int i;
  char str;
  FILE * fptr;

  // Open a file for writing
  fptr = fopen("rand.txt", "w");
  if (fptr == NULL) {
    printf("Error in creating output.dat\n");
    return 0;
  }


  // Write the number of values to the file
  //fprintf(fptr, "%d\n", N);

  // Generate and write random numbers to the file
  for (i = 1; i <= N; i++) {
    fprintf(fptr, "%d\n", (rand() %10000+1));
  }

  // Close the file
  fclose(fptr);

  // Open the file for reading
  fptr = fopen ("rand.txt", "r");
  str = fgetc(fptr);

  // Print the contents of the file
  while (str != EOF)
  {
    printf ("%c", str);
    str = fgetc(fptr);
  }

  // Close the file
  fclose(fptr);


  FILE *myFile;
    myFile = fopen("rand.txt", "r");

    //read file into array
    int rand[10];

    for (i = 0; i < 10; i++)
    {
        fscanf(myFile, "%d", &rand[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Number is: %d\n\n", rand[i]);
    }

    armstrong(rand);
    }

    void armstrong(int rand[])
    {
        int i;
        for(i=0;i<10;i++)
        {
   if (rand[i] % 400 == 0)
        printf("%d is a leap year.\n", rand[i]);

    // If a year is multiple of 100, then not a leap year
    else if (rand[i] % 100 == 0)
        printf("%d is not a leap year.\n", rand[i]);

    // If a year is multiple of 4, then leap year
    else if (rand[i] % 4 == 0)
        printf("%d is a leap year.\n", rand[i]);

    // Not leap year
    else
        printf("%d is not a leap year.\n", rand[i]);
        }
}







