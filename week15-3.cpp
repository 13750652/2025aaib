//week15_3_zongzi_part2
PImage zongzi;
void setup(){
  size (600,400); //�ҥ�week04
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);
}
float[]x=new float [100];
float[]y=new float [100];
int N = 0;
void draw(){
  background(#C0ffee);
  for(int i=0;i<N;i++){
    image(zongzi,x[i],y[i],60,50);
    ellipse(x[i],y[i],8,8);
    y[i]++;
    if(y[i]>400){
      for(int k=i;k<N-1;k++){
        x[k]=x[k+1];
        y[k]=y[k+1];
      }
      N--;
    }
  }
  println(N);
}
void mousePressed(){
  x[N]=mouseX;
  y[N]=mouseY;
  N++;
}
