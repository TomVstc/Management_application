#pragma once
#include "CL_Client.h"
#include "CL_CAD.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_svc {

	ref class CL_gestion_client
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_Client^ client;
		DataSet^ ds;
	public:
		CL_gestion_client(void);
		DataSet^ listeClient(String^);
		int ajouter(String^, String^, String^, String^); // 4 paramètre (nom prenom ddn nclient)
		void modifier(String^, String^, String^, String^, int); // 5 param (id "" "" "" "");
		void supprimer(int);
	};

}

