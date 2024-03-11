#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 2
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
  fprintf(fptr, "%d\n", N);

  // Generate and write random numbers to the file
  for (i = 1; i <= 3; i++) {
    fprintf(fptr, "%d\n", (rand()));
  }

  // Close the file
  fclose(fptr);

  // Open the file for reading
  fptr = fopen ("rand.txt", "r");
  str = fgetc(fptr);

  // Print the contents of the file
  while (str != EOF)
  {
    printf ("%d", str);
    str = fgetc(fptr);
  }
  // Close the file
  fclose(fptr);
  FILE *myFile;
    myFile = fopen("rand.txt", "r");

    //read file into array
    int rand[3];

    for (i = 0; i < 3; i++)
    {
        fscanf(myFile, "%d", &rand[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("Number is: %d\n\n", rand[i]);
    }

 largest(rand);

  return 0;
}
 void largest(int rand[])
 {


    if (rand[1] >= rand[2] && rand[1] >= rand[3])

        printf("\n1 is the largest number.");


    else if (rand[2] >= rand[1] && rand[2] >= rand[3])

                printf("2 is the largest number.");


    else

        printf("3 is the largest number.");
     }






