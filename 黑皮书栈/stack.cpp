#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
int IsEmpty(Stack S)
{
	return S->Next == NULL;
}
Stack CreateStack()
{
	Stack S = new Node;
	S->Next = NULL;
	return S;
}
void Pop(Stack S)
{
	PtrToNode FirstCell;
	if (IsEmpty(S))
	{
		cout << "Empty Stack" << endl;
		exit(0);
	}
	FirstCell = S->Next;
	S->Next = FirstCell->Next;
	delete FirstCell;
}
void MakeEmpty(Stack S)
{
	if (S == NULL)
	{
		cout << "Must use CreatStack first!" << endl;
		exit(0);
	}
	while (!IsEmpty(S))
	{
		Pop(S);
	}
}
void DisposeStack(Stack S)
{
	MakeEmpty(S);
	delete S;
}
void Push(ElementType X, Stack S)
{
	if (S == NULL)
	{
		cout << "Must use CreatStack first!" << endl;
		exit(0);
	}
	PtrToNode TmpCell = new Node;
	TmpCell->Element = X;
	TmpCell->Next = S->Next;
	S->Next = TmpCell;
}
ElementType Top(Stack S)
{
	if (!IsEmpty(S))
	{
		return S->Next->Element;
	}
	else
		exit(0);
}


