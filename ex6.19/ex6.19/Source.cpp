#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// ��l�ƶüƺؤl
	srand(time(NULL));

	// �ŧi�@�Ӥ@���}�C�ΨӰO���U���I�ƥX�{������
	int frequency[13] = { 0 }; // ���׬�13�A����0���ϥ�

	// �������Y������l 36,000 ��
	for (int i = 0; i < 36000; i++) {
		// �Y������l�A���o�I��
		int die1 = 1 + rand() % 6; // ����1��6���H����
		int die2 = 1 + rand() % 6;
		int sum = die1 + die2;

		// �N���G�[�J���Ʋέp�}�C
		frequency[sum]++;
	}

	// ��X�����D
	printf("%-10s%-10s%-15s\n", "Total", "Frequency", "Percentage");

	// ��X�C���I�ƪ��X�{���ƩM�ʤ���
	for (int total = 2; total <= 12; total++) {
		double percentage = (double)frequency[total] / 36000 * 100;
		printf("%-10d%-10d%-15.2f%%\n", total, frequency[total], percentage);
	}

	return 0;
}
