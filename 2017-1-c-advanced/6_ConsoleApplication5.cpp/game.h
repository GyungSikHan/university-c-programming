#pragma once

class C_GAME
{
private:
	struct S_NODE
	{
		int nData;
		S_NODE* pNext;
	};

private:
	S_NODE* m_pBegin;
	S_NODE* m_pEnd;

public:
	C_GAME();
	void add(int nData);
	void print();

};