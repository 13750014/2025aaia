// week08_6_bubble_balloon_part3
void setup(){
  size(500, 400);
}
void draw(){
  background(204);
  for(int i=0; i<N; i++){
    ellipse(x[i], y[i]-s[i]/2, s[i]*0.75, s[i]); //畫氣球
    if(mousePressed &&i==N-1) s[i] += 2; //一直壓mouse就會變大
    if((mousePressed==false || i!=N-1)&& y[i] >s[i]) y[i] -= 2; //沒有按mouse就飛上去
  }
}
float [] x = new float[100]; // Java 的陣列宣告
float [] y = new float[100];
float [] s = new float[100]; //可放100個氣球
int N = 0; //現在有0個氣球
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  s[N] = 1;
  N++;
}
