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
  fprintf(fptr, "%d\n", N);

  // Generate and write random numbers to the file
  for (i = 1; i <= N; i++) {
    fprintf(fptr, "%d\n", (rand() %50+1));
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
    int i,m,dig,sum=0;
    for(i=0;i<10;i++)
    {
    m=rand[i];
while(rand[i]!=0)
{
dig=rand[i]%10;
sum=sum+dig*dig*dig;
rand[i]=rand[i]/10;
}
if(sum==m)
{
printf("%d is armstrong number\n",m);
}
else
printf("%d is not an armstrong number\n",m);
}
    }
