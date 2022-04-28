////////////////////////////////////////////////////////////////////
//DeRap: exile_server\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Apr 28 16:29:05 2022 : 'file' last modified on Thu Jan 01 08:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class exile_server
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","exile_server_config"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions
{
	class ExileServer
	{
		class Bootstrap
		{
			file = "exile_server\bootstrap";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
		class FiniteStateMachine
		{
			file = "exile_server\fsm";
			class main
			{
				ext = ".fsm";
			};
		};
	};
};
