#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
void test01()
{
	cout << "===== 基础功能测试开始 =====\n";

	// 1. 创建栈
	Stack S = CreateStack();
	cout << "创建栈成功，栈是否为空？" << (IsEmpty(S) ? "是" : "否") << endl;

	// 2. 入栈多个元素
	cout << "\n入栈元素：10, 20, 30\n";
	Push(10, S);
	Push(20, S);
	Push(30, S);
	cout << "栈是否为空？" << (IsEmpty(S) ? "是" : "否") << endl;
	cout << "当前栈顶元素：" << Top(S) << endl;
		// 3. 出栈并验证
	cout << "\n出栈一次...";
	Pop(S);
	cout << "出栈后栈顶元素：" << Top(S) << endl;
	cout << "再出栈一次...";
	Pop(S);
	cout << "出栈后栈顶元素：" << Top(S) << endl;
		// 4. 清空栈
	cout << "\n清空栈...";
	MakeEmpty(S);
	cout << "清空后栈是否为空？" << (IsEmpty(S) ? "是" : "否") << endl;
		// 5. 再次入栈测试
	cout << "\n再次入栈元素：100\n";
	Push(100, S);
	cout << "当前栈顶元素：" << Top(S) << endl;
		// 6. 销毁栈
	DisposeStack(S);
	cout << "\n===== 基础功能测试结束 =====\n\n";
}
void test02()
{
	cout << "===== 栈边界情况测试开始 =====\n\n";

	// 测试1：空栈 调用 Top
	cout << "1. 测试空栈取栈顶 Top：" << endl;
	Stack s1 = CreateStack();
	//Top(s1);
	// 正常情况：这里直接报错+程序退出，下面代码走不到


	// 下面这些你想逐个测，就注释上面 Top 那行，一个个放开测

	
	// 测试2：空栈 调用 Pop
	/*cout << "2. 测试空栈出栈 Pop：" << endl;
	Stack s2 = CreateStack();
	Pop(s2);*/
	

	// 测试3：空栈多次 MakeEmpty
	/*cout << "3. 测试空栈重复清空：" << endl;
	Stack s3 = CreateStack();
	MakeEmpty(s3);
	MakeEmpty(s3);
	cout << "   多次清空空栈正常无崩溃\n";
	DisposeStack(s3);*/


	// 测试4：正常压栈清空再复用
	cout << "4. 测试压入元素后清空再使用：" << endl;
	Stack s4 = CreateStack();
	Push(100, s4);
	Push(200, s4);
	MakeEmpty(s4);
	cout << "   清空后是否为空：" << (IsEmpty(s4) ? "是" : "否") << endl;
	Push(999, s4);
	cout << "   重新入栈后栈顶：" << Top(s4) << endl;
	DisposeStack(s4);
	

	cout << "\n===== 边界测试全部完成 =====\n";
}

int main()
{
	test02();
	return 0;
}