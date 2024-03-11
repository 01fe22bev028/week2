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
  for (i = 1; i <= 2; i++) {
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
    int rand[2];

    for (i = 0; i < 2; i++)
    {
        fscanf(myFile, "%d", &rand[i]);
    }

    for (i = 0; i < 2; i++)
    {
        printf("Number is: %d\n\n", rand[i]);
    }

 swap(rand);

  return 0;
}
 void swap(int rand[])
 {
     int c,n=2,x,i;
for(i=0;i<n-1;i=i+2)
{
x=rand[i];
rand[i]=rand[i+1];
rand[i+1]=x;
printf("the swapped numbers are %d %d",x,rand[i]);
}
}

