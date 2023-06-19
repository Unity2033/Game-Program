#pragma once
class IPhone
{
	// 속성
private:
	int volume;

	// 기능
public :
	IPhone();

	// SETTER 
	void SetControlSound(int volume);

	// GETTER
	int GetVolume();
};

