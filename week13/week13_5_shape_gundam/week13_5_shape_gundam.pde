PShape gundam;//宣告鋼彈模型
void setup(){//P語言是Java變形
  size(500,500,P3D);//有P語言3D功能
  gundam = loadShape("Gundam.obj");
}        //讀入模型,很像loadImage()
void draw(){//每秒60次畫圖
  background(#F8FFAF);
  translate(250,0,0);//往右移一半
  scale(20,20,20);//放大20倍,看起來倒過來,因為建3D模型時,Y軸向上,小畫家/P語言/圖片,Y軸向下
  shape(gundam);//秀出模型,像image()
}
