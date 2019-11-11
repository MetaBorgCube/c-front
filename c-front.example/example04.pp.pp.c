typedef struct {
  int x;
  int y;
  float color;
} point enum color {
  red = 0,
  blue = 1,
  yellow = 3
} ;

point newPoint(int x, int y, float color)
{
  point * p;
  p = malloc(sizeof(point));
  if(p == NULL)
    exit(- 1);
  p -> x = x;
  p -> y = y;
  * p.color = color;
  return p;
}