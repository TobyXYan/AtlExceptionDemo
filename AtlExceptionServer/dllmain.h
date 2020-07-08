// dllmain.h : Declaration of module class.

class CAtlExceptionServerModule : public ATL::CAtlDllModuleT< CAtlExceptionServerModule >
{
public :
	DECLARE_LIBID(LIBID_AtlExceptionServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLEXCEPTIONSERVER, "{9374c72c-fe31-4080-842e-ca0ac63f6dc3}")
};

extern class CAtlExceptionServerModule _AtlModule;
