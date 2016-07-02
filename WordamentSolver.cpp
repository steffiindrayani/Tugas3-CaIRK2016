/*		NIM/Nama	:	13514063/Steffi Indrayani
 * 		Tanggal		:	1 Juli 2016
 * 		Nama File	:	WordamentSolver.cpp
 * 		Deskripsi	:	Program coba-coba WordamentSolver tanpa GUI dengan pendekatan prosedural
 */

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* KAMUS GLOBAL */
	char Matrix[4][4];
	vector<string> Answer;
	
/* DEKLARASI FUNGSI DAN PROSEDUR */

char getCharacterCell (int i, int j) 
//Mengambil karakter pada baris ke-i dan kolom ke-j
{
	return Matrix[i][j];
}

bool isBorder (int i, int j) 
//Mengembalikan true jika sel terletak di pinggiran
{
	return (i == 0 || j == 0 || i == 3 || j == 3);
}

bool isNeighbor (int i, int j, int ib, int jb)
//Mengembalikan true jika sel ib-jb merupakan tetangga dari sel i-j
{
	return true;
}

bool isWordExist (string s)
//Mengembalikan true jika kata tersebut diterima
{
	return true;
}

bool isAnswerExist (string s)
//Mengembalikan true jika kata sudah terdapat di jawaban
{
	return true;
}

void addToAnswer (string s)
//Menambahkan kata pada list jawaban
{
	if (isWordExist(s) && !isAnswerExist(s)) {
		Answer.push_back(s);
	}
}

/* Program Utama */

int main() {
	int i, j;
	//Baca matriks sementara
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			cin >> Matrix[i][j];
		}
	}
	//Solve Matrix
	//Show Answers
	for (i = 0; i < Answer.size(); i++) {
		cout << Answer[i] << endl;
	}
	
	return 0;
}
