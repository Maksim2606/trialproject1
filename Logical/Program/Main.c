
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed=500;
	EVIRD.ENABLED=1;
}

void _CYCLIC ProgramCyclic(void)
{
	DRIVE(&EVIRD);
	if(start == 0)  //Остановка двигателя если отжата кнопка Start
	{
		speed=0;
	}
}

void _EXIT ProgramExit(void)
{

}

