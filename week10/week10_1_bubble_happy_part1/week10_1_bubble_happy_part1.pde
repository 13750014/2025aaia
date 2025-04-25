//week10_1_bubble_happy_part1
PImage happy1,happy2;
void setup(){
  size(600, 675); //大小和圖片一樣喔!
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void draw(){
  background(happy1);
  if(mousePressed) image(happy2, 0, 0);
}
