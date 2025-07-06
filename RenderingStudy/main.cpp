#include <iostream>

#include <Support/WinInclude.h>
#include <Support/ComPointer.h>

#include <Debug/DXDebugLayer.h>

int main()
{
	DXDebugLayer::Get().Init();

	DXDebugLayer::Get().Shutdown();
	
}
