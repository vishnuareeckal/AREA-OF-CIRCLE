#include <stdio.h>
void area();
int main()
{
  area();
  return 0;
}

//area
void area(){
  float r,area;
  printf("enter the radius\n");
  scanf("%f",&r);
  area = 3.14 * r * r;
  printf ("area of circle is %.2f",area);
}
