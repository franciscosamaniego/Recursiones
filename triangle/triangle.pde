void setup() {
  size(400,400);
}

void draw() {
  float x = 175;
  float y = 275;
  float l = 150;
  float n = 4;
  tri(x,y,l,n);
}

void tri(float x, float y, float l, float n) {
  if(n == 0) return;
  line(x,y,x+l,y);
  line(x,y,x+l/2,y+l*cos(60));
  line(x+l/2,y+l*cos(60),x+l,y);
  tri(x,y,l/2,n-1);
  tri(x+l/2,y,l/2,n-1);
  tri(x+l/4,y-l/2,l/2,n-1);
}
