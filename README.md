# Podstawy-programowania-C++

Repozytorium z zadaniami z przedmiotu "Podstawy programowania C++" ([kurs](https://piskorowskijakub.pl/course/Programowanie-w-C~p~p/)).

**Autor:** Maciej Jakubowski — ZPSB, studia dzienne, informatyka 2025/2026

## Wymagania

Do kompilacji i uruchomienia programów wymagane są:

- system **Linux**, **macOS** lub **Windows** (np. przez WSL)
- kompilator **g++** (GCC) w wersji obsługującej standard **C++17**
- terminal (bash lub odpowiednik)

### Instalacja kompilatora

**Ubuntu / Debian:**

```bash
sudo apt update
sudo apt install build-essential
```

**Windows (WSL):** tak samo jak na Ubuntu, po zainstalowaniu WSL.

**Windows (bez WSL):** należy zainstalować [MSYS2](https://www.msys2.org/) lub MinGW i użyć `g++` z terminala MSYS2.

Sprawdzenie, czy kompilator działa:

```bash
g++ --version
```

## Rozdziały

1. Pierwszy program
2. Instrukcja warunkowa if
3. Instrukcja switch
4. Pętla while i do-while
5. Pętla for
6. Zmienne tablicowe
7. Tablice znakowe i obiekty string
8. Funkcje
9. Rekurencja / Przeciążenie funkcji
10. Wskaźniki
11. Struktury danych
12. Operacje na plikach

## Uruchomienie

Należy przejść do folderu z wybranym rozdziałem, skompilować plik `.cpp` i uruchomić program:

```bash
cd "8. Funkcje"
g++ -std=c++17 -Wall -o program nazwa_pliku.cpp
./program
```

Na **Windows** (bez WSL) zamiast `./program` należy uruchomić `program.exe`.

Niektóre zadania (np. z rozdziału 12) korzystają z plików tekstowych — należy uruchomić je z katalogu, w którym znajduje się dany plik (np. `dane.txt`).
