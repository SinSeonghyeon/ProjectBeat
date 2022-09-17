#pragma once

class SpecialEf : public Effect
{
public:
	SpecialEf(GameObject* _GameObject);
	virtual ~SpecialEf();

private:
	bool m_isCol;

public:
	//이펙트 플레이.
	virtual void Play(bool _isPlayer1, int _CharIndex , float _Damage = 0);
	virtual void Start();
	virtual void Update() ; // 모든 Object Udpate돌릴 때 (ObjectManager) 오브젝트가 Components를 가지고 있으면 같이 업데이트 해주기.
	virtual void SetName() {m_Name = "SpecialEf" ;}

	virtual void OnEnterCollider(GameObject* Other);
};

