 //  #define kirmizi.led 8 ---> yaparsak 8 yerine kirmizi.led yazabiliriz 


void setup() {  // hangi pinlerin giriş hangilerinin çıkış oldupnu yazacağız
  pinMode(8,OUTPUT); // LED çıkış bişey burada 8 i anladı
}

void loop() {     // işi burda yapacağız  
    digitalWrite(8,HIGH); //HIGH 5 v veriyor YANIYOR AMPUL
    delay(700); // 500 milisaniye bekletti

    digitalWrite(8,LOW); // kesecek
    delay(700); // yine 500 milisaniye beklesin
    
}
