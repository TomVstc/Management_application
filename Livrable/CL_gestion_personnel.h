#pragma once
#include "CL_CAD.h"
#include "CL_Personnel.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Svc
{
	ref class CL_svc_gestionPersonnes
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_personne^ personne;
		DataSet^ ds;
	public:
		CL_svc_gestionPersonnes(void);
		DataSet^ listePersonnes(String^);
		void ajouter(String^, String^, String^, String^, String^, String^, String^, String^);
		void modifier(String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void supprimer(String^);
	};
}
