/*
  Blink
  Menyalakan LED pada Pin 11 selama 2 detik dan Mematikanya selama 2 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 11;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 11.

void setup() 
{
	//Mengatur Digital Pin 11 sebagai Output.
  pinMode(11, OUTPUT);     
}

void loop() 
{
  digitalWrite(11, HIGH);   // Mengatur LED agar Menyala.
  delay(2000);               // Tunggu sampai 2 detik.
  digitalWrite(11, LOW);    // Mengatur LED agar Mati.
  delay(2000);               // Tunggu sampai 2 detik.
}
