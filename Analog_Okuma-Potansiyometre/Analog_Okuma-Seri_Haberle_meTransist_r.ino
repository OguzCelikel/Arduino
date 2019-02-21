#define potpin A0

//power ve GND olmayacak
int deger = 0;
void setup() {
  Serial.begin(9600); 
  // bu hız haberleşme başlatma arduinodan bilgisayara haberleşme
  
  Serial.println("Pot Değer Okuma"); //haberleşme başladıktan sonra mesaj
  //Serial monitör açacağız
}

void loop() {

   deger = analogRead(potpin);

   float gerilim = (5.00/1024.00) * deger; //float ondalıklı sayı
                                           //gerilim değeri V den
   

   Serial.println(gerilim);

   delay(300);

    if (gerilim > 3.99) {
    
    Serial.println("4 V DEN BUYUK OLDU");
    delay(700);
    Serial.println("GERİ SAYIM BAŞLADI");
    delay(700);
    Serial.println("ÇEK ELİNİ");
    
    for (int i = 10; i > 0 ; i--){
            Serial.println(i);
            delay(1000);
      }
          Serial.println("  :) ŞAKAA HAHAAHAHAA  :=)  ");
          delay(700);
          Serial.println("4 V DEN KUCUK YAP");

          delay(5000);
          
   }
 
}
