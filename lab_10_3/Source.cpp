#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include < Windows.h >

using namespace std;

void CreateTXT(char* fname);
void AddTXT(char* fname);
void PrintTXT(char* fname);

int main() {
    char fname[100];
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    int actions;
    do {
        cout << "������ ����� 䳿:" << endl << endl;
        cout << " [1] - �������� ����" << endl;
        cout << " [2] - ����������� ��� �����" << endl;
        cout << " [3] - ��������� ��� �����" << endl;
        cout << endl;
        cout << " [0] - ����� �� ��������" << endl << endl;
        cout << "�������� ����� 䳿: ";
        cin >> actions;
        cout << endl;

        switch (actions) {
        case 1:
            cout << "������ ��'� �����: "; cin >> fname;
            CreateTXT(fname);
            break;
        case 2:
            PrintTXT(fname);
            cout << endl;
            break;
        case 3:
            AddTXT(fname);
            break;

        case 0:
            break;
        default:
            cout << "�� ����� ������������ ����� ������� " << endl;
        }
    } while (actions != 0);
    return 0;
}
void CreateTXT(char* fname)
{
    ofstream fout(fname);
    char ch;
    string s;
    do {
        cin.get();
        cin.sync();
        cout << "������ ������� ��������: ";
        getline(cin, s);
        fout << s << " ";
        cout << "������ ������ � ������: ";
        int p;
        cin >> p;
        fout << p << endl;
        cout << "������ ������ � ����������: ";
        int m;
        cin >> m;
        fout << m << endl;
        cout << "������ ������ � �����������: ";
        int i;
        cin >> i;
        fout << i << endl; cout << "������ �� ���� �������? (y/n): ";
        cin >> ch;
    } while (ch == 'y');
    cout << endl;
}

void PrintTXT(char* fname)
{
    ifstream fin(fname);
    string s;
    while (getline(fin, s))
    {
        cout << s << endl;
    }
}

void AddTXT(char* fname) {
    ofstream fout(fname, ios::app);
    char ch;
    string s;

    if (!fout) {
        cerr << "��������� ������� ����" << endl;
        return;
    }
    do {
        cin.get();
        cin.sync();
        cout << "������ ������� ��������: ";
        getline(cin, s);
        fout << s << " ";
        cout << "������ ������ � ������: ";
        int p;
        cin >> p;
        fout << p << endl;
        cout << "������ ������ � ����������: ";
        int m;
        cin >> m;
        fout << m << endl;
        cout << "������ ������ � �����������: ";
        int i;
        cin >> i;
        fout << i << endl; cout << "������ �� ���� �������? (y/n): ";
        cin >> ch;
    } while (ch == 'y');
    cout << endl;
}
