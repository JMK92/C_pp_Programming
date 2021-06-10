/*
  �Է¹��� ���ڿ��� Ư�� ���� �󵵼� ����ϴ� ���α׷�
  <ó������>
  - ���ڿ��� �Է¹޾� ������ �󵵸� ����Ͽ� ����Ѵ�.
  - �Է� ���ڿ��� ��� ���ڸ� �������� �ʴ´�.
  - �󵵰� =  Ư�������� ������ �� / ��ü ������ ��
  <����>
  ���ڿ� = ALL
  A = 1/3
  L = 2/3

  ���ڿ� = Hello World
  D(d) = 1/11
  E(e) = 1/11
  H(h) = 1/11
  L(l) = 3/11
  O(o) = 2/11
  R(r) = 1/11
  W(w) = 1/11
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

    char buf[80];
    int count[26] = { 0 };      // A~Z

    cout << "���ڿ� = ";
    cin.getline(buf, 80);

    char* p = buf;
    int len = 0;
    double rate;

    while (*p != '\0') {
        *p = toupper(*p);   // �빮�ڷ� ��ȯ
        if (*p >= 'A' && *p <= 'Z')
            count[*p - 'A']++;
        p++;
    }

    for (int i = 65; i <= 90; i++)
        len += count[i - 'A'];

    cout << "���" << endl << endl;

    for (int i = 0; i < 26; i++) {
        rate = (double)count[i] / double(len);
        if (count[i] != 0)
            cout << (char)('A' + i) << "(" << (char)('a' + i) << ")" << fixed << setprecision(6) << rate << endl;
    }

    return 0;
}