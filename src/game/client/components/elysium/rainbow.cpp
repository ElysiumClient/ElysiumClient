#include "rainbow.h"

#include <engine/shared/config.h>

#include <game/client/gameclient.h>

#include <cmath>

void CRainbow::OnRender()
{
	if(!g_Config.m_EcRainbowTee)
		return;

	m_Time += Client()->RenderFrameTime() * ((float)g_Config.m_EcRainbowSpeed / 100.0f);
	const ColorRGBA Col = color_cast<ColorRGBA>(ColorHSLA(std::fmod(m_Time, 1.0f), 1.0f, 0.5f));

	const int LocalClientId = GameClient()->m_Snap.m_LocalClientId;
	if(LocalClientId < 0 || !GameClient()->m_Snap.m_aCharacters[LocalClientId].m_Active)
		return;

	CTeeRenderInfo *pRenderInfo = &GameClient()->m_aClients[LocalClientId].m_RenderInfo;
	pRenderInfo->m_CustomColoredSkin = true;
	pRenderInfo->m_ColorBody = Col;
	pRenderInfo->m_ColorFeet = Col;
	pRenderInfo->m_BloodColor = Col;
}
