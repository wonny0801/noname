#pragma once
class cStateCtrl
{
public:
	cState* m_pCurState; // ���� ȭ��...
	cState* m_pPrevState;// ���� ȭ��...

	cState* m_pStates[E_STATE_MAX];

	cStateCtrl();
	~cStateCtrl();

public:
	void Init();
	bool StateAdd(int Index, cState* pState); // ������Ʈ �߰��ϱ�...
	bool StateRelease(int Index); // ������Ʈ ����...
	bool StateChange(int Index); // ���� �����ִ� ȭ�� �ٲٱ�... ��, ����ȭ������ �̵�

public:
	void Update();
	void Draw();
};
