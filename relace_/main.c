
#include <stdio.h>
#include <string.h>
int main ()
{

  char intake[150];
  printf("Please give input as string:");
  gets(intake);
  char *pt;
  printf ("String  \"%s\" is split into tokens:\n",intake);

  pt = strtok (intake,"_");
  while (pt!= NULL)
  {
      printf ("\"%s\"",pt);
      pt = strtok (NULL, "_");
      if (pt!=NULL)
      {
          printf(",");
      }
  }
  printf(".");
  return 0;
}
