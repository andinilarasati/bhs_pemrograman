class Nama:
        def full(self, firt_name, middle_name, last_name):
                print("FULL NAME :", first_name, middle_name, last_name
    
def main():
n = Nama()

while True:
    print("MENU SOAL 4 : ")
    PRINT("1. input")
    print("2. keluar\n")

    pilih = input("Pilihan anda : ")

    if pilih == '1':
        first_name = input ("Masukan Nama Depan : ")
        midle_name = input ("Masukan Nama Tengah : ")
        last_name = input ("Masukan Nama Belakang : ")
        n.full(first_name, middle_name, last_name )
    elif pilih == '2':
        print("\nTERIMA KASIH")
        break
    else:
        print("pilihan invalid")

        pil = input("Ingin kembali ke menu ? (YY/N) : ")
        if pil.lower() != 'y':
            print("\nTERIMAKASIH")
            break
            
    if __name__== "_main_":
        main()