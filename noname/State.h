#pragma once
class cState
{
public:
	cState(); // cpp �����ڿ����� �� ���� �ʱ�ȭ��... 
	~cState();
public:
	int m_StateIndex; // ���� State �ε�����ȣ...
	cState* m_pCurState; // ���� State...  �ڱ��ڽ��� ����Ű��...
public:
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Exit() = 0;
};
