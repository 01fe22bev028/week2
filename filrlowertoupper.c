#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
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
  for (i = 1; i <= N; i++) {
    fprintf(fptr, "%c\n", (rand()));
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
        fscanf(myFile, "%c", &rand[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Number is: %c\n\n", rand[i]);
    }

 vowel(rand);

  return 0;
}
 void vowel(char rand[])
 {
     int i;
     for(i=0;i<10;i++)
     {
      rand[i]=rand[i]-32;
      printf("%c\n",rand[i]);
     }
 }
