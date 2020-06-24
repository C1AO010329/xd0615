#include <Adafruit_NeoPixel.h>//导入Adafruit_NeoPixel库

#define PIN 2	 // 宏定义设置输入引脚为2

#define NUMPIXELS      12 // 宏定义Neopixel Strip中的LED个数

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);//声明一个Adafruit_NeoPixel对象pixels，三个参数分别为Neopixel Strip中的LED个数、首个LED连接Arduino的引脚、Neopixel Strip的型号和参数）

int delayval = 100; // 设置延时，可以改变数值


/*
计算机中通过红、绿、蓝三种颜色调和来获取其他颜色
红、绿、蓝变化范围在0~255之间
*/
int redColor = 0;//初始化红色为0
int greenColor = 0;//初始化绿色为0
int blueColor = 0;//初始化蓝色为0

void setup() {// 初始化Neopixel库
  pixels.begin();//初始化pixels对象，准备输出数据
}

void loop() {
  setColor();//调用自定义的setColor函数，为redColor、greenColor、blueColor赋值
  for (int i=0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));//设置选中的pixel颜色（i为选中的pixel）

    // This sends the updated pixel color to the hardware.
    pixels.show();//将之前的pixel的颜色上传至Neopixel硬件上
    delay(delayval);//延时设置时间
  }
}

// setColor()
// picks random values to set for RGB
void setColor(){//获得pixel显示的随机颜色
  redColor = random(0, 255);//为redColor赋0~255的随机数
  greenColor = random(0,255);//为redColor赋0~255的随机数
  blueColor = random(0, 255);//为redColor赋0~255的随机数
}