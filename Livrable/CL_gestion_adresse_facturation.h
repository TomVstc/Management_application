#pragma once
#include"CL_CAD.h"
#include"CL_Adresse_Facturation.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_svc {

	ref class CL_gestion_adresse_facturation
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_Adresse_Facturation^ Adresse_facturation;
		DataSet^ ds;
	public:
		CL_gestion_adresse_facturation(void);
		DataSet^ listeAdresseFacturation(String^);
		int ajouter(String^, String^, String^, String^); // 4 paramètre
		void modifier(String^, String^, String^, String^, int); // 5 param (id "" "" "" "");
		void supprimer(int);
	};
}