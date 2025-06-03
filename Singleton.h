#pragma once
template<typename T>
class Singleton // �̱����� ���α׷� ���� �� �ϳ��� �����ؾ��ϴ� ��ü... and ��𼭳� ���� �����ؾ���...
{
private:
	static T* instance; // static : ��������... ��𼭳� ���� ���������� �����̺�..
	// ***�߿�*** �������� instance�� ���ǰ� �ȵǾ��ֱ� ������ console.cpp���� �ʱ�ȭ �ʼ�...!!!

protected: // �����ڸ� pretected �� ���Ƴ��ұ� ������ �� Ŭ������ ��ӹ��� GameMngŬ���������� ���� ������...
	Singleton()
	{

	}
	~Singleton()
	{

	}
	Singleton& operator=(const Singleton& a) = delete; // ���۷����͸� ���� �̱��� ���� ���...
	Singleton(const Singleton&) = delete;

public:
	static T* Getles() // �����Լ�... �� �Լ��� ���� ��� �ൿ�� �� ����...
	{
		if (instance == nullptr)
		{
			instance =  new T();
		}
		return instance;
	}
};