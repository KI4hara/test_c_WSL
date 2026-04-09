#include <stdio.h>

int add(int a, int b) {
    int result = a + b;  // ← ここにブレークポイントを置くと計算過程が見える
    return result;
}

void updateArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // ← 配列の変化をステップ実行で確認できる
    }
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before add: x=%d, y=%d\n", x, y);

    int sum = add(x, y);  // ← 関数呼び出しのデバッグに最適
    printf("Sum = %d\n", sum);

    int data[5] = {1, 2, 3, 4, 5};
    printf("Before updateArray:\n");
    for (int i = 0; i < 5; i++) {
        printf("  data[%d] = %d\n", i, data[i]);
    }

    updateArray(data, 5);

    printf("After updateArray:\n");
    for (int i = 0; i < 5; i++) {
        printf("  data[%d] = %d\n", i, data[i]);
    }

    return 0;
}
