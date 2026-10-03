print("Pilih konversi:")
print("1. Rupiah ke USD")
print("2. USD ke Rupiah")
print("3. Rupiah ke Yen Jepang")

pilihan = int(input("Pilihan (1-3): "))
jumlah = float(input("Masukkan jumlah: "))

kurs_usd = 15000      # 1 USD = 15.000 Rupiah
kurs_yen = 100         # 1 Yen = 100 Rupiah

if pilihan == 1:
    hasil = jumlah / kurs_usd
    print(f"Hasil: {hasil:.2f} USD")
elif pilihan == 2:
    hasil = jumlah * kurs_usd
    print(f"Hasil: {hasil:.2f} Rupiah")
elif pilihan == 3:
    hasil = jumlah / kurs_yen
    print(f"Hasil: {hasil:.2f} Yen")
else:
    print("Pilihan tidak valid")