#include<iostream>
#include<conio.h>
using namespace std;
//#define STEPEN
void main()
{
	setlocale(LC_ALL, "Rus");
#if defined STEPEN
	//?????? 1. ?????????? ? ???????
	int a;
	cout << "\t\t\t??????? ????????????? ?????????\n";
	cin >> a;
	int n;
	cout << "\t\t\t??????? ????????????? ?????????? ???????\n";
	cin >> n;
	//?????? ?????????? ? ? ??????? ????? ????????????? ????????? ????????? ????????? ????? ? ?????? ?? ????	
	int b=1;
	for (int i=0; i <=n-1; i++)
	{
		b*=a; 
	}
	cout << "\t\t\t????????? ?????????? ? ??????? ?????:" << b << endl;
	cout << "\n\n";
	//?????? 2. ????? ?? ????? ??????? ASCII ????? ?? 16 ???????? ? ??????
	char key = 43;
	do
	{
		for (int j = 0; j < 16; j++)
		{
			key = _getch();
			cout << int(key) << " ";
		}
         
	} while (key != 27);

	
	
	//?????? 3. ????? ?? ????? ???? ????????? ?? ?????????? ???????
	int E1 = 1; //?????????? ????????? ???????? ???? ?????????
    int E2 = 2;
	int ESUM;//?????????? ??????????, ??? ????? ????????? ????????????? ????? ???????? ?????? ???? 
	int G;
	cout << "\t\t\t??????? ????????????? ?????? ?? ???????? ???? ??????? ??? ?????????\n";
	cin >> G;
	cout << "\t\t\t ?? ?????:" << G << endl;
	if (G == 1)
	{
		cout << "1" << endl;
	}
	if (G == 2)
	{
		cout  <<"1" << endl;//? ????? ?????? ??????? ??????? ? ?????????? ???? ?????? ??? ????? ???? ?????????
		cout << "2" << endl;
	}
	cout << "1" << endl;
	cout << "2" << endl;

	while (E2 <= G-E1)
	{
		ESUM = E1 + E2;
		E1 = E2;
		E2 = ESUM;
				
		cout << E2 << endl;
	}


	//?????? 4. ????? ?? ????? ????????? ?????????? ????? ?? ???? ?????????
	int F1=1;
	int F2=2;
	int k;
	int FSUM;
		cout << "\t\t\t??????? ?????????? ????? ?? ??? ?????????\n";
	cin >> k;
	cout << "\t\t\t?? ?????:" << k << endl;
    cout << "1" << endl;
	cout << "2" << endl;
	for (int x = 1; x < k - 1; x++)
	{
		FSUM = F1 + F2;
		F1 = F2;
		F2 = FSUM;
		cout << F2 << endl;
	}

	//?????? 6. ????? ?? ????? ??????? ?????????
	cout << "\t\t?????? 6. ????? ?? ????? ??????? ?????????\n";

    for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << "X" << j <<  "=" << i * j << "\t";
		}
		cout << "\n\n";
	}


	//?????? 7. ??????? ?? ????? ??????? ????????
	cout << "\t\t?????? 7. ????? ?? ????? ??????? ????????\n";

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << "\n\n";
	}

	
		


#endif
}