#include "IPhone.h"

IPhone::IPhone()
{
	volume = 0;
}

void IPhone::SetControlSound(int volume)
{ 
	if (volume > 100 || volume < 0)
	{
		return;
	}
	
	this->volume = volume;
}

int IPhone::GetVolume()
{
	return volume;
}
