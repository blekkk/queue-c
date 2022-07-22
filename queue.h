/*
Program          : ADT Static Queue
Deskripsi        : Membuat queue static dengan array
Nama/Author      : MFazaIR
Versi/Tanggal    : v1/03-04-2020
Compiler	     : MinGW64
*/

#include <stdio.h>

#define MAX 5 //max size dari array

/*
Deskripsi variabel
int front; //sebagai penanda urutan akhir dari queue bertipe integer
int rear; //sebagai penanda urutan pertama dari queue bertipe integer
int Arr[MAX]; //array queue bertipe array of integer
*/
typedef struct queue
{
	int front;
	int rear;
	int Arr[MAX];
}queue;

void init(queue *Q);
/* Melakukan initialization pada queue
   I.S : queue belum ter-inisialisasi
   F.S : queue terinisialisasi
*/

int isFull(queue *Q);
/* Mengecek status queue apakah penuh, return 1 jika true
   I.S : queue tidak diketahui statusnya
   F.S : queue diketahui statusnya
*/

int isEmpty(queue *Q);
/* Mengecek status queue apakah kosong, return 1 jika true
   I.S : queue tidak diketahui statusnya
   F.S : queue diketahui statusnya
*/

void enqueue(queue *Q, int val);
/* Menambah queue baru yang ditunjuk oleh rear 
   I.S : tidak ada queue/jumlah queue tetap
   F.S : queue ter-assign/queue bertambah
*/

void dequeue(queue *Q);
/* Mengurangi queue yang ditunjuk oleh front dan queue bergeser ke kiri
   I.S : ada queue/jumlah queue tetap
   F.S : tidak ada queue/queue berkurang
*/

void displayQ(queue *Q);
/* Menampilkan queue dari front hingga rear
   I.S : value queue tidak ditampilkan
   F.S : value queue ditampilkan
*/

