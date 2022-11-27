# Dasar-pemrograman-ESP32-untuk-InputOutput

**Alat dan Bahan yang digunakan** 
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm (1)
5) Sensor Capacitive Soil Moisture
6) LED (5) dan Push Button (3)
7) Multimeter
8) Resistor 330,1K, 10K Ohm (@ 3)


**Langkah Percobaan**

**1) Instalasi Board ESP32 pada Arduino IDE**
   
   Buka Arduino IDE. Kemudian klik Menu File > Preferences
    ![image](https://user-images.githubusercontent.com/118364435/202906449-c52e0bec-617e-4805-b56e-0c67ff45f2f0.png)
   Pada kolom Additional ... yang ada dibawah, tambahkan link berikut https://dl.espressif.com/dl/package_esp32_index.json . Klik menu Tools > Board: > Pilih Boards        Manager ...
   
   ![image](https://user-images.githubusercontent.com/118364435/202907040-60c13702-f1ee-415e-8d3d-b37060c2c5f7.png)
  
    Pada kolom pencarian tulis ESP32 kemudian install dan tunggu sampai selesai.
   ![image](https://user-images.githubusercontent.com/118364435/202907069-ed432986-108b-482b-96e7-893144f7fb2a.png)


**2) Mengakses GPIO ESP32**
   
   **GPIO 1** - Buat rangkaian seperti ini, yaitu 1 LED dengan 1 button. Kendalikan LED tersebut dengan button yang ada.
   ![Rangkaian GPIO 1](https://user-images.githubusercontent.com/118364435/202907364-93b1d8fe-ef0c-4ca5-b747-8336681c3a26.jpg)

   
   **GPIO 2** - Kemudian, tambahkan 1 LED dan 1 button lagi. Untuk LED kedua ini, buat interval waktu 2 detik. Jadi walaupun button tetap ditekan, jika waktunya sudah habis, maka LED akan mati.
   ![Rangkaian GPIO 2 3](https://user-images.githubusercontent.com/118364435/202908039-5bc216f7-e389-4927-ada5-3df82135b967.jpg)

   
   **GPIO 3** - Kemudian, tambahkan 3 LED dan 1 button. Kendalikan 3 LED ini dengan 1 button tersebut agar bisa menyala berurutan.
   ![Rangkaian GPIO 2 3](https://user-images.githubusercontent.com/118364435/202908300-b8061740-f844-459d-b440-590476ca890d.jpg)
 


**3) Mengakses PWM ESP32**

   Buatlah rangkaian seperti ini, kemudian cobalah dengan 2 script di bawah ini.
   ![Rangkaian PWM 1 2 (EDIT)](https://user-images.githubusercontent.com/118364435/204143038-8634ff59-8e44-4f73-b98d-60e8cb02dfc1.jpg)


**4) ADC dan DAC**

   **ADC DAC 1** - Buatlah rangkaian seperti ini dengan script di bawah. Kemudian putar potensiometer agar menghasilkan nilai 0 dan 4095. Lihat hasilnya.
   ![Rangkaian AC DC 1](https://user-images.githubusercontent.com/118364435/202908739-bf61a76a-6088-48c5-8784-ae12fc1c5f54.jpg)
  
   
   **ADC DAC 2** - Kemudian tambahkan LED pada rangkaian tersebut. Putar potensio dan lihat apa yang terjadi.
   ![Rangkaian AC DC 2](https://user-images.githubusercontent.com/118364435/202908811-c60a98cb-611e-4486-8671-2c14c4bee06b.jpg)
  


**Hasil Percobaan**
1) GPIO

   GPIO 1
   
3) PWM
4) ADC dan DAC




    

