#include <iostream>
#include "conio.h"
#define MAX 5//data maximum queue
using namespace std;

int top = -1;
int queue[MAX];

//menambahkan data ke antrian
void enqueue() {

	if (top == MAX-1 ) {
		cout << "queue sudah penuh" << endl;
	}
	else {
	top++;
		cout << "masukan angka: ";
		cin >> queue[top];
		cout <<"["<< queue[top]<<"]" << " sudah dimasukkan pada index ke " << top << endl;
	}cout << "press any key to continue";
}

//mengeluarkan data dari antrian 
void dequeue() {
	int j = 0;
	if (top == -1) {
		cout << "queue sudah kosong" << endl;
	}
	else {
		do {
			queue[j] = queue[j + 1];
			j++;
			
		} while (j < top);
		top--;
	}cout << "press any key to continue";
}

//menghapus semua data queue
void clear() {
	top = -1;
	cout << "queue sudah kosong" << endl;
	cout << "press any key to continue";
}
//menampilkan data queue
void print() {
	int k = top;
	if (top == -1) {
		cout << "[queue masih kosong]" << endl;
	}else if(top != -1) {
		do {
			cout << "[" << queue[k] << "]" << endl;
			k--;
		} while (k>-1);
	}
}

int main()
{
	int pilih;
	do {
		cout << "program queue" << endl;
		print();
		cout << "1. enqueue" << endl;
		cout << "2. dequeue" << endl;
		cout << "3. clear" << endl;
		cout << "4. exit" << endl;
		cout << "pilih nomor: ";
		cin >> pilih;
		switch (pilih) {
		case 1:
			enqueue();
			_getch();
			break;
		case 2:
			dequeue();
			_getch();
			break;
		case 3:
			clear();
			_getch();
			break;
		case 4:
			cout << "terimakasih, silahkan keluar dari program";
			_getch();
			break;
		default:
			cout << "pilihan tidak tersedia, silahkan pilih nomor yang tersedia";
			_getch();
		}
		system("cls");
	} while (pilih != 4);
	_getch();
	return 0;
}

