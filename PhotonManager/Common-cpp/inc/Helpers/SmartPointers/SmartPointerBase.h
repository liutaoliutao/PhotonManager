/* Exit Games Common - C++ Client Lib
 * Copyright (C) 2004-2018 by Exit Games GmbH. All rights reserved.
 * http://www.photonengine.com
 * mailto:developer@photonengine.com
 */

#pragma once

#include "Allocate.h"

namespace ExitGames
{
	namespace Common
	{
		namespace Helpers
		{
			class SmartPointerBase
			{
			protected:
				virtual ~SmartPointerBase(void) = 0;
			};
		}
	}
}
