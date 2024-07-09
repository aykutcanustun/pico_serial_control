#include <Servo.h>

Servo servo;  // Servo motor nesnesi oluştur

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // Bağlantı kurulana kadar bekle
  }
  Serial.println("Seri Haberlesme Basladi");
  servo.attach(11);  // Servo motoru dijital pin 11'e bağla
}

void loop() {
  if (Serial.available() > 0) {
    String incomingData = Serial.readString();
    int command = incomingData.toInt();
    Serial.print("Gelen Kod: ");
    Serial.println(command);

    if (command == 0) {
      for (int pos = 0; pos <= 180; pos += 1) {
        servo.write(pos);
        delay(10);
      }
      Serial.println("Servo 0'dan 180'e hareket etti");
    } 

    else if (command == 1) {
      for (int pos = 180; pos >= 0; pos -= 1) {
        servo.write(pos);
        delay(10);
      }
      Serial.println("Servo 180'den 0'a hareket etti");
    } 

    else {
      Serial.println("Gecersiz veri. Lütfen 0 veya 1 giriniz.");
    }
  }
}

