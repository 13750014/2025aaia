// week17_2_zongzi_part2
// 修改自 week17_1_zongzi_part1(把成功的 week17_1_zongzi_part1 另存新檔 part2)
// 現在粽子往下掉 配合 mouse 會放粽子
PImage zongzi;
void setup() {
  size(500, 500);
  zongzi = loadImage("zongzi.png"); // 剛剛有把圖檔拉進程式裡
}
float x, y; //只有1顆粽子的座標
void draw(){
  background(204); // 204灰色
  imageMode(CENTER); // 畫圖時,圖片的座標,把它設在中心點的座標,不要用左上
  if(x>0){ //有按下 mouse 會設定 x,y, 就不會是0,才畫出來
    image(zongzi, x, y, 100, 100); // 把粽子,畫在 mouse 的座標
    y++; // 座標往下, 代表粽子往下
  }
}
void mousePressed(){ // 使用 week 04 的餵飼料的方法, 讓粽子望下掉
  x = mouseX;
  y = mouseY;
}
