// autoparkUI.h
// lab5

#pragma once
#include <string>
using namespace std;

// �������
string getIndertData(string& table, string& photoFileName, string& driverServiceNumber);

// �������� �� �������
string getDeleteData(string& table, string& column);


string getUpdateValue(string& table, string& column, string& value, string& columnToChange);

// ������� ������ �� ���� ��������
string getSelectData(int& columnNumber, string& columnNames);

// ������� ����� ��������
string getDriverServiceNumber();

// ������� �����
string getCarNumber();

// ������� ���������� �������
string getPeriodData();

// ���� ��� ������
void Menu();
