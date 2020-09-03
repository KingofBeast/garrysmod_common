#include "Symbols.hpp"
#include "Symbol.hpp"
#include "Platform.hpp"

namespace Symbols
{

#if defined SYSTEM_WINDOWS

#if defined ARCHITECTURE_X86_64

	const std::vector<Symbol> CBasePlayer_HandleClientLuaError = {
		Symbol::FromName( "?HandleClientLuaError@@YAXPEAVCBasePlayer@@PEBD@Z" )
	};

	const std::vector<Symbol> FileSystemFactory = {
		Symbol::FromName( "?FileSystemFactory@@YAPEAXPEBDPEAH@Z" )
	};

	const Symbol g_pFullFileSystem = Symbol::FromName( "?g_pFullFileSystem@@3PEAVIFileSystem@@EA" );

	const std::vector<Symbol> IServer = {
		Symbol::FromName( "?sv@@3VCGameServer@@A" )
	};

	const std::vector<Symbol> CNetChan_ProcessMessages = {
		Symbol::FromName( "?ProcessMessages@CNetChan@@AAE_NAAVbf_read@@@Z" )
	};

	const std::vector<Symbol> CBaseClient_ConnectionStart = {
		Symbol::FromName( "?ConnectionStart@CBaseClient@@UEAAXPEAVINetChannel@@@Z" )
	};

	const std::vector<Symbol> CBaseClientState_ConnectionStart = {
		Symbol::FromName( "?ConnectionStart@CBaseClientState@@UEAAXPEAVINetChannel@@@Z" )
	};

	const std::vector<Symbol> CBaseServer_RecalculateTags = {
		Symbol::FromName( "?RecalculateTags@CBaseServer@@QEAAXXZ" )
	};

	const std::vector<Symbol> SteamGameServerAPIContext = {
		Symbol::FromName( "?s_SteamGameServerAPIContext@@3VCSteamGameServerAPIContext@@A" )
	};

	const std::vector<Symbol> GModDataPack_SendFileToClient = {
		Symbol::FromName( "?SendFileToClient@GModDataPack@@QEAAXHH@Z" )
	};

	const std::vector<Symbol> CNetChan_IsValidFileForTransfer = {
		Symbol::FromName( "?IsValidFileForTransfer@CNetChan@@SA_NPEBD@Z" )
	};

	const Symbol net_sockets;

	const Symbol GMOD_GetNetSocket = Symbol::FromName( "?GMOD_GetNetSocket@@YAPEAUnetsocket_t@@H@Z" );

	const std::vector<Symbol> GModDataPack_AddOrUpdateFile = {
		Symbol::FromName( "?AddOrUpdateFile@GModDataPack@@QEAAXPEAULuaFile@@_N@Z" )
	};

#elif defined ARCHITECTURE_X86

	const std::vector<Symbol> CBasePlayer_HandleClientLuaError = {
		Symbol::FromName( "?HandleClientLuaError@@YAXPAVCBasePlayer@@PBD@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x83\xEC\x08\x8B\x0D\x2A\x2A\x2A\x2A\x57\x8B\x7D\x08" )
	};

	const std::vector<Symbol> FileSystemFactory = {
		Symbol::FromName( "?FileSystemFactory@@YAPAXPBDPAH@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x68\x2A\x2A\x2A\x2A\xFF\x75\x08\xE8" )
	};

	const Symbol g_pFullFileSystem = Symbol::FromName( "?g_pFullFileSystem@@3PAVIFileSystem@@A" );

	const std::vector<Symbol> IServer = {
		Symbol::FromName( "?sv@@3VCGameServer@@A" ),
		Symbol::FromSignature( "\x2A\x2A\x2A\x2A\xE8\x2A\x2A\x2A\x2A\xD8\x6D\x24\x83\x4D\xEC\x10" )
	};

	const std::vector<Symbol> CNetChan_ProcessMessages = {
		Symbol::FromName( "?ProcessMessages@CNetChan@@AEAA_NAEAVbf_read@@@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x83\xEC\x2C\xF7\x05" )
	};

	const std::vector<Symbol> CBaseClient_ConnectionStart = {
		Symbol::FromName( "?ConnectionStart@CBaseClient@@UAEXPAVINetChannel@@@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x51\x53\x56\x57\x8B\xD9\x6A" )
	};

