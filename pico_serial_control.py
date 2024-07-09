import serial
import time

# Doğru port numarasını kullan
ser = serial.Serial('COM5', 9600)  # Doğru port numarasını buraya yaz

def send_command(command):
    # Komutu gönder
    ser.write((str(command) + '\n').encode())
    
    # Yanıtı oku
    response = ser.readline().decode().strip()
    return response

if __name__ == "__main__":
    # Bağlantının başlaması için biraz bekle
    time.sleep(2)

    while True:
        command = input("Komut gir (0 veya 1): ")
        if command in ["0", "1"]:
            response = send_command(command)
            print("Yanıt: ", response)
        else:
            print("Geçersiz komut. Lütfen 0 veya 1 giriniz.")
