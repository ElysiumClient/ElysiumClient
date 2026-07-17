#ifndef GAME_CLIENT_COMPONENTS_ELYSIUM_RAINBOW_H
#define GAME_CLIENT_COMPONENTS_ELYSIUM_RAINBOW_H

#include <game/client/component.h>

class CRainbow : public CComponent
{
	float m_Time = 0.0f;

public:
	int Sizeof() const override { return sizeof(*this); }
	void OnRender() override;
};

#endif
