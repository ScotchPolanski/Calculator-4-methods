#include <iostream>
#include "Rechnung.t"

float addition(float Wert1, float Wert2);
float subtraktion(float Wert1, float Wert2);
float multiplikation(float Wert1, float Wert2);
float division(float Wert1, float Wert2);


using namespace std;

int main()
{
	string eingabe;
	while (eingabe != "5")
	{
		cout << "=== Taschenrechner ===\n";
		cout << endl;
		cout << "1. If\n";
		cout << "2. case\n";
		cout << "3. Funktion\n";
		cout << "4. Template\n";
		cout << "5. Programm schliessen\n";
		cin >> eingabe;
		if (eingabe == "1")
		{
			cout << "Du hast dich fuer If entschieden.\n";
			cout << "Gebe zwei  Zahlen ein\n";
			float Wert1;
			float Wert2;
			cin >> Wert1;
			cin >> Wert2;
			cout << "Operation auswaehlen: + - * / \n";
			string Operationen;
			cin >> Operationen;
			if (Operationen == "+")
			{
				cout << Wert1 << " + " << Wert2 << " = " << Wert1 + Wert2 << endl;
			}
			else if (Operationen == "-")
			{
				cout << Wert1 << " - " << Wert2 << " = " << Wert1 - Wert2 << endl;
			}
			else if (Operationen == "*")
			{
				cout << Wert1 << " * " << Wert2 << " = " << Wert1 * Wert2 << endl;
			}
			else if (Operationen == "/")
			{
				cout << Wert1 << " / " << Wert2 << " = " << Wert1 / Wert2 << endl;;
			}
			else
			{
				cout << "Ungueltige Eingabe!\n";
			}
		}
		else if (eingabe == "2")
		{
			cout << "Du hast dich fuer case entschieden.\n";
			cout << "Gebe zwei  Zahlen ein\n";
			float Wert1;
			float Wert2;
			cin >> Wert1;
			cin >> Wert2;
			cout << "Operation auswaehlen: + - * / \n";
			char Operationen;
			cin >> Operationen;
			switch (Operationen)
			{
			case '+': cout << Wert1 << " + " << Wert2 << " = " << Wert1 + Wert2 << endl; break;
			case '-': cout << Wert1 << " - " << Wert2 << " = " << Wert1 - Wert2 << endl; break;
			case '*': cout << Wert1 << " * " << Wert2 << " = " << Wert1 * Wert2 << endl; break;
			case '/': cout << Wert1 << " / " << Wert2 << " = " << Wert1 / Wert2 << endl; break;
			default: cout << "Ungueltige Eingabe\n";
			}
		}
		else if (eingabe == "3")
		{
			cout << "Du hast dich fuer Funktion entschieden.\n";
			cout << "Gebe zwei  Zahlen ein\n";
			float Wert1;
			float Wert2;
			cin >> Wert1;
			cin >> Wert2;
			cout << "Operation auswaehlen: + - * / \n";
			string Operationen;
			cin >> Operationen;
			if (Operationen == "+")
			{
				cout << Wert1 << " + " << Wert2 << " = " << addition(Wert1, Wert2) << endl;
			}
			else if (Operationen == "-")
			{
				cout << Wert1 << " - " << Wert2 << " = " << subtraktion(Wert1, Wert2) << endl;
			}
			else if (Operationen == "*")
			{
				cout << Wert1 << " * " << Wert2 << " = " << multiplikation(Wert1, Wert2) << endl;
			}
			else if (Operationen == "/")
			{
				cout << Wert1 << " / " << Wert2 << " = " << division(Wert1, Wert2) << endl;
			}
			else
			{
				cout << "Ungueltige Eingabe!\n";
			}
		}
		else if (eingabe == "4")
		{
			cout << "Du hast dich fuer Template entschieden.\n";
			cout << "Gebe zwei  Zahlen ein\n";
			float Wert1;
			float Wert2;
			cin >> Wert1;
			cin >> Wert2;
			cout << "Operation auswaehlen: + - * / \n";
			string Operationen;
			cin >> Operationen;
			if (Operationen == "+")
			{
				cout << Wert1 << " + " << Wert2 << " = " << Addition(Wert1, Wert2) << endl;
			}
			else if (Operationen == "-")
			{
				cout << Wert1 << " - " << Wert2 << " = " << Subtraktion(Wert1, Wert2) << endl;
			}
			else if (Operationen == "*")
			{
				cout << Wert1 << " * " << Wert2 << " = " << Multiplikation(Wert1, Wert2) << endl;
			}
			else if (Operationen == "/")
			{
				cout << Wert1 << " / " << Wert2 << " = " << Division(Wert1, Wert2) << endl;
			}
			else
			{
				cout << "Ungueltige Eingabe!\n";
			}
		}
		if (eingabe > "5")
		{
			cout << "Ungueltige Eingabe! \n";
		}
	}
}

float addition(float Wert1, float Wert2)
{
	return Wert1 + Wert2;
}

float subtraktion(float Wert1, float Wert2)
{
	return Wert1 - Wert2;
}

float multiplikation(float Wert1, float Wert2)
{
	return Wert1 * Wert2;
}

float division(float Wert1, float Wert2)
{
	return Wert1 / Wert2;
}