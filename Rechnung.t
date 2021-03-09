#ifndef Rechnung_T
#define Rechnung_T

template<typename T>
T Addition(T Wert1, T Wert2)
{
	T Ergebnis;
	Ergebnis = Wert1 + Wert2;
	return Ergebnis;
}

template<typename T>
T Subtraktion(T Wert1, T Wert2)
{
	T Ergebnis;
	Ergebnis = Wert1 - Wert2;
	return Ergebnis;
}

template<typename T>
T Multiplikation(T Wert1, T Wert2)
{
	T Ergebnis;
	Ergebnis = Wert1 * Wert2;
	return Ergebnis;
}

template<typename T>
T Division(T Wert1, T Wert2)
{
	T Ergebnis;
	Ergebnis = Wert1 / Wert2;
	return Ergebnis;
}

#endif