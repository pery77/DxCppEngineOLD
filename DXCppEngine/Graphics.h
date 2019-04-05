#pragma once
#include <d3d11.h>

class SwapChain;
class DeviceContext;

class Graphics
{
public:
	// Initialize
	Graphics();
	bool init();

	//Release
	~Graphics();
	bool release();

	static Graphics* get();

private:

	ID3D11Device * m_d3d_device;
	D3D_FEATURE_LEVEL m_feature_level;
	ID3D11DeviceContext * m_imm_context;
};

