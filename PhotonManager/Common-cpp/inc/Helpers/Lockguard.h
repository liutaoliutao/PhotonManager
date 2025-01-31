/* Exit Games Common - C++ Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "Spinlock.h"

namespace ExitGames
{
	namespace Common
	{
		namespace Helpers
		{
			class Lockguard
			{
			public:
				Lockguard(Spinlock& lock);
				~Lockguard(void);
			private:
				Spinlock& mLock;
			};
		}
	}
}
