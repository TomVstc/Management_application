#pragma once
#include "CL_CAD.h"
#include "CL_Statistique.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_svc {

	ref class CL_gestion_statistique
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_Statistique^ Statistique;
		DataSet^ ds_statistique;
	public:
		CL_gestion_statistique();
		DataSet^ Produit_seuil(String^);
	};

}


