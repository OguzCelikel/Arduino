//BUTONLA LED YAKMA

#define Buton 8
#define Led 10 

int buton_durumu = 0;

void setup() {

  pinMode(Buton, INPUT); // INPUT çünkü veri alıyoruz
  pinMode(Led, OUTPUT);   // Veriyi veriyoruz
}

void loop() {

  buton_durumu = digitalRead(Buton); // yukarda tanımladık öyle geldik
              // 0 mı 1 mi ona göre LED i yakıp söndürebiliriz
              // butona basıyorsak yak elimizi çekersek söndür
    if(buton_durumu == 1){    // 5 v geliyorsa
      digitalWrite(Led , HIGH);           
    }

    else{
      digitalWrite(Led , LOW);          
    }
}
