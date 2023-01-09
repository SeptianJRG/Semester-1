void main()
{
    int tgl, bln, thn, hasil, k_bulan;
    char a, b;
    static int kode_bulan[12] = {1,4,4,0,2,5,0,3,6,1,4,6};
    static char kode_hari[7][10] = {"Sabtu","Minggu","Senin","Selasa","Rabu","Kamis","Jumat"};
    system("cls");
    
    printf("Berlaku Untuk Range Tahun 1900 - 2000\n");
    ulang:
    printf("Masukkan Tanggal (dd-mm-yy): ");
    scanf("%d %c %d %c %d", &tgl, &a, &bln, &b, &thn);
    if (thn >= 100)
    {
        printf("Masukkan dua angka belakang dari tahun (yy)\n");
        goto ulang;
    }
    hasil = (tgl + kode_bulan[(int)bln-1] + thn + thn/4) % 7;
    printf("Hasilnya yaitu %d\n", hasil);
    printf("Tanggal tersebut merupakan hari %s", kode_hari[hasil]);
    puts("\n");
}