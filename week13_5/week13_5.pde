//week13_5_sound
//要先安裝
//找sound下載sound的函式 點Install
//播放音樂
import processing.sound.*; //使用聲音的外掛
SoundFile mySound, monkey,sword; //宣告變數 mtSound 它是 SoundFile
void setup(){
  size(400,400); //視窗大小 400*400
  monkey = new SoundFile(this,"Monkey 1.mp3");
  sword = new SoundFile(this,"sword slash.mp3");
  mySound = new SoundFile(this,"Intro Song_Final.mp3");
  mySound.play(); //在播放剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
}
void draw(){
  
}//裡面是空的圖畫
