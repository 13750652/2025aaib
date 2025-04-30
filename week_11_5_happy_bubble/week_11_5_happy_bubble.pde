//week_10_1_happy_bubble_part1
PImage toy1,toy2,toy3; // 變數宣告
PImage [] toys = new PImage[200];//Java的陣列,開很多
int N = 0; //現在有N張"小圖片"在使用
int [] x = new int[200]; //200 個圖片的座標
int [] y = new int[200]; //200 個圖片的座標

//int a, b; 像之前教過的int整數宣告
void setup(){
  size(400,495);
  toy1=loadImage("toy1.jpg");
  toy2=loadImage("toy2.jpg");
}
void draw(){
  background(toy1); //把第一章圖當背景，長寬都相同
  for(int i=0;i<N;i++){ //針對每張小圖片座標貼上來
     image(toys[i],x[i]-25,y[i]-25);
  }
  //if(mousePressed) image(toy2,0,0);//第二張圖
}
void mousePressed(){
  x[N]=mouseX;
  y[N]=mouseY;
  toys[N]=toy2.get(mouseX-25,mouseY-25,50,50);
  N++;
}
