// week08_4_bubble_balloon_part1
void setup(){
  size(500, 400);
}
void draw(){
  background(204);
  ellipse(x, y, s, s); //畫氣球
  if(mousePressed) s += 2; //一直壓mouse就會變大
}
float x = 0, y = 0, s = 0;
void mousePressed(){
  x = mouseX; //氣球的座標
  y = mouseY;
  s = 1; //氣球一開始大小是 1 (數字)
}
