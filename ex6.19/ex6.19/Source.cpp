#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// 初始化亂數種子
	srand(time(NULL));

	// 宣告一個一維陣列用來記錄各種點數出現的次數
	int frequency[13] = { 0 }; // 長度為13，索引0未使用

	// 模擬投擲兩顆骰子 36,000 次
	for (int i = 0; i < 36000; i++) {
		// 擲兩顆骰子，取得點數
		int die1 = 1 + rand() % 6; // 產生1到6的隨機數
		int die2 = 1 + rand() % 6;
		int sum = die1 + die2;

		// 將結果加入次數統計陣列
		frequency[sum]++;
	}

	// 輸出表格標題
	printf("%-10s%-10s%-15s\n", "Total", "Frequency", "Percentage");

	// 輸出每種點數的出現次數和百分比
	for (int total = 2; total <= 12; total++) {
		double percentage = (double)frequency[total] / 36000 * 100;
		printf("%-10d%-10d%-15.2f%%\n", total, frequency[total], percentage);
	}

	return 0;
}
