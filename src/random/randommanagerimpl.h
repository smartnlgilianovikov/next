#ifndef RANDOMMANAGERIMPL_H
#define RANDOMMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

#include "../output/ioutputmanager.h"
#include "irandommanagerimpl.h"

class RandomManagerImpl: public IRandomManagerImpl{
public:
	RandomManagerImpl( IOutputManagerPtr outputManagerPtr);
	~RandomManagerImpl();

	int getRandom( int maxIndex) const;

private:
	IOutputManagerPtr outputManagerPtr_;
};

typedef boost::shared_ptr< RandomManagerImpl> RandomManagerImplPtr;

#endif // RANDOMMANAGERIMPL_H
