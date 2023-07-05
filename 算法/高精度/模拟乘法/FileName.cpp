#include<iostream> // ���������������
#include <string> // �����ַ�����
#include<vector> // ����������

using namespace std; // ʹ�������ռ� std

vector<int> multiplication(vector<int> a, vector<int> b) // ����һ�����������ڽ����������������
{
	vector<int> c(a.size() + b.size() - 1, 0); // ����һ���µ��������� c
	reverse(a.begin(), a.end()); // �� a ��ת
	reverse(b.begin(), b.end()); // �� b ��ת

	for (int i = 0; i < a.size(); i++) // �Ӻ���ǰ���� a �� b
	{
		for (int j = 0; j < b.size(); j++)
		{
			c[i + j] = a[i] * b[j]; // �� a �� b ��ÿһλ��ˣ�����洢�� c ��
		}
	}
	for (int i = 0; i < c.size(); i++) // ���� c
	{
		if (c[i] > 9) // ��� c �ĵ� i λ���� 9
		{
			c[i + 1] += c[i] / 10; // ��λ
			c[i] = c[i] % 10; // ȡ����
		}
	}
	reverse(c.begin(), c.end()); // �� c ��ת
	return c; // ���� c
}
int main() // ������
{
	string a, b; // ���������ַ������� a �� b
	cin >> a >> b; // �ӿ���̨���������ַ���

	vector<int> a1, b1; // ���������������� a1 �� b1
	for (int i = 0; i < a.size(); i++)
	{
		a1.push_back(a[i] - '0'); // ���ַ��� a ת��Ϊ�������� a1
	}
	for (int i = 0; i < b.size(); i++)
	{
		b1.push_back(b[i] - '0'); // ���ַ��� b ת��Ϊ�������� b1
	}

	vector<int> c1 = multiplication(a1, b1); // ���� multiplication �������� a1 �� b1 ��ˣ�����洢�� c1 ��
	string c;

	for (int i = 0; i < c1.size(); i++)
	{
		c += to_string(c1[i]); // ���������� c1 ת��Ϊ�ַ��� c
	}
	cout << c; // ����ַ��� c ������̨
	return 0;
}
