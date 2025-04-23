//week_10_1_happy_bubble_part1
PImage toy1,toy2; // 變數宣告
//int a, b; 像之前教過的int整數宣告
void setup(){
  size(400,495);
  toy1=loadImage("toy1.jpg");
  toy2=loadImage("toy2.jpg");
}
void draw(){
  background(toy1); //把第一章圖當背景，長寬都相同
  if(mousePressed) image(toy2,0,0);//第二張圖

}
