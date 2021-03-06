#include "./randommanagerimpl.h"
#include <cstdlib>

RandomManagerImpl::RandomManagerImpl( IOutputManagerPtr outputManagerPtr): outputManagerPtr_( outputManagerPtr)
{
	srand( time(NULL));
}

RandomManagerImpl::~RandomManagerImpl()
{

}

int RandomManagerImpl::getRandom( int maxIndex) const
{
	return ((rand() % maxIndex) + 1);
}
