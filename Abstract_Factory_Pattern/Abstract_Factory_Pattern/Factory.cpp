#include "Factory.h"
#include"Concrect_Factory.h"

AFcatory * AFcatory::CreateFactory(FACTORY_TYPE type)
{
	switch (type)
	{
	case FACTORY_TYPE::BENZ_F:
		return new BenzFacroy();
		break;
	case FACTORY_TYPE::BMW_F:
		return new BMWFacroy();
		break;
	case FACTORY_TYPE::AUDI_F:
		return new AudiFacroy();
		break;
	default:
		return nullptr;
		break;
	}
}
