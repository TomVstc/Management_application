#pragma once
#include "CL_Article.h"
#include "CL_CAD.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_svc {
    ref class CL_gestion_article
    {
    private:
        NS_Composants::CL_CAD^ cad;
        NS_Composants::CL_Article^ article;
        DataSet^ ds;
    public:
        CL_gestion_article();
        DataSet^ listearticle(String^);
        int ajouter(String^, String^, String^, int, String^, int, String^);
        void modifier(String^, String^, String^, int, String^, int, String^, int);// dernier parametre est id article
        void supprimer(int);
    };

}