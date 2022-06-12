#pragma once
#include"CL_CAD.h"
#include"CL_Adresse_Livraison.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_svc {

	ref class CL_gestion_adresse_livraison
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_Adresse_Livraison^ Adresse_livraison;
		DataSet^ ds;
	public:
		CL_gestion_adresse_livraison(void);
		DataSet^ listeAdresseLivraison(String^);
		int ajouter(String^, String^, String^, String^); // 4 paramètre
		void modifier(String^, String^, String^, String^, int); // 5 param (id "" "" "" "");
		void supprimer(int);
	};
}