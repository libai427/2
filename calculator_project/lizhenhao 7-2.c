#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, result;
    char operator;
    
    printf("简易计算器 (输入 q 退出)\n");
    printf("支持运算: + - * /\n");
    printf("格式示例: 5 + 3\n\n");
    
    while (1) {
        printf("输入表达式> ");
        
        // 读取用户输入
        if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
            // 检查退出命令
            if (getchar() == 'q') break;
            printf("错误: 无效输入! 请使用格式: 数字 运算符 数字\n");
            while (getchar() != '\n'); // 清除输入缓冲区
            continue;
        }
        
        // 执行计算
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
                    printf("错误: 除数不能为零!\n");
                    continue;
                }
                result = num1 / num2;
                break;
            default:
                printf("错误: 无效运算符! 只支持 + - * /\n");
                continue;
        }
        
        // 输出结果
        printf("结果: %.2lf\n\n", result);
    }
    
    printf("\n计算器已退出\n");
    return 0;
}