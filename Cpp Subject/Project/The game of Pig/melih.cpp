#include <iostream>
using namespace std;

int computerTurn(int);
int humanTurn(int);

int main() {
	srand(time(NULL));
	int humanPoint=0, computerPoint=0;
	int loop = 1;
	int winner=0;
	while (loop) {
		;humanPoint = humanTurn(humanPoint);
		if (humanPoint > 99){
			loop--;
			winner++;
		}else{
			computerPoint = computerTurn(computerPoint);
		}
		if (computerPoint > 99)
			loop--;
	}
	if (!winner)
		printf("\n Bilgisayar %d puanla kazandi...", computerPoint);
	else
		printf("\n Oyuncu %d puanla kazandi...", humanPoint);
	return 0;
}

int humanTurn(int humanTotalScore) {
	cout << "\n Sira oyuncuya geciyor...";
	cout << "\n Oyuncunun toplam puani : " << humanTotalScore;
	int sum = 0, loop = 1, loop2, r_num;
	char *c = (char*)malloc(sizeof(char)*2);
	cout << "\n Zar atmak icin r tusuna bas : ";
	cin >> c;
	while (!(!strcmp(c, "r"))) {
		cout << "\n Hatali giris";
		cout << "\n Zar atmak icin r tusuna bas : ";
		cin >> c;
	}
	r_num = rand() % 6 + 1;
	if (r_num == 1)
		loop--;
	while (loop) {
		sum += r_num;
		loop2 = 1;
		cout << "\n Atilan zar : " << r_num;
		cout << "\n Simdiye kadarki atilan zarlarin toplami : "<<sum;
		while (loop2) {
			cout << "\n Tekrar zar atmak icin \"r\" tusuna, \n Sirayi birakmak icin \"h\" tusuna basiniz...";
			cin >> c;
			if (!strcmp(c, "r")){
				loop2--;
				r_num = rand() % 6 + 1;
				if (r_num == 1) {
					loop--;
					cout << "\n Atilan zar 1 oldugu icin puan kazanamadiniz...";
					sum = 0;
					getchar();
				}
			}else if (!strcmp(c, "h")){
				loop2--;loop--;
			}else
				cout << "\n Hatali giris...";
		}
	}
	getchar();
	system("cls");
	return humanTotalScore + sum;
}

int computerTurn(int computerScore) {
	cout << "\n Sira bilgisayara geciyor...";
	cout << "\n Bilgisayarin toplam puani : " << computerScore;

	int sum = 0, loop = 1, r_num = rand() % 6 + 1;
	while (loop) {
		cout << "\n\n Bilgisayarin attigi zar : " << r_num;
		sum += r_num;
		cout << "\n Simdiye kadarki atilan zarlarin toplami : " << sum <<"\n";
		if (r_num == 1) {
			loop--;
			sum = 0;
			cout << "\n Atilan zar \"1\" oldugu icin bilgisayar puan kazanamadi";
		}
		else if (sum > 19) {
			loop--;
			cout << "\n Bilgisayar +20 puan topladi ve duruyor";
		}
		r_num = rand() % 6 + 1;
	}
	getchar();
	system("cls");
	return computerScore + sum;
}