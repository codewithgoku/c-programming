#include <stdio.h>

int main() {
  FILE *fptr;
  fptr=fopen("file_01.txt","w");
  fprintf(fptr,"heelo wrold");
  fclose(fptr);
  return 0;
}