#pragma once

#include "Common.h"

namespace ExitGames
{
	namespace Photon
	{
		namespace Punchthrough
		{
			class PunchListener
			{
			public:
				virtual ~PunchListener(void){};

				virtual void onReceiveDirect(const Common::JVector<nByte>& inBuf, int remoteID, bool relay) = 0;
			};
		}
	}
}
