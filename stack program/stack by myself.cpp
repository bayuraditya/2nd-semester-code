#include <iostream>
#include "conio.h"
#define MAX 5
using namespace std;

int top = -1;
int stack[MAX];

int push() {
	if (top == MAX - 1) {
		cout << "stack sudah penuh" << endl;
	}
	else {
		top++;
		cout << "masukan angka: ";
		cin >> stack[top];
		cout << "data " << stack[top] << " telah ditambahkan pada index ke " << top << endl;
	}
	cout << "pres any key to continue";
	return top;
	return stack[top];
}
void pop() {
	if (top == -1) {
		cout << "data kosong" << endl;
	}
	else {
		stack[top--];
		cout << "data pada index ke " << pop << " telah dihapus " << endl;
	}
	cout << "pres any key to continue";
	}

void clear() {
	top = -1;
	cout << "data stack telah dihapus" << endl;
	cout << "pres any key to continue";
}
void print() {
	cout << "daftar stack" << endl;
	if (top == -1) {
		cout << "stack kosong" << endl;
	}
	else {
		for (int i = top + 1; i--; i > -1) {
			cout <<"[" <<stack[i] <<"]"<< endl;
		}
	}

}

int main()
{
	int pilih;
	do {
		cout << "program stack" << endl;
		print();
		cout << "1. push" << endl;
		cout << "2. pop" << endl;
		cout << "3. clear" << endl;
		cout << "4. exit" << endl;

		cout << "pilih nomor: ";
		cin >> pilih;
		switch (pilih) {
		case 1:
			push();
			_getch();
			break;
		case 2:
			pop();
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

//22.20 13/03/2021 bisa semua!!