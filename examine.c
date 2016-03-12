#include <stdio.h>
#include <stdlib.h>

//Examine part.

void readFile(char* filename){
  FILE *fp;
  fp = fopen(filename, "r");
  if (fp == NULL){
    puts("Error reading file");
    return;  // alternative?
  }
  int count1 = 0; //metritis gia sinoliko plithos
  float count2 = 0; //metritis gia plithos entos perioxis
  float x;        // metavliti pou kataxorite kathe fora i parametros
  float percentage; //pososto entos perioxis
  while (!feof(fp)){    //diavazi kathe parametro me sira
    fscanf(fp,"%f ",&x);
    count1++;
    printf("%f\n",x );
    if (x>=12 && x<=30)
      count2++;
  }
  fclose(fp);
  printf("Total coordinates read: %d\n", count1);
  int count3= (int)count2;
  printf("Total coordinates inside interval: %d\n", count3);
  percentage = (count2/count1)*100;
  printf("Percentage of coordinates inside interval: %f\n", percentage);
}

int main()
{
  readFile("data");
  return 0;
}
