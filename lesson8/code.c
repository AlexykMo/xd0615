/*
  ReadAnalogVoltage 读取模拟电压
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  读取引脚0上的模拟输入，将它转换为电压，并打印出串行模拟器的结果。

  OPEN THE SERIAL MONITOR TO VIEW THE OUTPUT >> 
  打开串行监视器查看输出。
  
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
  将电位计的中心引脚连接到引脚A0，并将外部引脚连接到+5V和接地。

  This example code is in the public domain.
  此示例代码在公共域中
*/


// the setup routine runs once when you press reset:按下reset时，设置程序执行一次
void setup() {
  // initialize serial communication at 9600 bits per second:设置波特率9600
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:loop程序一直执行
void loop() {
  // read the input on analog pin 0:读取模拟引脚0上的输入
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  // 将模拟读数（从0-1023）转换为电压（0-5V）
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:打印出你读到的值
  Serial.println(voltage);
}