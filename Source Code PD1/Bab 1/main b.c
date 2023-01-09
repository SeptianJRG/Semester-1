#include <stdio.h>

main()
{
	int harga_cpu, harga_ram, harga_mboard;
	int diskon1, diskon2, diskon3;
	int total1, total2, total3, total_semua;
	
	harga_cpu = 700000;
	harga_ram = 380000;
	harga_mboard = 800000;
	
	diskon1 = harga_cpu * 5/100;
	total1 = harga_cpu - diskon1;
	diskon2 = harga_ram * 10/100;
	total2 = harga_ram - diskon2;
	diskon3 = harga_mboard * 8/100;
	total3 = harga_mboard - diskon3;
	
	total_semua = total1 + total2 + total3;
	
	printf("|----|-------------------|-------------|----------|-------------|\n");
	printf("| No |    Nama Barang    |    Harga    |  Diskon  | Harga Total |\n");
	printf("|----|-------------------|-------------|----------|-------------|\n");
	printf("| 1. |    CPU 850 Mhz    |  Rp.%d  |    5%%    |  Rp.%d  |\n", harga_cpu,total1);
	printf("| 2. |    RAM 128 MHZ    |  Rp.%d  |   10%%    |  Rp.%d  |\n", harga_ram, total2);
	printf("| 3. |  Motherboard PIII |  Rp.%d  |    8%%    |  Rp.%d  |\n", harga_mboard, total3);
	printf("|---------------------------------------------------------------|\n");
	printf("|\t\t      TOTAL PEMBAYARAN\t            Rp.%d  |\n", total_semua);
	printf("|---------------------------------------------------------------|\n");
	
}
