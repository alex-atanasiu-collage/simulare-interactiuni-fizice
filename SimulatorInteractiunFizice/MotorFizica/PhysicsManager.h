#pragma once

#ifdef PHYSICS_EXPORTS  
#define PHYSICS_API __declspec(dllexport)   
#else  
#define PHYSICS_API __declspec(dllimport)   
#endif  

using namespace DirectX;

namespace Physics{
	/*
	 * class: PhysicsManager
	 */
	class PhysicsManager
	{
		private:
			ID3D11Device* m_pd3dDevice;
			ID3D11Buffer* m_pVertexBuffer;
			ID3D11DeviceContext* m_pImmediateContext;
			ID3D11Buffer* m_pIndexBuffer;
			ID3D11Buffer* m_pConstantBuffer;
			ID3D11VertexShader* m_pVertexShader;
			ID3D11PixelShader* m_pPixelShader;
			ID3D11InputLayout* m_pVertexLayout;
			float m_screenRatio;
			
			XMMATRIX m_World;
			XMMATRIX m_View;
			XMMATRIX m_Projection;

		public:
			PhysicsManager(float screenRatio);
			~PhysicsManager(void);

			void DebugGenerateRenderElement();
			void Render();

			inline void setDevice(ID3D11Device* pd3dDevice) { m_pd3dDevice = pd3dDevice; }
			inline void setDeviceContext(ID3D11DeviceContext* pImmediateContext) { m_pImmediateContext = pImmediateContext; }
	};
}

