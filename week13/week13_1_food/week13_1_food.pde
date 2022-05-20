function setup() {
    initializeFields();
    createCanvas(400, 300);
    textSize(40);
}

// -1:沒選, 0:Choise 1,1:Choise 2,2:Choise 3
var choice;

function draw() {
    // 背景色
    background(color(0xDF, 0xEA, 0x45));
    // 字填充的顏色
    fill(color(0x45, 0x6F, 0xEA));
    if (choice == 0)
        rect(50, 50, 75, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 200, 2);
    if (choice == 3)
        rect(50, 200, 75, 2);
    if (choice == 4)
        rect(50, 250, 75, 2);
    text("泡麵", 50, 50);
    text("Ubereat", 50, 100);
    text("Foodpanda", 50, 150);
    text("牛排",50,200);
    text("大餐",50,250);
}

function mousePressed() {
    // choice = (choice+1)%3;
    choice = int(random(5));
}

function initializeFields() {
    choice = -1;
}
