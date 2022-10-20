int nums[] = {7,9,3,6,1,2,5};
int x = 0;

void setup(){
  size(800,800);
  fill(0);
  strokeWeight(1);
  stroke(255);
}

void draw(){
  int base = x / nums.length;
  for (int i = 0 ;i < nums.length;i++) {
    rect(x,0,base,nums[i]*10);
    x += base;
  }
}
