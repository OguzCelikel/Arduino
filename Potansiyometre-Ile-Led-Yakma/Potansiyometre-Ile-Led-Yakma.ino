#define led 3
#define pot A0

void setup() {
  //analogiçin gerek yok PinMode  a gerek yok  
}

void loop() {
  

  int deger = analogRead(pot); // 0 ile 1023 arasında -- ama lamba 0-255 yanacak
  
  //deger = deger/4;
  deger = map(deger, 0,1023, 0,255); // map degerdeki 0 ile 1023 arasını
                                      //0 ve 255 arasına ayarlıyor
  analogWrite( led , deger );
    
}
