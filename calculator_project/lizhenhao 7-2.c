#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, result;
    char operator;
    
    printf("���׼����� (���� q �˳�)\n");
    printf("֧������: + - * /\n");
    printf("��ʽʾ��: 5 + 3\n\n");
    
    while (1) {
        printf("������ʽ> ");
        
        // ��ȡ�û�����
        if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
            // ����˳�����
            if (getchar() == 'q') break;
            printf("����: ��Ч����! ��ʹ�ø�ʽ: ���� ����� ����\n");
            while (getchar() != '\n'); // ������뻺����
            continue;
        }
        
        // ִ�м���
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    printf("����: ��������Ϊ��!\n");
                    continue;
                }
                result = num1 / num2;
                break;
            default:
                printf("����: ��Ч�����! ֻ֧�� + - * /\n");
                continue;
        }
        
        // ������
        printf("���: %.2lf\n\n", result);
    }
    
    printf("\n���������˳�\n");
    return 0;
}