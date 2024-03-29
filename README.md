# Dasar-pemrograman-ESP32-untuk-Pemrosesan-Data-InputOutput-Analog-Digital

**ALAT DAN BAHAN** 
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm (1)
5) Sensor Capacitive Soil Moisture
6) LED (5) dan Push Button (3)
7) Multimeter
8) Resistor 330,1K, 10K Ohm (@ 3)


**HASIL KELUARAN**

**1) Instal lebih dulu Board ESP32 pada Arduino IDE**
   
**2) Mengakses GPIO ESP32**
   
   **GPIO 1** - Rangkaian dengan 1 LED dengan 1 button. Kendalikan LED tersebut dengan button yang ada.
   ![Rangkaian GPIO 1](https://user-images.githubusercontent.com/118364435/202907364-93b1d8fe-ef0c-4ca5-b747-8336681c3a26.jpg)
   Keluaran
   

https://user-images.githubusercontent.com/118364435/205869167-469e0ad0-b962-457f-bfa5-7f6db5a3ef0a.mp4


   
   Analisa : Pada percobaan ini digunakan 1 LED dan 1 Button. Sesuai dengan script yang dijalankan, dari hasil keluaran didapatkan bahwa jika button ditekan maka LED akan menyala, dan akan mati ketika button dilepas.  
   
   
   **GPIO 2** - Kemudian, tambahkan 1 LED dan 1 button lagi. Untuk LED kedua ini, buat interval waktu 2 detik. Jadi walaupun button tetap ditekan, jika waktunya sudah habis, maka LED akan mati.
  
  ![Rangkaian GPIO 2 3](https://user-images.githubusercontent.com/118364435/202908039-5bc216f7-e389-4927-ada5-3df82135b967.jpg)
   Keluaran
   

https://user-images.githubusercontent.com/118364435/205868044-29076271-7217-477d-829b-dd2e3bc732c8.mp4



   Analisa : Pada percobaan GPIO 2 ini ditambahkan 1 LED dan 1 Button lagi (dalam gambar rangkaiannya langsung pada rangkaian GPIO 3). Sesuai dengan script yang dijalankan, hasil keluaran didapatkan bahwa jika button2 ditekan maka LED akan menyala 5 detik dan mati 5 detik, akan terus seperti itu selama button2 ditekan. Dan LED akan mati jika button2 dilepas.
   
   
   **GPIO 3** - Kemudian, tambahkan 3 LED dan 1 button. Kendalikan 3 LED ini dengan 1 button tersebut agar bisa menyala berurutan.
   ![Rangkaian GPIO 2 3](https://user-images.githubusercontent.com/118364435/202908300-b8061740-f844-459d-b440-590476ca890d.jpg)
   Keluaran
   

https://user-images.githubusercontent.com/118364435/205869545-c57e26b4-fe09-4084-8a1c-e0a093976d62.mp4



   Analisa : Pada percobaan GPIO 3, ditambahkan 3 LED dan 1 Button (3 LED dikendalikan 1 button tsb). Sesuai dengan script yang dijalankan, maka dari hasil keluaran didapatkan bahwa ketika button3 ditekan maka LED akan menyala running dari kiri ke kanan dengan interval masing-masing LED selama 1 sekon. Dan LED akan mati ketika button3 dilepas.
   
   
**3) Mengakses PWM ESP32**

   Buatlah rangkaian seperti ini, kemudian running-kan dengan 2 script berbeda. Script pertama hanya menyalakan 1 LED di pin 16. Sedangkan script kedua menyalakan 3 LED.
  
  ![Rangkaian PWM bagus](https://user-images.githubusercontent.com/118364435/205859442-56672138-7966-4ecb-8b66-bf2c540bc114.PNG) 
  
  Keluaran
   
   **Menyalakan 1 LED (PWM 1)**
   

https://user-images.githubusercontent.com/118364435/205869809-1e5971b0-0ce2-4f73-b829-358f9b8e290b.mp4


   
   Analisa : Pada percobaan ini digunakan metode PWM (Pulse Width Modulation) yaitu pendekatan pelebaran pulsa dengan menghasilkan nilai tegangan analog dengan maksimal tegangan HIGH 3,3 V dan LOW 0 V. Pin pada PWM ini mengeluarkan sinyal digital yang dihasilkan dari dutty cycle (perbandingan HIGH dan LOW dalam 1 periode). Pada percobaan PWM 1 dengan 1 LED ini digunakan frekuensi 5000 Hz dan resolusi 8 bit (255 byte). Dari script yang dijalankan, LED akan menyala 5x lebih terang dari penglihatan mata manusia (karena 5000 Hz) dengan dutty cycle 100%. Karena terdapat delay 0,015 sekon, maka LED akan redup dengan kecepatan 0,015 sekon, lalu kemudian akan terang kembali.
   
   **Menyalakan 3 LED (PWM 2)**
   

https://user-images.githubusercontent.com/118364435/205870856-af8190a7-3198-4989-bda3-b49280051de9.mp4



   Analisa : Pada percobaan ini hampir sama dengan PWM 1, namun pada PWM 2 digunakan 3 LED sekaligus. Dari script yang dijalankan juga menggunakan frekuensi 5000 Hz, resolusi 8 bit, dan dutty cycle 100%. Dan akan terjadi redup dengan delay 0,015 sekon secara bersamaan dan kembali terang secara bersamaan pula.

**4) ADC dan DAC**

   **ADC DAC 1** - Buatlah rangkaian seperti ini dengan script di bawah. Kemudian putar potensiometer agar menghasilkan nilai 0 dan 4095. Lihat hasilnya.
   
   ![Rangkaian AC DC 1](https://user-images.githubusercontent.com/118364435/202908739-bf61a76a-6088-48c5-8784-ae12fc1c5f54.jpg)
   
   Keluaran
   

https://user-images.githubusercontent.com/118364435/205873237-cc5a747f-8774-47ac-9ad9-d02b899658dd.mp4



   
   Analisa : Pada percobaan ADC dan DAC 1 ini digunakan potensiometer 4K Ohm sebagai pembaca analog mulai dari 0 sampai 4095. ADC / DAC ini adalah coverter yang mengubah nilai analog ke digital maupun digital ke analog, dimana pembacaan nilai 0 setara dengan 0 V dan nilai 4095 setara dengan 3,3 V. Dalam percobaan ADC/DAC 1 ini, pada keluaran didapatkan apabila potensio diputar ke kanan maka nilainya akan bertambah sampai maksimum 4095 (3,3V), dan apabila diputar ke kiri maka nilainya akan berkurang sampai minimum 0 (0 V) dengan waktu 0,5 sekon tiap pembacaan pada serial monitor.
   
   **ADC DAC 2** - Kemudian tambahkan LED pada rangkaian tersebut. Putar potensio dan lihat apa yang terjadi pada LED dan serial monitor.
   ![Rangkaian AC DC 2](https://user-images.githubusercontent.com/118364435/202908811-c60a98cb-611e-4486-8671-2c14c4bee06b.jpg)
   Keluaran
   

https://user-images.githubusercontent.com/118364435/205873793-a0d2ccac-3ddd-455c-a7e4-1f94fec1a5c4.mp4


   Analisa : Pada percobaan ADC/DAC 2 ini hampir sama dengan ADC/DAC 1, namun perbedaannya hanya pada menambahkan LED untuk memastikan apakah benar jika nilainya bertambah maka voltasenya akan bertambah pula. Pada keluaran didapatkan bahwa jika potensio diputar ke kanan, maka nilai akan bertambah sampai maksimum 4095 dan voltase akan mencapai maksimum 3,3 V. Ini bisa dibuktikan dengan lampu LED yang terpasang. Ketika nilai bertambah, dapat dilihat LED akan menyala lebih terang dari kondisi awal. Dan ketika potensio diputar ke kiri, maka LED akan redup lalu kemudian mati jika nilainya mencapai 0 atau 0 Volt. 
