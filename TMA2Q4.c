#include <stdio.h>
int main(void) {
  FILE *INPUTFILE, *OUTPUTFILE;
  int x;

  if ((INPUTFILE = fopen("INPUTFILE.DAT", "r")) == NULL) {
    fprintf(stderr, "Could not open input.txt for reading.\n");
    return 1;
  }

  if ((OUTPUTFILE = fopen("OUTPUTFILE.DAT", "w")) == NULL) {
    fprintf(stderr, "Could not open output.txt for writing.\n");
    fclose(INPUTFILE);
    return 2;
  }

  while (!feof(INPUTFILE)) {
    fscanf(INPUTFILE, "%d", &x); /* read a number */
    if (!feof(INPUTFILE) && x > 80)
      fprintf(OUTPUTFILE, "%d\n", x);
  }

  fclose(INPUTFILE);
  fclose(OUTPUTFILE);

  return 0;
}

