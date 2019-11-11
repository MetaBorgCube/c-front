typedef struct {
  int x;
  int y ;
  float color;
} point;

enum color {
  red = 0,
  blue = 1,
  yellow = 3
};

int xcoord(point *p);

point *newPoint(int x, int y, float color) {
  point *p = malloc(sizeof(point));
  if(p == NULL) 
    exit(-1);
  p->x = x;
  p->y = y;
  *p.color = color;
  return p;
}

int xcoord(point *p) {
  return p->x;
}

point *translate(point *, int (int, int)) {
  return NULL;
}

int toInt(point *p) {
  return (int)p;
}

point *toPoint(int p) {
  return (point *)p;
}




