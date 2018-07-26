#include <stdio.h>
int main(void) {
  FILE *INPUTFILE, *OUTPUTFILE;
  int x;

  if ((in = fopen("INPUTFILE.DAT", "r")) == NULL) {
    fprintf(stderr, "Could not open input.txt for reading.\n");
    return 1;
  }

  if ((out = fopen("OUTPUTFILE.DAT", "w")) == NULL) {
    fprintf(stderr, "Could not open output.txt for writing.\n");
    fclose(in);
    return 2;
  }

  while (!feof(in)) {
    fscanf(in, "%d", &x); /* read a number */
    if (!feof(in) && x > 80)
      fprintf(out, "%d\n", x);
  }

  fclose(in);
  fclose(out);

  return 0;
}