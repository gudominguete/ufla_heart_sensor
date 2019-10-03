#include <SoftwareSerial.h>
/*

BLE Module– First Run

Hardware 1: MLT-BT05 BLE Bluetooth v4.0

Hardware 2: Arduino Uno R3

Experimental Sketch: By T.K.Hareendran

*/

int bluetoothTx = 2; // D2 to TXD

int bluetoothRx = 3; // D3 to RXD  (Warning! See Text)

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

byte c;

void setup(){

  Serial.begin(9600);
  Serial.println("inicio");
  
  bluetooth.begin(115200);
  
  delay(100);
  
  bluetooth.println("U,9600,N");
  
  bluetooth.begin(9600);
}

void loop()
{

  if (bluetooth.available())
  {
    Serial.print((char)bluetooth.read());
  }
  if (Serial.available())
  {
    bluetooth.print((char)Serial.read());
  }
}