	const std::vector<Symbol> CBaseClientState_ConnectionStart = {
		Symbol::FromName( "?ConnectionStart@CBaseClientState@@UAEXPAVINetChannel@@@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x83\xEC\x08\x53\x56\x57\x6A" )
	};

	const std::vector<Symbol> CBaseServer_RecalculateTags = {
		Symbol::FromName( "?RecalculateTags@CBaseServer@@QAEXXZ" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x83\xEC\x60\x56\x6A\x00\x68\x2A\x2A\x2A\x2A\x8D\x4D\xE8" )
	};

	const std::vector<Symbol> SteamGameServerAPIContext = {
		Symbol::FromName( "?s_SteamGameServerAPIContext@@3VCSteamGameServerAPIContext@@A" ),
		Symbol::FromSignature( "\x2A\x2A\x2A\x2A\xE8\x2A\x2A\x2A\x2A\x6A\x00\x68\x2A\x2A\x2A\x2A\xFF\x55\x08\x83\xC4\x08\xA" )
	};

	const std::vector<Symbol> GModDataPack_SendFileToClient = {
		Symbol::FromName( "?SendFileToClient@GModDataPack@@QAEXHH@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x83\xEC\x40\x53\x57\x8B\x7D\x0C" )
	};

	const std::vector<Symbol> CNetChan_IsValidFileForTransfer = {
		Symbol::FromName( "?IsValidFileForTransfer@CNetChan@@SA_NPBD@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x53\x8B\x5D\x08\x56\x57\x85\xDB\x0F\x84" )
	};

	const Symbol net_sockets = Symbol::FromSignature(
		"\x2A\x2A\x2A\x2A\x56\x57\x8B\x7D\x08\x8B\xF7\x03\xF6\x8B\x44\xF3\x0C\x85\xC0\x74\x0A\x57\x50" );

	const Symbol GMOD_GetNetSocket = Symbol::FromName( "?GMOD_GetNetSocket@@YAPAUnetsocket_t@@H@Z" );

	const std::vector<Symbol> GModDataPack_AddOrUpdateFile = {
		Symbol::FromName( "?AddOrUpdateFile@GModDataPack@@QAEXPAULuaFile@@_N@Z" ),
		Symbol::FromSignature( "\x55\x8B\xEC\x83\xEC\x20\x53\x56\x57\x8B\x7D\x08\x8B\xD9\x83\x7F" )
	};

#endif

#elif defined SYSTEM_LINUX

	const std::vector<Symbol> CBasePlayer_HandleClientLuaError = {
		Symbol::FromName( "_Z20HandleClientLuaErrorP11CBasePlayerPKc" ),
	};

	const std::vector<Symbol> FileSystemFactory = { Symbol::FromName( "_Z17FileSystemFactoryPKcPi" ) };

	const Symbol g_pFullFileSystem = Symbol::FromName( "g_pFullFileSystem" );

	const std::vector<Symbol> IServer = {
		Symbol::FromName( "sv" ),

#if defined ARCHITECTURE_X86

		Symbol::FromSignature( "\x2A\x2A\x2A\x2A\x89\x5D\xA8\x89\x44\x24\x08\xE8" )

#endif

	};

	const std::vector<Symbol> CNetChan_ProcessMessages = {
		Symbol::FromName( "_ZN8CNetChan15ProcessMessagesER7bf_read" ),

#if defined ARCHITECTURE_X86

		Symbol::FromSignature( "\x55\x89\xE5\x57\x56\x53\x83\xEC\x6C\x8B\x3D\x2A\x2A\x2A\x2A\x8B" )

#endif

	};

	const std::vector<Symbol> CBaseClient_ConnectionStart = {
		Symbol::FromName( "_ZN11CBaseClient15ConnectionStartEP11INetChannel" ),

#if defined ARCHITECTURE_X86

		Symbol::FromSignature( "\x55\x89\xE5\x57\x56\x53\x83\xEC\x1C\x8B" )

#endif

	};

	const std::vector<Symbol> CBaseClientState_ConnectionStart = {
		Symbol::FromName( "_ZN16CBaseClientState15ConnectionStartEP11INetChannel" ),

#if defined ARCHITECTURE_X86

		Symbol::FromSignature( "\x55\x89\xE5\x57\x56\x53\x83\xEC\x1C\x8B" )

#endif

	};

	const std::vector<Symbol> CBaseServer_RecalculateTags = {
		Symbol::FromName( "_ZN11CBaseServer15RecalculateTagsEv" )
	};

	const std::vector<Symbol> SteamGameServerAPIContext = {
		Symbol::FromName( "_ZL27s_SteamGameServerAPIContext" )
	};

	const std::vector<Symbol> GModDataPack_SendFileToClient = {
		Symbol::FromName( "_ZN12GModDataPack16SendFileToClientEii" )
	};

	const std::vector<Symbol> CNetChan_IsValidFileForTransfer = {
		Symbol::FromName( "_ZN8CNetChan22IsValidFileForTransferEPKc" )
	};

	const Symbol net_sockets = Symbol::FromName( "_ZL11net_sockets" );

	const Symbol GMOD_GetNetSocket = Symbol::FromName( "_Z17GMOD_GetNetSocketi" );

	const std::vector<Symbol> GModDataPack_AddOrUpdateFile = {
		Symbol::FromName( "_ZN12GModDataPack15AddOrUpdateFileEP7LuaFileb" ),
		
#if defined ARCHITECTURE_X86

		Symbol::FromSignature( "\x55\x89\xE5\x57\x56\x53\x83\xEC\x4C\x8B\x45\x10\x8B\x5D\x08\x8B" )

#endif

	};

#elif defined SYSTEM_MACOSX

	const std::vector<Symbol> CBasePlayer_HandleClientLuaError = {
		Symbol::FromSignature( "\x55\x89\xE5\x57\x56\x53\x83\xEC\x4C\x65\xA1\x2A\x2A\x2A\x2A\x89\x45\xE4" )
	};

	const std::vector<Symbol> FileSystemFactory = { Symbol::FromName( "_Z17FileSystemFactoryPKcPi" ) };

	const Symbol g_pFullFileSystem = Symbol::FromName( "g_pFullFileSystem" );

	const std::vector<Symbol> IServer = {
		Symbol::FromName( "sv" ),

#if defined ARCHITECTURE_X86

		Symbol::FromSignature( "\x2A\x2A\x2A\x2A\x8B\x08\x89\x04\x24\xFF\x51\x28\xF3\x0F\x10\x45" )

#endif

	};

	const std::vector<Symbol> CNetChan_ProcessMessages = {
		Symbol::FromName( "_ZN8CNetChan15ProcessMessagesER7bf_read" )
	};

	const std::vector<Symbol> CBaseClient_ConnectionStart = {
		Symbol::FromName( "_ZN11CBaseClient15ConnectionStartEP11INetChannel" )
	};

	const std::vector<Symbol> CBaseClientState_ConnectionStart = {
		Symbol::FromName( "_ZN16CBaseClientState15ConnectionStartEP11INetChannel" )
	};

	const std::vector<Symbol> CBaseServer_RecalculateTags = {
		Symbol::FromName( "_ZN11CBaseServer15RecalculateTagsEv" )
	};

	const std::vector<Symbol> SteamGameServerAPIContext = {
		Symbol::FromName( "_ZL27s_SteamGameServerAPIContext" )
	};

	const std::vector<Symbol> GModDataPack_SendFileToClient = {
		Symbol::FromName( "_ZN12GModDataPack16SendFileToClientEii" )
	};

	const std::vector<Symbol> CNetChan_IsValidFileForTransfer = {
		Symbol::FromName( "_ZN8CNetChan22IsValidFileForTransferEPKc" )
	};

	const Symbol net_sockets = Symbol::FromName( "_ZL11net_sockets" );

	const Symbol GMOD_GetNetSocket = Symbol::FromName( "_Z17GMOD_GetNetSocketi" );

	const std::vector<Symbol> GModDataPack_AddOrUpdateFile = {
		Symbol::FromName( "_ZN12GModDataPack15AddOrUpdateFileEP7LuaFileb" )
	};

#endif

}
