#include<iostream>
#include "game.h"

C_GAME::C_GAME() :
	m_pBegin{},
	m_pEnd{}
{
}

void C_GAME::add(int nData)
{
	if (!m_pBegin)
	{
		m_pBegin = new S_NODE{};
		m_pBegin->nData = nData;
		return;
	}

	S_NODE* pEnd = m_pBegin;

	while (pEnd->pNext)
	{
		pEnd = pEnd->pNext;
	}

	pEnd->pNext = new S_NODE{};
	pEnd->pNext->nData = nData;

}

void C_GAME::print()
{
	S_NODE* pPrintNode = m_pBegin;

	while (pPrintNode)
	{
		printf("%d ", pPrintNode->nData);
		pPrintNode = pPrintNode->pNext;
	}
	printf("\n");
}
