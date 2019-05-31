#include <stdio.h>

float areaOfCircle(float r){
  return r*r*3.14;
}

void main(int a, char *argv[2]) {
  char input[256];
/*  int r;
  int r2;

  printf("Input a radius\n");

  while(1){
    fgets(input, 256, stdin);
    if(sscanf(input, "%d", &r) == 1) break;
    printf("Invalid input\n");
  }

  printf("Input 2\n");

  while(1){
    fgets(input, 256, stdin);
    if(sscanf(input, "%d", &r2) == 1) break;
    printf("Invalid input\n");
  }
*/

  printf("Area: %f - %f\n", areaOfCircle((float)*argv[1]-48), areaOfCircle((float)*argv[2]-48));

  //for(float i=3.5; i<13; i++){
  //  printf("%f\n", areaOfCircle(i));
  //}
}
